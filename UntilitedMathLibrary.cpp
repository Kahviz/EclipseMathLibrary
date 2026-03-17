#include <iostream>
#include <chrono>
#include <iomanip>
#include "UntilitedMathLibrary.h"

using namespace std;

int main()
{
    cout << "Hello Engine" << endl;

    Vector2 vec2_1(2, 2);
    Vector2 vec2_2(4, 4);
    Vector2 dummy;
    Int3 int3_1 = { 1,1,1 };
    Int3 int3_2 = { 2,2,2 };
    Color255 col1 = { 255,0,0 };
    Color255 col2 = { 255,255,0 };
    Matrix4x4 mat1 = { 5 };
    Matrix4x4 mat2 = { 4 };


    //All Here
    cout << int3_1 + int3_2 << endl;
    cout << col1 + col2 << endl;
    cout << mat1 - mat2 << endl;

    const int Times = 1000000;
    long long totalNanoseconds = 0;

    for (int i = 0; i < Times; i++) {
        auto start = std::chrono::high_resolution_clock::now();

        dummy = vec2_1 - vec2_2;

        auto end = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
        totalNanoseconds += duration.count();
    }

    double averageNs = static_cast<double>(totalNanoseconds) / Times;

    cout << fixed << setprecision(2);
    cout << "Average: " << averageNs << " ns" << endl;
    cout << "Result: " << dummy << endl;

    return 0;
}

/*
Vec2:
	Average: 16.10 ns
*/