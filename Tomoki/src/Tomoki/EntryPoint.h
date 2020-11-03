#pragma once

#ifdef TI_PLATFORM_WINDOWS
extern Tomoki::Application* Tomoki::CreateApplication();

int main(int argc, char** argv)
{
	Tomoki::Log::Init();
	TI_CORE_INFO("Initialized log!");
	TI_CLIENT_WARN("Initialized log!");

	Tomoki::Application* app = Tomoki::CreateApplication();
	app->Run();
	delete app;
	return 0;
}
#endif // TI_PLATFORM_WINDOWS
