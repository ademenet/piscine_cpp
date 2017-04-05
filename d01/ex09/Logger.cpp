#include "Logger.hpp"


Logger::Logger(std::string filename) : _filename(filename) {
	return;
}

Logger::~Logger(void) {
	return;
}

void Logger::logToConsole(std::string str) {
	std::cout << this->makeLogEntry(str) << std::endl;
	return;
}

void Logger::logToFile(std::string str) {
	std::ofstream	out(this->_filename);

	out << this->makeLogEntry(str) << std::endl;
	out.close();
	return;
}

std::string Logger::makeLogEntry(std::string message) {
	time_t	current_time = time(0);
	struct	tm*local_t = localtime(&current_time);
	char	time_dis[32];

	strftime(time_dis, 32, "[%Y%d%m_%H%M%S] ", local_t);
	return(time_dis + message);
}

void Logger::log(std::string const &dest, std::string const &message) {
	std::string	destinations[2] = { "file", "console" };
	void (Logger::*destination[2])(std::string) = { &Logger::logToFile,
													&Logger::logToConsole };
	int i = 0;

	while (dest != destinations[i])
		i++;
	if (i > -1 && i < 2)
		(this->*destination[i])(message);
	return;
}
