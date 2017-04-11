/**
 * @Author: ademenet
 * @Date:   2017-04-10T19:36:43+02:00
 * @Last modified by:   ademenet
 * @Last modified time: 2017-04-11T16:01:53+02:00
 */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) {
    return;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) :  Form("President Zafod Beeblebrox", 25, 5), _target(target) {
    return;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) {
    *this = src;
    return;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
    return;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs) {
    if (this != &rhs) { }
    return *this;
}

/* Functionnal */
void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
    if (executor.getGrade() > getGradeExecutive())
        throw Form::GradeTooLowException();

    std::cout << _target << " has been pardoned by Zafod Beeblebrox" << std::endl;
    return;
}
