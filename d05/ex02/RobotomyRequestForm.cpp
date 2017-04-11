/**
 * @Author: ademenet
 * @Date:   2017-04-10T19:36:43+02:00
 * @Last modified by:   ademenet
 * @Last modified time: 2017-04-11T15:52:41+02:00
 */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) {
    return;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : Form("Robot", 72, 45), _target(target) {
    return;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) {
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
void RobotomyRequestForm::execute(Bureaucrat const &executor) {
    if (getSignature())
        throw Form::BeSigned();
    else if (executor.getGrade() > getGradeExecutive())
        throw Form::GradeTooLowException();

    int randInt = rand() % 2;

    std::cout << '\a';
    if (randInt == 0) {
        std::cout << _target << " has been robotized" << std::endl;
    }
    else {
        std::cout << _target << " hasn't been robotized" << std::endl;

    }
    return;
}
