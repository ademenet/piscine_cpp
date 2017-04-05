#include <iostream>
#include <fstream>

int main(int argc, char const *argv[]) {
	if (argc > 1) {
		for (int i = 1; i < argc; i++) {
			std::ifstream	in(argv[i]);
			std::string		line;
			if (in.fail()) {
				std::cerr << "cato9tails: " << argv[i] << ": "  << strerror(errno) << std::endl;
				exit(0);
			}
			while(getline(in, line))
				std::cout << line << std::endl;
			in.close();
		}
	}
	else {
		std::string		line;
		while (getline(std::cin, line)) {
			std::cout << line << std::endl;
		}
	}
	return 0;
}
