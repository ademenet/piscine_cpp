/**
 * @Author: ademenet
 * @Date:   2017-04-10T14:27:44+02:00
 * @Last modified by:   ademenet
 * @Last modified time: 2017-04-11T15:47:11+02:00
 */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <fstream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

public:
    Form(const std::string name, const unsigned int gradeRequired, const unsigned int gradeExecutive);
    Form(Form const &src);
    virtual ~Form(void);
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
    class BeSigned : public std::exception {
        public:
            BeSigned();
            virtual ~BeSigned() throw();
            BeSigned(Form::BeSigned const &src);
            BeSigned &operator=(BeSigned const &rhs);
            virtual const char * what() const throw();
    };

    /* Functionnal */
    void beSigned(Bureaucrat &man);

    /* Getters */
    std::string getName() const;
    unsigned int getGradeRequired() const;
    unsigned int getGradeExecutive() const;
    bool getSignature() const;

protected:
    Form(void);
    virtual void execute(Bureaucrat const &executor) = 0; // Abstract

private:
    const std::string _name;
    const std::string _target;
    bool _signature;
    const unsigned int _gradeRequired;
    const unsigned int _gradeExecutive;

};

std::ostream &operator<<(std::ostream &o, Form const &rhs);

#endif
