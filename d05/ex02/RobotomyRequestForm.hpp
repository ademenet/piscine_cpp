/**
 * @Author: ademenet
 * @Date:   2017-04-10T19:36:43+02:00
 * @Last modified by:   ademenet
 * @Last modified time: 2017-04-11T16:01:31+02:00
 */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include "Form.hpp"

class RobotomyRequestForm : public Form {

public:
    RobotomyRequestForm(const std::string target);
    RobotomyRequestForm(RobotomyRequestForm const &src);
    virtual ~RobotomyRequestForm(void);
    RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);

    /* Functionnal */
    virtual void execute(Bureaucrat const &executor) const;

private:
    RobotomyRequestForm(void);

    /* Attributes */
    std::string _target;

};

#endif
