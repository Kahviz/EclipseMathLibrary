#include <iostream>
#include <chrono>
#include <iomanip>
#include "BoronMath.h"

using namespace std;

int main()
{
    cout << "Hello MathLib" << endl;
    BML::Color255 color255_1 = { 255,0,125 };
    BML::Color255 color255_2 = { 255,10,255 };
    BML::Int2 int2_1 = { 10,20 };
    BML::Int2 int2_2 = { 10,50 };
    BML::Int3 Int3_1 = { 10,10,10 };
    BML::Int3 Int3_2 = { 20,50,10 };

    BML::Matrix4x4 mat4x4_1;
    mat4x4_1.setAll(5);
    BML::Matrix4x4 mat4x4_2;
    mat4x4_2.setAll(10);

    BML::Vector2 vec2_1 = { 10.0f,11.0f };
    BML::Vector2 vec2_2 = { 10.0f,11.0f };
    BML::Vector3 vec3_1 = { 10.0f,11.0f,1.0f };
    BML::Vector3 vec3_2 = { 10.0f,11.0f,10.0f };
    BML::Vector4 vec4_1 = { 10.0f,11.0f,50.0f,10.0f };
    BML::Vec4 vec4_2 = { 10.0f,11.0f,5.0f,2.5f };

    cout << color255_1 + color255_2 << endl;
    cout << int2_1 + int2_2 << endl;
    cout << Int3_1 + Int3_2 << endl;
    cout << mat4x4_1 + mat4x4_2 << endl;
    cout << vec2_1 + vec2_2 << endl;

    cout << vec3_1 + vec3_2 << endl;
    cout << vec4_1 + vec4_2 << endl;

    mat4x4_1.row3() = { 67,67,67,67 };


    cout << mat4x4_1 << endl;
    return 0;
}

/*
Vec2:
	Average: 16.10 ns
*/