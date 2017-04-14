/**
 * @Author: ademenet
 * @Date:   2017-04-12T18:02:05+02:00
 * @Last modified by:   ademenet
 * @Last modified time: 2017-04-13T17:28:13+02:00
 */

#include "Array.tpp"

/* Test main */
int main(void) {
	int len;

	std::cout << "---- Test with int" << std::endl;
	len = 3;
	try {
		Array<int> arrayIntSimple;
		arrayIntSimple[0] = 10;
		std::cout << "-- Test size: " << arrayIntSimple.size() << std::endl;
		for (unsigned int i = 0; i < arrayIntSimple.size(); i++) {
			std::cout << "- Test [" << i << "]: " << arrayIntSimple[i] << std::endl;
		}
	}
	catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << "---- Test with int" << std::endl;
	len = 3;
	try {
		Array<int> arrayIntSimple(len);
		arrayIntSimple[0] = 10;
		arrayIntSimple[1] = 20;
		arrayIntSimple[2] = 30;
		std::cout << "-- Test size: " << arrayIntSimple.size() << std::endl;
		for (unsigned int i = 0; i < arrayIntSimple.size(); i++) {
			std::cout << "- Test [" << i << "]: " << arrayIntSimple[i] << std::endl;
		}
	}
	catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << "---- Test error with int" << std::endl;
	len = 3;
	try {
		Array<int> arrayIntSimple(len);
		arrayIntSimple[0] = 10;
		arrayIntSimple[1] = 20;
		arrayIntSimple[2] = 30;
		arrayIntSimple[3] = 40;
		std::cout << "-- Test size: " << arrayIntSimple.size() << std::endl;
		for (unsigned int i = 0; i < arrayIntSimple.size(); i++) {
			std::cout << "- Test [" << i << "]: " << arrayIntSimple[i] << std::endl;
		}
	}
	catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << "---- Test with char" << std::endl;
	len = 3;
	try {
		Array<char> arrayCharSimple;
		arrayCharSimple[0] = 'z';
		std::cout << "-- Test size: " << arrayCharSimple.size() << std::endl;
		for (unsigned int i = 0; i < arrayCharSimple.size(); i++) {
			std::cout << "- Test [" << i << "]: " << arrayCharSimple[i] << std::endl;
		}
	}
	catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << "---- Test with char" << std::endl;
	len = 3;
	try {
		Array<char> arrayCharSimple(len);
		arrayCharSimple[0] = 'd';
		arrayCharSimple[1] = 'e';
		arrayCharSimple[2] = 'f';
		std::cout << "-- Test size: " << arrayCharSimple.size() << std::endl;
		for (unsigned int i = 0; i < arrayCharSimple.size(); i++) {
			std::cout << "- Test [" << i << "]: " << arrayCharSimple[i] << std::endl;
		}
	}
	catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << "---- Test error with char" << std::endl;
	len = 3;
	try {
		Array<char> arrayCharSimple(len);
		arrayCharSimple[0] = 'd';
		arrayCharSimple[1] = 'e';
		arrayCharSimple[2] = 'f';
		arrayCharSimple[3] = 'g';
		std::cout << "-- Test size: " << arrayCharSimple.size() << std::endl;
		for (unsigned int i = 0; i < arrayCharSimple.size(); i++) {
			std::cout << "- Test [" << i << "]: " << arrayCharSimple[i] << std::endl;
		}
	}
	catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << "---- Test with string" << std::endl;
	len = 3;
	try {
		Array<std::string> arrayStrSimple;
		arrayStrSimple[0] = "Une seule cellule";
		std::cout << "-- Test size: " << arrayStrSimple.size() << std::endl;
		for (unsigned int i = 0; i < arrayStrSimple.size(); i++) {
			std::cout << "- Test [" << i << "]: " << arrayStrSimple[i] << std::endl;
		}
	}
	catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << "---- Test with string" << std::endl;
	len = 3;
	try {
		Array<std::string> arrayStrSimple(len);
		arrayStrSimple[0] = "Une cellule";
		arrayStrSimple[1] = "Deux cellules";
		arrayStrSimple[2] = "Trois cellules";
		std::cout << "-- Test size: " << arrayStrSimple.size() << std::endl;
		for (unsigned int i = 0; i < arrayStrSimple.size(); i++) {
			std::cout << "- Test [" << i << "]: " << arrayStrSimple[i] << std::endl;
		}
	}
	catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << "---- Test error with string" << std::endl;
	len = 3;
	try {
		Array<std::string> arrayStrSimple(len);
		arrayStrSimple[0] = "Une cellule";
		arrayStrSimple[1] = "Deux cellules";
		arrayStrSimple[2] = "Trois cellules";
		arrayStrSimple[3] = "Quatre cellules";
		std::cout << "-- Test size: " << arrayStrSimple.size() << std::endl;
		for (unsigned int i = 0; i < arrayStrSimple.size(); i++) {
			std::cout << "- Test [" << i << "]: " << arrayStrSimple[i] << std::endl;
		}
	}
	catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	return 0;
}
