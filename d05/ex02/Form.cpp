/**
 * @Author: ademenet
 * @Date:   2017-04-10T14:27:44+02:00
 * @Last modified by:   ademenet
 * @Last modified time: 2017-04-11T10:32:11+02:00
 */

#include "Form.hpp"

Form::Form(const std::string name, const unsigned int gradeRequired, const unsigned int gradeExecutive) : _name(name), _signature(false), _gradeRequired(gradeRequired), _gradeExecutive(gradeExecutive) {
    if (_gradeRequired < 1) {
        throw Bureaucrat::GradeTooLowException();
    }
    else if (gradeRequired > 150) {
        throw Bureaucrat::GradeTooHighException();
    }
    return;
}

Form::Form(Form const &src) : _name(src._name), _signature(false), _gradeRequired(src._gradeRequired), _gradeExecutive(src._gradeExecutive) {
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

unsigned int Form::getGradeRequired() const {
    return _gradeRequired;
}

bool Form::getSignature() const {
    return _signature;
}

/* Functionnal */
void Form::beSigned(Bureaucrat &man) {
    if (man.getGrade() > _gradeRequired)
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
    return "grade is too low";
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
    return "grade is too high";
}

/* Operator overload */
std::ostream &operator<<(std::ostream &o, Form const &rhs) {
    if (rhs.getSignature())
        o << rhs.getName() << " with grade " << rhs.getGradeRequired() << " has been signed.";
    else
        o << rhs.getName() << " with grade " << rhs.getGradeRequired() << " hasn't been signed.";
    return o;
}
