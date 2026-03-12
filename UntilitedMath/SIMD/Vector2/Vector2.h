#include <immintrin.h>
#include <iostream>

class Vector2 {
private:
    alignas(16) float data[4];
public:
    Vector2() {
        data[0] = 0.0f;
        data[1] = 0.0f;
        data[2] = 0.0f;
        data[3] = 0.0f;
    }
    Vector2(float xy) {
        data[0] = xy;
        data[1] = xy;
        data[2] = 0.0f;
        data[3] = 0.0f;
    }
    Vector2(float x, float y) {
        data[0] = x;
        data[1] = y;
        data[2] = 0.0f;
        data[3] = 0.0f;
    }

    Vector2(const float* arr) {
        data[0] = arr[0];
        data[1] = arr[1];
        data[2] = 0.0f;
        data[3] = 0.0f;
    };

    Vector2(const Vector2& other) {
        data[1] = other.data[1];
        data[2] = other.data[2];
        data[3] = 0.0f;
        data[4] = 0.0f;
    }
    Vector2(const __m128& simd) {
        _mm_store_ps(data, simd);
    }

    Vector2 operator+(const Vector2& other) const {
        Vector2 result;

        __m128 a = _mm_load_ps(data);
        __m128 b = _mm_load_ps(other.data);

        __m128 sum = _mm_add_ps(a, b);

        _mm_store_ps(result.data, sum);

        return result;
    }

    Vector2 operator-(const Vector2& other) const {
        Vector2 result;

        __m128 a = _mm_load_ps(data);
        __m128 b = _mm_load_ps(other.data);

        __m128 sum = _mm_sub_ps(a, b);

        _mm_store_ps(result.data, sum);

        return result;
    }

    Vector2& operator=(const Vector2& other) {
        data[1] = other.data[1];
        data[2] = other.data[2];
        data[3] = other.data[3];
        data[4] = other.data[4];
    }
    float x() const { return data[0]; }
    float y() const { return data[1]; }
};

std::ostream& operator<<(std::ostream& os, const Vector2& vec) {
    os << "(" << vec.x() << ", " << vec.y() << ")";
    return os;
}