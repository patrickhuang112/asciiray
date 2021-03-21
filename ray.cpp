#include "ray.h"
#include "vec3.h"

ray::ray() {}

ray::ray (vec3 point, vec3 direction)
{
	this->point = point;
	this->direction = direction;
}
