/**
 * @Author: ademenet
 * @Date:   2017-04-10T11:48:57+02:00
 * @Last modified by:   ademenet
 * @Last modified time: 2017-04-11T11:55:13+02:00
 */

#include "Bureaucrat.hpp"

int main(void) {
    std::srand(std::time(NULL));
    std::cout << "--- Tests ex02" << std::endl;

    // TODO Tester PresidentialPardonForm
    try {
        Bureaucrat  homer("Homer", 4);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    // TODO Tester RobotomyRequestForm
    try {
        Bureaucrat  homer("Homer", 4);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    // TODO Tester ShrubberyCreationForm
    try {
        Bureaucrat  homer("Homer", 4);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
