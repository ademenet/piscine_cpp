/**
 * @Author: ademenet
 * @Date:   2017-04-10T19:36:43+02:00
 * @Last modified by:   ademenet
 * @Last modified time: 2017-04-11T11:55:56+02:00
 */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) {
    return;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string name, const unsigned int gradeRequired, const unsigned int gradeExecutive, std::string target) : Form(name, gradeRequired, gradeExecutive),
                                                                                                                                       _target(target) {
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
    if (this != &rhs) {

    }
    return *this;
}

/* Functionnal */
void RobotomyRequestForm::actionForm() {
    int randInt = rand() % 2;
    if (randInt == 0) {
        
    }
    else {

    }
    return;
}
