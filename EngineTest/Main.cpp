/*
 Developed by Vitor Felipe Ramos Mello - Copyright � GanjGameStudio - 2023
*/

#pragma comment(lib, "GanjGameEngine.lib")

#define TEST_ENTITY_COMPONENTS 1

#if TEST_ENTITY_COMPONENTS
#include "TestEntityComponents.h"
#else
#error One of the tests need to be enabled

#endif

int main ( )
{
#if _DEBUG
	_CrtSetDbgFlag (_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
#endif

	engine_test test { };

	if (test.initialize ( ))
	{
		test.run ( );
	}

	test.shutdown ( );
}