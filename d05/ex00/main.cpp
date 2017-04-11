/**
 * @Author: ademenet
 * @Date:   2017-04-10T11:48:57+02:00
 * @Last modified by:   ademenet
 * @Last modified time: 2017-04-11T20:30:26+02:00
 */

#include "Bureaucrat.hpp"

int main(void) {
	std::cout << "--- Test increment and decrement" << std::endl;
    try {
        Bureaucrat bureaucrat("Roger", 3);
        std::cout << bureaucrat << std::endl;
        bureaucrat.incrementGrade();
        std::cout << bureaucrat << std::endl;
        bureaucrat.decrementGrade();
        std::cout << bureaucrat << std::endl;
    }
    catch (std::exception &e) {
        std::cout << "ERROR: " << e.what() << std::endl;
    }
	std::cout << "--- Test increment and error" << std::endl;
    try {
        Bureaucrat bureaucrat("Roger", 3);
        std::cout << bureaucrat << std::endl;
        bureaucrat.incrementGrade();
        std::cout << bureaucrat << std::endl;
        bureaucrat.incrementGrade();
        std::cout << bureaucrat << std::endl;
        bureaucrat.incrementGrade();
        std::cout << bureaucrat << std::endl;
    }
    catch (std::exception &e) {
        std::cout << "ERROR: " << e.what() << std::endl;
    }
	std::cout << "--- Test decrement and error" << std::endl;
    try {
        Bureaucrat bureaucrat("Roger", 148);
        std::cout << bureaucrat << std::endl;
        bureaucrat.decrementGrade();
        std::cout << bureaucrat << std::endl;
        bureaucrat.decrementGrade();
        std::cout << bureaucrat << std::endl;
        bureaucrat.decrementGrade();
        std::cout << bureaucrat << std::endl;
    }
    catch (std::exception &e) {
        std::cout << "ERROR: " << e.what() << std::endl;
    }
	std::cout << "--- Test init out of range" << std::endl;
    try {
		std::cout << "Bureaucrat bureaucrat(\"Roger\", 155);" << std::endl;
        Bureaucrat bureaucrat("Roger", 155);
        std::cout << bureaucrat << std::endl;
    }
    catch (std::exception &e) {
        std::cout << "ERROR: " << e.what() << std::endl;
    }
    try {
		std::cout << "Bureaucrat bureaucrat(\"Roger\", 0);" << std::endl;
        Bureaucrat bureaucrat("Roger", 0);
        std::cout << bureaucrat << std::endl;
    }
    catch (std::exception &e) {
        std::cout << "ERROR: " << e.what() << std::endl;
    }


    return 0;
}
