#include <iostream>
#include <fstream>
#include <sstream>

void replace(std::string filename, std::string str1, std::string str2) {
	std::ifstream	in(filename);
	// Put the name in uppercase
	for (size_t i = 0; i < filename.length(); i++)
		filename[i] = std::toupper(filename[i]);

	std::ofstream	out(filename + ".replace");
	std::string		line;

	if (!in || !out) {
		std::cout << "Something wen't wrong and the file " << filename;
		std::cout << " could not be open for some reasons." << std::endl;
		return;
	}
	size_t len = str1.length();
	while(getline(in, line)) {
		size_t pos = -len;
		while (true) {
			pos = line.find(str1, pos + str1.length());
			if (pos != std::string::npos)
				line.replace(pos, len, str2);
			else
				break;
		}
		out << line << std::endl;
	}
	in.close();
	out.close();
	return;
}

int main(int argc, char const *argv[]) {
	if (argc < 4 || argc > 4)
		std::cout << "Wrong usage: ./replace <filename> <string to replace> <new string>" << std::endl;
	else
		replace(argv[1], argv[2], argv[3]);
	return 0;
}
