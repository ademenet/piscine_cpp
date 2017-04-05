#ifndef LOGGER_HPP
# define LOGGER_HPP

# include <iostream>
# include <fstream>
# include <sstream>

class Logger {

public:
	Logger(std::string filename);
	~Logger(void);

	void log(std::string const & dest, std::string const & message);

private:
	std::string _filename;

	void logToConsole(std::string str);
	void logToFile(std::string str);
	std::string makeLogEntry(std::string message);

};

#endif
