#pragma once
#include <iostream>

struct GPUVector2
{
	float x;
	float y;

	inline GPUVector2& operator+=(const GPUVector2& other) {
		x += other.x;
		y += other.y;
		return *this;
	}

	inline GPUVector2& operator-=(const GPUVector2& other) {
		x -= other.x;
		y -= other.y;
		return *this;
	}
};

inline std::ostream& operator<<(std::ostream& os, const GPUVector2& v)
{
	return os << "(" << v.x << ", " << v.y << ")";
}

inline GPUVector2 operator+(const GPUVector2& a, const GPUVector2& b)
{
	return GPUVector2{ a.x + b.x, a.y + b.y };
}

inline GPUVector2 operator-(const GPUVector2& a, const GPUVector2& b)
{
	return GPUVector2{ a.x - b.x, a.y - b.y };
}

inline GPUVector2 operator*(const GPUVector2& a, float scalar)
{
	return GPUVector2{ a.x * scalar, a.y * scalar };
}

inline GPUVector2 operator/(const GPUVector2& a, float scalar)
{
	return GPUVector2{ a.x / scalar, a.y / scalar };
}

inline float dot(const GPUVector2& a, const GPUVector2& b)
{
	return a.x * b.x + a.y * b.y;
}

inline float MagnitudeGPUVector2(GPUVector2 a, GPUVector2 b) {
	float dx = abs(a.x - b.x);
	float dy = abs(a.y - b.y);

	return dx + dy;
}