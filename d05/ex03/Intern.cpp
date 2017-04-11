/**
 * @Author: ademenet
 * @Date:   2017-04-11T16:36:27+02:00
 * @Last modified by:   ademenet
 * @Last modified time: 2017-04-11T17:27:08+02:00
 */

 #include "Intern.hpp"

Intern::Intern(void) {
    return;
}

Intern::Intern(Intern const &src) {
    *this = src;
    return;
}

Intern::~Intern(void) {
    return;
}

Intern &Intern::operator=(Intern const &rhs) {
    if (this != &rhs) { }
    return *this;
}

Form *Intern::makeForm(std::string formName, std::string formTarget) {
	Form *newForm;

	if (formName == "President's form") {
		newForm = new PresidentialPardonForm(formTarget);
	}
	else if (formName == "Robot's form") {
		newForm = new RobotomyRequestForm(formTarget);
	}
	else if (formName == "Shrubbery's form") {
		newForm = new ShrubberyCreationForm(formTarget);
	}
	else {
		std::cout << formName << " doesn't exist" << std::endl;
		return NULL;
	}
	std::cout << "Intern creates " << newForm->getName() << std::endl;
	return newForm;
}
