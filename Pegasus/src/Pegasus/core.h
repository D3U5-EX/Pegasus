#pragma once
#ifdef PG_PLATFORM_WINDOWS
	#ifdef PG_BUILD_DLL
		#define PEGASUS_API __declspec(dllexport)
	#else
		#define PEGASUS_API __declspec(dllimport)
	#endif // PG_BUILD_DLL

#else
	#error PEGASUS only supports Windows!

#endif // PG_PLATFORM_WINDOWS
