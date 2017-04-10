/**
 * @Author: ademenet
 * @Date:   2017-04-10T14:27:44+02:00
 * @Last modified by:   ademenet
 * @Last modified time: 2017-04-10T17:46:47+02:00
 */

#include "Form.hpp"

Form::Form(const std::string name, const unsigned int grade) : _name(name), _signature(false), _grade(grade) {
    return;
}

Form::Form(Form const &src) : _name(src._name), _signature(false), _grade(src._grade) {
    *this = src;
    return;
}

Form::~Form(void) {
    return;
}

Form &Form::operator=(Form const &rhs) {
    if (this != &rhs) {
        // _grade = rhs._grade;
        // _name = rhs._name;
        _signature = rhs._signature;
    }
    return *this;
}

/* Getters */
std::string Form::getName() const {
    return _name;
}

unsigned int Form::getGrade() const {
    return _grade;
}

bool Form::getSignature() const {
    return _signature;
}

/* Functionnal */
void Form::beSigned(Bureaucrat &man) {
    // TODO faire un vrai check
    if (man.getGrade() == _grade)
        _signature = true;
    else if (man.getGrade() > 150)
        throw Form::GradeTooHighException();
    else if (man.getGrade() < 1)
        throw Form::GradeTooLowException();
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
    return "ERROR: Grade is too low";
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
    return "ERROR: Grade is too high";
}

/* Operator overload */
std::ostream &operator<<(std::ostream &o, Form const &rhs) {
    if (rhs.getSignature())
        o << "Contract has been signed by " << rhs.getName() << ", grade " << rhs.getGrade();
    else
        o << "Contract hasn't been signed by " << rhs.getName() << ", grade " << rhs.getGrade();
    return o;
}
