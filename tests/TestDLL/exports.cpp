
#include <iostream>
#include <windows.h>


__declspec(dllexport) void print()
{
	std::cout << "TestDll::print Running successfully" << std::endl;
}


__declspec(dllexport) int add(int a, int b)
{
	std::cout << "TestDll::add Running successfully" << std::endl;
	return a + b;
}

__declspec(dllexport) int multiplication(int a, int b)
{
	std::cout << "TestDll::multiplication Running successfully" << std::endl;
	return a * b;
}

__declspec(dllexport) void inc()
{
	int input = 0;
	std::cout << "TestDll::inc Running successfully. please enter a number:" << std::endl;
	std::cin >> input;
	std::cout << input << "+1=" << input++<<std::endl;
	return;
}


BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
	std::cout << "TestDll::DllMain Called" << std::endl;
	switch (fdwReason)
	{
	case DLL_PROCESS_ATTACH:
		std::cout << "TestDll::DllMain - reason is DLL_PROCESS_ATTACH" << std::endl;
		break;

	case DLL_THREAD_ATTACH:
		std::cout << "TestDll::DllMain - reason is DLL_THREAD_ATTACH" << std::endl;
		break;

	case DLL_THREAD_DETACH:
		std::cout << "TestDll::DllMain - reason is DLL_THREAD_DETACH" << std::endl;
		break;

	case DLL_PROCESS_DETACH:
		std::cout << "TestDll::DllMain - reason is DLL_PROCESS_DETACH" << std::endl;
		break;
	}
	return TRUE;
}
