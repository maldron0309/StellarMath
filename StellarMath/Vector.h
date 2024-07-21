#pragma once

#ifdef __cplusplus
extern "C"
{
#endif

	typedef struct Vector2
	{
		float x;
		float y;
	} Vector2;

	typedef struct Vector3
	{
		float x;
		float y;
		float z;
	} Vector3;

	Vector2 Vector2Zero();
	Vector2 Vector2One();
	Vector2 Vector2Add(Vector2 v1, Vector2 v2);
	Vector2 Vector2Subtract(Vector2 v1, Vector2 v2);
	Vector2 Vector2Scale(Vector2 v, float scale);
	float Vector2Length(Vector2 v);
	Vector2 Vector2Normalize(Vector2 v);

#ifdef __cplusplus
}
#endif
