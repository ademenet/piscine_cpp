/**
 * @Author: ademenet
 * @Date:   2017-04-10T11:48:57+02:00
 * @Last modified by:   ademenet
 * @Last modified time: 2017-04-10T14:20:14+02:00
 */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) {
    return;
}

Bureaucrat::Bureaucrat(const std::string name, unsigned int grade) : _name(name), _grade(grade) {
    if (grade < 1) {
        throw Bureaucrat::GradeTooLowException();
    }
    else if (grade > 150) {
        throw Bureaucrat::GradeTooHighException();
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
    if (this != &rhs) {

    }
    return *this;
}

/* Functionnal */
std::string Bureaucrat::display() const {
    std::stringstream substr;
    substr << _grade;
    std::string str = _name + ", bureaucrat grade " + substr.str();
    return str;
}

void Bureaucrat::incrementGrade() {
    _grade--;
    if (_grade < 1) {
        throw Bureaucrat::GradeTooLowException();
    }
    return;
}

void Bureaucrat::decrementGrade() {
    _grade++;
    if (_grade > 150) {
        throw Bureaucrat::GradeTooHighException();
    }
    return;
}

/* Exceptions */
const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return "ERROR: Grade is too low";
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return "ERROR: Grade is too high";
}

/* Operator overload */
std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs) {
    o << rhs.display();
    return o;
}
