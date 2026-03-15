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