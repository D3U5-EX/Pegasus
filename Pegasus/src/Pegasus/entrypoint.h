#pragma once
#ifdef PG_PLATFORM_WINDOWS
extern Pegasus::Application* Pegasus::CreateApplication();
int  main(int argc, char** argv)
{
	printf("Pegasus Starting\n");
	auto app = Pegasus::CreateApplication();
	app->Run();
	delete app;
	return 0;
}
#endif // PG_PLATFORM_WINDOWS
