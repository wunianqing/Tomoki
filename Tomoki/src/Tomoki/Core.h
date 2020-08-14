#pragma once

#ifdef TI_PLATFORM_WINDOWS
	#ifdef TI_BUILD_DLL
		#define TI_API __declspec(dllexport)
	#else
		#define TI_API __declspec(dllimport)
	#endif // TI_BUILD_DLL
#else
	#error Only suppors windows
#endif // TI_PLATFORM_WINDOWS