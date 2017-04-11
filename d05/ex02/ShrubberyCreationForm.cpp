/**
 * @Author: ademenet
 * @Date:   2017-04-10T19:36:43+02:00
 * @Last modified by:   ademenet
 * @Last modified time: 2017-04-11T11:51:21+02:00
 */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) {
    return;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string name, const unsigned int gradeRequired, const unsigned int gradeExecutive, std::string target) : Form(name, gradeRequired, gradeExecutive),
                                                                                                                                         _target(target) {
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
    if (this != &rhs) {

    }
    return *this;
}

/* Functionnal */
void ShrubberyCreationForm::actionForm() {
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
