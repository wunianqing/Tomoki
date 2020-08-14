#pragma once

#ifdef TI_PLATFORM_WINDOWS
extern Tomoki::Application* Tomoki::CreateApplication();

int main(int argc, char** argv)
{
	Tomoki::Application* app = Tomoki::CreateApplication();
	app->Run();
	delete app;
	return 0;
}
#endif // TI_PLATFORM_WINDOWS
