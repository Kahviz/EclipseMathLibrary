#pragma once
#include "../SIMD/Vector3/Vector3.h"

Matrix4x4 lookAt(const Vector3& eye, const Vector3& target, const Vector3& worldUp) {
    Vector3 zaxis = Vector3(
        target.x() - eye.x(),
        target.y() - eye.y(),
        target.z() - eye.z()
    );
    zaxis.normalize();

    Vector3 xaxis = zaxis.cross(worldUp);
    xaxis.normalize();

    Vector3 yaxis = xaxis.cross(zaxis);
    yaxis.normalize();

    Matrix4x4 result;

    result(0, 0) = xaxis.x(); result(0, 1) = xaxis.y(); result(0, 2) = xaxis.z();
    result(0, 3) = -xaxis.dot(eye);

    result(1, 0) = yaxis.x(); result(1, 1) = yaxis.y(); result(1, 2) = yaxis.z();
    result(1, 3) = -yaxis.dot(eye);

    result(2, 0) = -zaxis.x(); result(2, 1) = -zaxis.y(); result(2, 2) = -zaxis.z();
    result(2, 3) = zaxis.dot(eye);

    result(3, 0) = 0.0f; result(3, 1) = 0.0f; result(3, 2) = 0.0f; result(3, 3) = 1.0f;

    return result;
}