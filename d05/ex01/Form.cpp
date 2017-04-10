/**
 * @Author: ademenet
 * @Date:   2017-04-10T14:27:44+02:00
 * @Last modified by:   ademenet
 * @Last modified time: 2017-04-10T18:39:21+02:00
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
        // _grade = rhs.getGrade();
        // _name = rhs.getName();
        _signature = rhs._signature;
    }
    return *this;
}

/* Getters */
std::string Form::getName() const {
    return _name;
}

unsigned int Form::getGrade() const {
    return this->_grade;
}

bool Form::getSignature() const {
    return _signature;
}

/* Functionnal */
void Form::beSigned(Bureaucrat &man) {
    if (man.getGrade() > _grade)
        throw Form::GradeTooLowException();
    _signature = true;
    return;
}

/* Exceptions */
Form::GradeTooLowException::GradeTooLowException() {
    return;
}

Form::GradeTooLowException::~GradeTooLowException() throw() {
    return;
}

Form::GradeTooLowException::GradeTooLowException(Form::GradeTooLowException const &src) {
    *this = src;
    return;
}

Form::GradeTooLowException &Form::GradeTooLowException::operator=(Form::GradeTooLowException const &rhs) {
    if (this != &rhs) { }
    return *this;
}

const char *Form::GradeTooLowException::what() const throw() {
    return "ERROR: Grade is too low";
}

Form::GradeTooHighException::GradeTooHighException() {
    return;
}

Form::GradeTooHighException::~GradeTooHighException() throw() {
    return;
}

Form::GradeTooHighException::GradeTooHighException(Form::GradeTooHighException const &src) {
    *this = src;
    return;
}

Form::GradeTooHighException &Form::GradeTooHighException::operator=(Form::GradeTooHighException const &rhs) {
    if (this != &rhs) { }
    return *this;
}

const char *Form::GradeTooHighException::what() const throw() {
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
