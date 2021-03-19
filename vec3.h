#pragma once
#include <cmath>

struct vec3 {
public:
	float x, y, z;
	vec3();
	vec3(float x, float y, float z);
	vec3(const vec3 &vec);


	vec3 operator + (const vec3 &vec) const;
	vec3 operator - (const vec3 &vec) const;
	// Scalar multiplication
	vec3 operator * (float scale) const;
	// Dot product
	float operator * (const vec3 &vec) const;
	vec3 operator / (float scale) const;

	float length();
	float length2();

	float normalize();
	vec3 normalized();

	void operator = (const vec3 &vec);
	void operator += (const vec3 &vec);
	void operator -= (const vec3 &vec);
	void operator *= (float scale);
	void operator /= (float scale);
	vec3 operator -() const;
} ;


