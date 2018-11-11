#pragma once
#include "core.h"
namespace Pegasus{

	class PEGASUS_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};

	//inside client
	Application* CreateApplication();

}




