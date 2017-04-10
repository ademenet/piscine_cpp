/**
 * @Author: ademenet
 * @Date:   2017-04-10T11:48:57+02:00
 * @Last modified by:   ademenet
 * @Last modified time: 2017-04-10T14:23:12+02:00
 */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <sstream>
# include <stdexcept>

class Bureaucrat {

public:
    Bureaucrat(const std::string name, unsigned int grade);
    Bureaucrat(Bureaucrat const &src);
    ~Bureaucrat(void);
    Bureaucrat &operator=(Bureaucrat const &rhs);

    /* Getter */
    std::string getName() const;
    unsigned int getGrade() const;

    /* Functionnal */
    void incrementGrade();
    void decrementGrade();
    std::string display() const;

    /* Classes for exceptions */
    class GradeTooLowException : public std::exception {
        virtual const char * what() const throw();
    };
    class GradeTooHighException : public std::exception {
        virtual const char * what() const throw();
    };

private:
    Bureaucrat(void);

    /* Attributes */
    const std::string _name;
    unsigned int _grade; // from 1 (higher) to 150 (lowest)

};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif
