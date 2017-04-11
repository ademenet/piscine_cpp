/**
 * @Author: ademenet
 * @Date:   2017-04-10T19:36:43+02:00
 * @Last modified by:   ademenet
 * @Last modified time: 2017-04-11T15:41:17+02:00
 */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include "Form.hpp"

class ShrubberyCreationForm : public Form {

public:
    ShrubberyCreationForm(const std::string target);
    ShrubberyCreationForm(ShrubberyCreationForm const &src);
    virtual ~ShrubberyCreationForm(void);
    ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);

    /* Functionnal */
    virtual void execute(Bureaucrat const &executor);

private:
    ShrubberyCreationForm(void);

    /* Attributes */
    std::string _target;

};

#endif
