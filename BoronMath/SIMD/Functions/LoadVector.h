#pragma once
#include "BoronMath.h"

//Vector2
inline BML::Vector2 Vector2ToVector2(const BML::Vector2& a) {
    return BML::Vector2(a.x(), a.y());
}

inline BML::Vector3 Vector2ToVector3(const BML::Vector2& a) {
    return BML::Vector3(a.x(), a.y(), 0.0f);
}

inline BML::Vector4 Vector2ToVector4(const BML::Vector2& a) {
    return BML::Vector4(a.x(), a.y(), 0.0f, 0.0f);
}

//Vector3
inline BML::Vector2 Vector3ToVector2(const BML::Vector3& a) {
    return BML::Vector2(a.x(), a.y());
}

inline BML::Vector3 Vector3ToVector3(const BML::Vector3& a) {
    return BML::Vector3(a.x(), a.y(), a.z());
}

inline BML::Vector4 Vector3ToVector4(const BML::Vector3& a) {
    return BML::Vector4(a.x(), a.y(), a.z(), 0.0f);
}

//Vector4
inline BML::Vector2 Vector4ToVector2(const BML::Vector4& a) {
    return BML::Vector2(a.x(), a.y());
}

inline BML::Vector3 Vector4ToVector3(const BML::Vector4& a) {
    return BML::Vector3(a.x(), a.y(), a.z());
}