/**
 * @Author: ademenet
 * @Date:   2017-04-10T11:48:57+02:00
 * @Last modified by:   ademenet
 * @Last modified time: 2017-04-11T21:46:28+02:00
 */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) {
    return;
}

Bureaucrat::Bureaucrat(const std::string name, unsigned int grade) : _name(name), _grade(grade) {
    if (_grade < 1) {
        throw Bureaucrat::GradeTooHighException();
    }
    else if (_grade > 150) {
        throw Bureaucrat::GradeTooLowException();
    }
    return;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) {
    *this = src;
    return;
}

Bureaucrat::~Bureaucrat(void) {
    return;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs) {
    if (this != &rhs) { }
    return *this;
}

/* Getter */
std::string Bureaucrat::getName() const {
    return _name;
}

unsigned int Bureaucrat::getGrade() const {
    return _grade;
}

/* Functionnal */
void Bureaucrat::incrementGrade() {
    _grade--;
    if (_grade < 1) {
        throw Bureaucrat::GradeTooHighException();
    }
    return;
}

void Bureaucrat::decrementGrade() {
    _grade++;
    if (_grade > 150) {
        throw Bureaucrat::GradeTooLowException();
    }
    return;
}

void Bureaucrat::signForm(Form &form) {
    try {
        form.beSigned(*this);
        std::cout << _name << " signs " << form.getName() << std::endl;
    }
    catch (std::exception &e) {
        std::cout << _name << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
    }
    return;
}

void Bureaucrat::executeForm(Form const &form) {
    try {
        if (!form.getSignature())
            throw Form::BeSigned();
        form.execute(*this);
        std::cout << _name << " executes " << form.getName() << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return;
}

/* Exceptions */
Bureaucrat::GradeTooLowException::GradeTooLowException() {
    return;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {
    return;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const &src) {
    *this = src;
    return;
}

Bureaucrat::GradeTooLowException &Bureaucrat::GradeTooLowException::operator=(Bureaucrat::GradeTooLowException const &rhs) {
    if (this != &rhs) { }
    return *this;
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return "grade is too low";
}

Bureaucrat::GradeTooHighException::GradeTooHighException() {
    return;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {
    return;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const &src) {
    *this = src;
    return;
}

Bureaucrat::GradeTooHighException &Bureaucrat::GradeTooHighException::operator=(Bureaucrat::GradeTooHighException const &rhs) {
    if (this != &rhs) { }
    return *this;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return "grade is too high";
}

/* Operator overload */
std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs) {
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return o;
}
