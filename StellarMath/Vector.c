#include "Vector.h"
#include <math.h>

Vector2 Vector2Zero()
{
	Vector2 result = { 0.0f, 0.0f };
	return result;
}

Vector2 Vector2One()
{
	Vector2 result = { 1.0f, 1.0f };
	return result;
}

Vector2 Vector2Add(Vector2 v1, Vector2 v2)
{
	Vector2 result = { v1.x + v2.x, v1.y + v2.y };
	return result;
}

Vector2 Vector2Subtract(Vector2 v1, Vector2 v2)
{
	Vector2 result = { v1.x - v2.x, v1.y - v2.y };
	return result;
}

Vector2 Vector2Scale(Vector2 v, float scale)
{
	Vector2 result = { v.x * scale, v.y * scale };
	return result;
}

float Vector2Length(Vector2 v)
{
	return sqrtf(v.x * v.x + v.y * v.y);
}

Vector2 Vector2Normalize(Vector2 v)
{
	float length = Vector2Length(v);
	if (length == 0) return v;
	Vector2 result = { v.x / length, v.y / length };
	return result;
}
