#include "Logger.hpp"

int main(void) {
	Logger		log("log_file.log");

	log.log("file", "This message will be print in a file");
	log.log("console", "This message will be print in a console");
	return 0;
}
