#include <iostream>
#include <fstream>
#include <sstream>

// TODO boucle infini si fichier avec des a et demande remplacer des a par des a

void replace(std::string filename, std::string str1, std::string str2) {
	std::ifstream	in(filename);
	std::ofstream	out(filename + ".replace");
	std::string		line;

	if (!in || !out) {
		std::cout << "Something wen't wrong and the file " << filename;
		std::cout << " could not be open for some reasons." << std::endl;
		return;
	}
	size_t len = str1.length();
	while(getline(in, line)) {
		while (true) {
			size_t pos = line.find(str1);
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
