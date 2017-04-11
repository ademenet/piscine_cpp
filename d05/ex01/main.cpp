/**
 * @Author: ademenet
 * @Date:   2017-04-10T11:48:57+02:00
 * @Last modified by:   ademenet
 * @Last modified time: 2017-04-11T11:24:40+02:00
 */

#include "Bureaucrat.hpp"

// TODO make a better << operator status display (add grade executive)

int main(void) {
    std::cout << std::endl << "--- Tests ex00" << std::endl;
    try {
        Bureaucrat bureaucrat("Roger", 3);
        std::cout << bureaucrat << std::endl;
        bureaucrat.incrementGrade();
        std::cout << bureaucrat << std::endl;
        bureaucrat.decrementGrade();
        std::cout << bureaucrat << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
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
        std::cout << e.what() << std::endl;
    }
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
        std::cout << e.what() << std::endl;
    }
    try {
        Bureaucrat bureaucrat("Roger", 155);
        std::cout << bureaucrat << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    try {
        Bureaucrat bureaucrat("Roger", 0);
        std::cout << bureaucrat << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl << "--- Tests ex01" << std::endl;
    try {
        Bureaucrat  homer("Homer", 4);
        std::cout << homer << std::endl;
        Form        form1("form1", 5, 4);
        std::cout << form1 << std::endl;
        homer.signForm(form1);
        std::cout << form1 << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    try {
        Bureaucrat  homer("John", 7);
        std::cout << homer << std::endl;
        Form        form1("form1", 5, 4);
        std::cout << form1 << std::endl;
        homer.signForm(form1);
        std::cout << form1 << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
