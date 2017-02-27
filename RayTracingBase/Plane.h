#ifndef PLANE_H
#define PLANE_H

#include "Object.h"

class Plane: public Object
{
public:
    Plane(vec3 origin, vec3 normal, Material *m);
    ~Plane() {}
    bool hit(const Ray& r, float t_min, float t_max, HitInfo& info) const;
private:
    //vec3 origin, normal;
    vec3 normal;
    float d;
};

#endif // PLANE_H
