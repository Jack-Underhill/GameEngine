#pragma once

#include <memory>

#ifdef GE_PLATFORM_WINDOWS
	#if GE_DYNAMIC_LINK
		#ifdef GE_BUILD_DLL
			#define GAME_API __declspec(dllexport)	
		#else
			#define GAME_API __declspec(dllimport)
		#endif // !GE_BUILD_DLL
	#else
		#define GAME_API
	#endif //!GE_DYNAMIC_LINK
#else
	#error Game Engine only support Windows!
#endif // !GE_PLATFORM_WINDOWS

#ifdef GE_DEBUG
	#define GE_ENABLE_ASSERTS
#endif // GE_DEBUG

#ifdef GE_ENABLE_ASSERTS
	#define GE_ASSERT(x, ...)		{ if(!(x)) { GE_ERROR("Assertion Failed: {0}",		__VA_ARGS__); __debugbreak(); } }
	#define GE_CORE_ASSERT(x, ...)	{ if(!(x)) { GE_CORE_ERROR("Assertion Failed: {0}",	__VA_ARGS__); __debugbreak(); } }
#else
	#define GE_ASSERT(x, ...)
	#define GE_CORE_ASSERT(x, ...)
#endif // !GE_ENABLE_ASSERTS

#define BIT(x) (1 << x)

#define GE_BIND_EVENT_FN(fn) std::bind(&fn, this, std::placeholders::_1)

namespace GameEngine
{
	template<typename T>
	using Scope = std::unique_ptr<T>;

	template<typename T>
	using Ref = std::shared_ptr<T>;
}