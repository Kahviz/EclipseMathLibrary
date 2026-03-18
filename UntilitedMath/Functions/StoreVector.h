#pragma once
#include "../UntilitedMath.h"

inline void StoreVector3(Vector3* dest, const Vector4& src) {
	if (!dest) return;
	dest->set(src.x(), src.y(), src.z());
}

inline void StoreFloat3(Vector3* dest, const Vector4& src) {
	if (!dest) return;
	dest->set(src.x(), src.y(), src.z());
}