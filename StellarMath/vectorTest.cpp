#include <iostream>
#include "Vector.h" 

int main()
{
	Vector2 v1 = { 3.0f, 4.0f };
	Vector2 v2 = { 1.0f, 2.0f };

	Vector2 zero = Vector2Zero();
	Vector2 one = Vector2One();
	Vector2 added = Vector2Add(v1, v2);
	Vector2 subtracted = Vector2Subtract(v1, v2);
	Vector2 scaled = Vector2Scale(v1, 2.0f);
	float length = Vector2Length(v1);
	Vector2 normalized = Vector2Normalize(v1);

	std::cout << "Vector2Zero: (" << zero.x << ", " << zero.y << ")" << std::endl;
	std::cout << "Vector2One: (" << one.x << ", " << one.y << ")" << std::endl;
	std::cout << "Vector2Add: (" << added.x << ", " << added.y << ")" << std::endl;
	std::cout << "Vector2Subtract: (" << subtracted.x << ", " << subtracted.y << ")" << std::endl;
	std::cout << "Vector2Scale: (" << scaled.x << ", " << scaled.y << ")" << std::endl;
	std::cout << "Vector2Length: " << length << std::endl;
	std::cout << "Vector2Normalize: (" << normalized.x << ", " << normalized.y << ")" << std::endl;

	return 0;
}
