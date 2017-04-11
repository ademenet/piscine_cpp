/**
 * @Author: ademenet
 * @Date:   2017-04-10T19:36:43+02:00
 * @Last modified by:   ademenet
 * @Last modified time: 2017-04-11T22:01:53+02:00
 */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : Form("Robot's form", 72, 45), _target(target) {
	std::srand(std::time(NULL));
    return;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form(src) {
    *this = src;
    return;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
    return;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs) {
    if (this != &rhs) { }
    return *this;
}

/* Functionnal */
void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
    if (executor.getGrade() > getGradeExecutive())
        throw Form::GradeTooLowException();

    int randInt = rand() % 2;

    std::cout << "BZZZZZ BZZZZZ BZZZZZ ";
    if (randInt == 0) {
        std::cout << _target << " has been robotized" << std::endl;
    }
    else {
        std::cout << _target << " hasn't been robotized" << std::endl;

    }
    return;
}
