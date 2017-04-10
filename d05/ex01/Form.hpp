/**
 * @Author: ademenet
 * @Date:   2017-04-10T14:27:44+02:00
 * @Last modified by:   ademenet
 * @Last modified time: 2017-04-10T18:20:16+02:00
 */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Form {

public:
    Form(const std::string name, const unsigned int grade);
    Form(Form const &src);
    ~Form(void);
    Form &operator=(Form const &rhs);

    /* Exceptions */
    class GradeTooLowException : public std::exception {
        public:
            GradeTooLowException();
            virtual ~GradeTooLowException() throw();
            GradeTooLowException(Form::GradeTooLowException const &src);
            GradeTooLowException &operator=(GradeTooLowException const &rhs);
            virtual const char * what() const throw();
    };
    class GradeTooHighException : public std::exception {
        public:
            GradeTooHighException();
            virtual ~GradeTooHighException() throw();
            GradeTooHighException(Form::GradeTooHighException const &src);
            GradeTooHighException &operator=(GradeTooHighException const &rhs);
            virtual const char * what() const throw();
    };

    /* Functionnal */
    void beSigned(Bureaucrat &man); // TODO

    /* Getters */
    std::string getName() const;
    unsigned int getGrade() const;
    bool getSignature() const;

private:
    Form(void);

    const std::string _name;
    bool _signature;
    const unsigned int _grade;

};

std::ostream &operator<<(std::ostream &o, Form const &rhs);

#endif
