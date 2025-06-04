#pragma once
#define PROPERTIES_FILE_STR "FFmpegMFT.dll.properties"

class Logger
{
private:
	Logger()
	{
	}

public:	
	~Logger()
	{
	}

	static Logger& getInstance()
	{
		//"Meyers Singleton"
		//https://stackoverflow.com/a/43524389/3719543

		static Logger instance;
		return instance;
	}

	bool IsPiriorityLevelEnabled(int priorityLevel, const char* category)
	{
		return false;
	}

	template<typename... Args> 
	void Log(int level, const char* category, const char* stringFormat, Args... args)
	{
	}

	template<typename... Args> 
	void LogDebug(const char* stringFormat, Args... args)
	{
	}

	template<typename... Args> 
	void LogInfo(const char* stringFormat, Args... args)
	{
	}

	template<typename... Args> 
	void LogWarn(const char* stringFormat, Args... args)
	{
	}

	template<typename... Args> 
	void LogError(const char* stringFormat, Args... args)
	{
	}
};