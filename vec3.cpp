#include "vec3.h"
#include <cmath>


inline float sqr(float v)
{
	return v * v;
}

vec3::vec3() 
{
	this->x = 0.0f;
	this->y = 0.0f;
	this->z = 0.0f;
}

vec3::vec3(float x, float y, float z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

vec3::vec3(const vec3 &vec)
{
	this->x = vec.x;
	this->y = vec.y;
	this->z = vec.z;
}

vec3 vec3::operator + (const vec3 &vec) const
{
	return vec3(this->x + vec.x, this->y + vec.y, this->z + vec.z);
}

vec3 vec3::operator - (const vec3 &vec) const
{
	return vec3(this->x - vec.x, this->y - vec.y, this->z - vec.z);
}

// Scalar multiplication
vec3 vec3::operator * (float scale) const
{
	return vec3(this->x * scale, this->y * scale, this->z * scale);
}

// Dot product
float vec3::operator * (const vec3 &vec) const
{
	return this->x * vec.x + this->y * vec.y + this->z * vec.z;
}

vec3 vec3::operator / (float scale) const
{
	if (scale == 0.0f) {
		return vec3(nanf("0"), nanf("0"), nanf("0"));
	}
	return vec3(this->x / scale, this->y / scale, this->z / scale);
}

float vec3::length2()
{
	return + sqr(this->x) + sqr(this->y) + sqr(this->z);
}
float vec3::length()
{
	return std::sqrt(this->length2());
}

// Return value will be the length/magnitude divided;
float vec3::normalize()
{
	float mag = this->length();
	*this /= mag;
	return mag;
}
vec3 vec3::normalized()
{
	float mag = this->length();
	return vec3((*this) / mag);
}

void vec3::operator = (const vec3 &vec)
{
	this->x = vec.x;
	this->y = vec.y;
	this->z = vec.z;
}

void vec3::operator +=(const vec3 &vec)
{
	this->x += vec.x;
	this->y += vec.y;
	this->z += vec.z;
}

void vec3::operator -= (const vec3 &vec)
{
	this->x -= vec.x;
	this->y -= vec.y;
	this->z -= vec.z;
}

void vec3::operator *= (float scale)
{
	this->x *= scale;
	this->y *= scale;
	this->z *= scale;
}

void vec3::operator /= (float scale)
{
	this->x /= scale;
	this->y /= scale;
	this->z /= scale;
}

vec3 vec3::operator -() const
{
	return vec3(-(this->x), -(this->y), -(this->z));
}
