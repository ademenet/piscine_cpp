/**
 * @Author: ademenet
 * @Date:   2017-04-11T16:36:27+02:00
 * @Last modified by:   ademenet
 * @Last modified time: 2017-04-11T17:26:19+02:00
 */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern {

public:
	Intern(void);
    Intern(Intern const &src);
    ~Intern(void);
    Intern &operator=(Intern const &rhs);
	Form *makeForm(std::string formName, std::string formTarget);

private:

};

#endif
