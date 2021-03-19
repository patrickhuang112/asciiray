#include <Windows.h>
#include <iostream>
#include <string>
#include "vec3.h" 
#include "ray.h"


int main()
{
	vec3 test(0.0f, 0.1f, 0.02f);
	vec3 test2(0.1f, 0.2f, 0.03f);
	vec3 test3;
	vec3 result = test + test2;
	ray r(test, test2);
	printf("testx : %F", r.direction.x );
	return 0;
}