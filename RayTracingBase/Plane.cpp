#include "Plane.h"

Plane::Plane(vec3 origin, vec3 normal, Material *m): Object(m)
{
    //this->origin = origin;
    this->normal = normal;
    //this->d = -(normal.x*origin.x + normal.y*origin.y + normal.z*origin.z);
    this->d = -dot(origin,normal);  //producte escalar entre vectors
}

// Pla -> ax+by+cz+d=0
bool Plane::hit(const Ray& r, float t_min, float t_max, HitInfo& rec) const
{
    vec3 dir = r.dirVector();
    vec3 po  = r.initialPoint();

    float den = dot(dir, this->normal);
    if (!den) return false;

    float t = -(this->d + dot(po, this->normal)) / den;
    if (t < t_min || t > t_max) return false;

    rec.t = t;
    rec.normal = this->normal;
    rec.p = po + t*dir;
    rec.mat_ptr = material;

    return true;
}
