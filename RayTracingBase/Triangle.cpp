#include "Triangle.h"
#include "Scene.h"
#include <iostream>

Triangle::Triangle(vec3 a, vec3 b, vec3 c, Material *m) : Object(m)
{
    this->a = a;
    this->b = b;
    this->c = c;
    this->normal = (cross(b-a,c-a));
}

//e + td = a + β(b - a) + γ(c - a)

// (en el pdf: Xa equival a la coordenada X del punt a)

// |a d g|   |beta |   |j|
// |b e h| x |gamma| = |k|
// |c f i|   |  t  |   |l|

// a = Xa - Xb   d = Xa - Xc   g = Xd   j = Xa - Xe
// b = Ya - Yb   e = Ya - Yc   h = Yd   k = Ya - Ye
// c = Za - Zb   f = Za - Zc   i = Zd   l = Za - Ze

//e equival al punt de origen del vector. d equival al vector

//beta  = (j(ei - hf) + k(gf - di) + l(dh - eg)) / M
//gamma = (i(ak - jb) + h(jc - al) + g(bl - kc)) / M
//t     = (f(ak - jb) + e(jc - al) + d(bl - kc)) / M
//M     =  a(ei - hf) + b(gf - di) + c(dh - eg)

bool Triangle::hit(const Ray& r, float t_min, float t_max, HitInfo& rec) const
{
    float a = this->a.x-this->b.x,  b = this->a.y-this->b.y,  c = this->a.z-this->b.z,
          d = this->a.x-this->c.x,  e = this->a.y-this->c.y,  f = this->a.z-this->c.z,
          g = r.dirVector().x,  h = r.dirVector().y,  i = r.dirVector().z,
          j = this->a.x-r.origin.x,   k = this->a.y-r.origin.y,   l = this->a.z-r.origin.z;

    float M =  a*(e*i - h*f) + b*(g*f - d*i) + c*(d*h - e*g),
          t = -(f*(a*k - j*b) + e*(j*c - a*l) + d*(b*l - k*c)) / M;
    if (t < t_min || t > t_max) return false;

    //cout << "false 1" << endl;

    float gamma = (i*(a*k - j*b) + h*(j*c - a*l) + g*(b*l - k*c)) / M;
    //cout << gamma << endl;
    if (gamma < 0 || gamma > 1) return false;

    //cout << "false 2" << endl;

    float beta = (j*(e*i - h*f) + k*(g*f - d*i) + l*(d*h - e*g)) / M;
    if (beta < 0 || beta > 1-gamma) return false;

    //cout << "false 3" << endl;

    rec.t = t;
    rec.p = r.pointAtParameter(rec.t);
    rec.normal = this->normal;
    rec.mat_ptr = material;

    return true;
}
