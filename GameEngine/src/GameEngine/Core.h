#pragma once

#ifdef GE_PLATFORM_WINDOWS
	#ifdef GE_BUILD_DLL
		#define GAME_API __declspec(dllexport)	
	#else
		#define GAME_API __declspec(dllimport)
	#endif // !GE_BUILD_DLL
#else
	#error Game Engine only support Windows!
#endif // !GE_PLATFORM_WINDOWS