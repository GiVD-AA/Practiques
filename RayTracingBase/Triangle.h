#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Object.h"

class Triangle: public Object
{
public:
        Triangle(vec3 a, vec3 b, vec3 c, Material *m);
        ~Triangle() {}
        bool hit(const Ray& r, float t_min, float t_max, HitInfo& info) const;
private:
        // Vertexs del triangle
        vec3 a,b,c;
        // normal triangle
        vec3 normal;
};

#endif // TRIANGLE_H
