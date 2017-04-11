/**
 * @Author: ademenet
 * @Date:   2017-04-10T19:36:43+02:00
 * @Last modified by:   ademenet
 * @Last modified time: 2017-04-11T15:52:46+02:00
 */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) {
    return;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : Form("Shrubbery", 145, 137), _target(target) {
    return;
}


ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) {
    *this = src;
    return;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
    return;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs) {
    if (this != &rhs) { }
    return *this;
}

/* Functionnal */
void ShrubberyCreationForm::execute(Bureaucrat const &executor) {
    if (getSignature())
        throw Form::BeSigned();
    else if (executor.getGrade() > getGradeExecutive())
        throw Form::GradeTooLowException();

    std::ofstream	out(_target + "_shrubbery");

    out << "       _-_" << std::endl;
    out << "    /~~   ~~\\" << std::endl;
    out << " /~~         ~~\\" << std::endl;
    out << "{               }" << std::endl;
    out << " \\  _-     -_  /" << std::endl;
    out << "   ~  \\\\ //  ~" << std::endl;
    out << "_- -   | | _- _" << std::endl;
    out << "  _ -  | |   -_" << std::endl;
    out << "      // \\\\" << std::endl;

    out.close();
    return;
}
