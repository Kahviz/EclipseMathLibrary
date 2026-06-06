#pragma once
#include "BoronMath.h"

inline BML::Vector4 TransformNormal(const BML::Vector4& v, const BML::Matrix4x4& m)
{
    BML::Vector4 result;
    result.setX(v.x() * m(0, 0) + v.y() * m(1, 0) + v.z() * m(2, 0));
    result.setY(v.x() * m(0, 1) + v.y() * m(1, 1) + v.z() * m(2, 1));
    result.setZ(v.x() * m(0, 2) + v.y() * m(1, 2) + v.z() * m(2, 2));
    result.setW(0.0f);
    return result;
}

inline BML::Vector3 TransformNormal(const BML::Vector3& v, const BML::Matrix4x4& m)
{
    BML::Vector3 result;
    result.setX(v.x() * m(0, 0) + v.y() * m(1, 0) + v.z() * m(2, 0));
    result.setY(v.x() * m(0, 1) + v.y() * m(1, 1) + v.z() * m(2, 1));
    result.setZ(v.x() * m(0, 2) + v.y() * m(1, 2) + v.z() * m(2, 2));
    return result;
}