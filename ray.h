#include "vec3.h"

struct ray {
public:
	vec3 point, direction;
	ray();
	ray(vec3 point, vec3 direction);
};