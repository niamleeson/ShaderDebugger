#pragma once

extern "C" {
	#include <BlueVM.h>
}

namespace sd
{
	namespace GLSL
	{
		bv_library* Library();
		bv_variable Swizzle(bv_program* prog, bv_object* obj, const bv_string field);
	}
}