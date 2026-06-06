#pragma once
#include "BoronMath.h"

inline BML::Vector4 LoadInt3(BML::Int3 a) {
	return BML::Vector4(
		static_cast<float>(a.x()),
		static_cast<float>(a.y()),
		static_cast<float>(a.z()),
		0.0f
	);
}