#pragma once

#include <memory>
#include "Core.h"
#include <spdlog/spdlog.h>

namespace Tomoki {
	class TI_API Log
	{
	public:
		static void Init();
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger()
		{
			return s_CoreLogger;
		}
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger()
		{
			return s_ClientLogger;
		}
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

#define TI_CORE_TRACE(...)      ::Tomoki::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define TI_CORE_INFO(...)       ::Tomoki::Log::GetCoreLogger()->info(__VA_ARGS__)
#define TI_CORE_WARN(...)       ::Tomoki::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define TI_CORE_ERROR(...)      ::Tomoki::Log::GetCoreLogger()->error(__VA_ARGS__)
#define TI_CORE_CRITICAL(...)   ::Tomoki::Log::GetCoreLogger()->critical(__VA_ARGS__)

#define TI_CLIENT_TRACE(...)    ::Tomoki::Log::GetClientLogger()->trace(__VA_ARGS__)
#define TI_CLIENT_INFO(...)     ::Tomoki::Log::GetClientLogger()->info(__VA_ARGS__)
#define TI_CLIENT_WARN(...)     ::Tomoki::Log::GetClientLogger()->warn(__VA_ARGS__)
#define TI_CLIENT_ERROR(...)    ::Tomoki::Log::GetClientLogger()->error(__VA_ARGS__)
#define TI_CLIENT_CRITICAL(...) ::Tomoki::Log::GetClientLogger()->critical(__VA_ARGS__)