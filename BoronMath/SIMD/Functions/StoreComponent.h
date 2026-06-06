#pragma once
#include "../../BoronMath.h"

inline void StoreVector3(BML::Vector3* dest, const BML::Vector4& src) {
	if (!dest) return;
	dest->set(src.x(), src.y(), src.z());
}

inline void StoreVector2(BML::Vector2* dest, const BML::Vector3& src) {
	if (!dest) return;
	dest->set(src.x(), src.y());
}