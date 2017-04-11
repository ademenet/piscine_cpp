/**
 * @Author: ademenet
 * @Date:   2017-04-10T11:48:57+02:00
 * @Last modified by:   ademenet
 * @Last modified time: 2017-04-11T20:50:43+02:00
 */

#include "Bureaucrat.hpp"

// TODO make a better << operator status display (add grade executive)

int main(void) {
    std::cout << "--- Tests form errors on construction" << std::endl;
    try {
		std::cout << "Form form(\"Form\", 155, 26);" << std::endl;
        Form form("Form", 155, 26);
        std::cout << form << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
	try {
		std::cout << "Form form(\"Form\", 0, 26);" << std::endl;
        Form form("Form", 0, 26);
        std::cout << form << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
	try {
		std::cout << "Form form(\"Form\", 26, 155);" << std::endl;
        Form form("Form", 26, 155);
        std::cout << form << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
	try {
		std::cout << "Form form(\"Form\", 5, 0);" << std::endl;
        Form form("Form", 5, 0);
        std::cout << form << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << "--- Bureaucrat can't signed" << std::endl;
    try {
        Bureaucrat  man("Man", 25);
        std::cout << man << std::endl;
        Form        form("form", 10, 4);
        std::cout << form << std::endl;
        man.signForm(form);
        std::cout << form << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

	std::cout << "--- Bureaucrat can sign" << std::endl;
    try {
        Bureaucrat  man("John", 7);
        std::cout << man << std::endl;
        Form        form("form", 25, 4);
        std::cout << form << std::endl;
        man.signForm(form);
        std::cout << form << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
