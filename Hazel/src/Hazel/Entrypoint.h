#pragma once
#ifdef HZ_PLATFORM_WINDOWS
extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv) {
	Hazel::Log::Init();
	HZ_CORE_WARN("Initialized log!");
	HZ_INFO("Initialized log!");

	std::cout << " start " << std::endl;
	auto app = Hazel::CreateApplication();
	app->run();
	delete app;
}

#endif // HZ_PLATFORM_WINDOWS

