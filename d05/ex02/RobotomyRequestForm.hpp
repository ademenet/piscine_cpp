/**
 * @Author: ademenet
 * @Date:   2017-04-10T19:36:43+02:00
 * @Last modified by:   ademenet
 * @Last modified time: 2017-04-11T11:45:53+02:00
 */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include "Form.hpp"

// TODO Required grades : sign 72, exec 45

class RobotomyRequestForm : public Form {

public:
    RobotomyRequestForm(const std::string name, const unsigned int gradeRequired, const unsigned int gradeExecutive, std::string target);
    RobotomyRequestForm(RobotomyRequestForm const &src);
    virtual ~RobotomyRequestForm(void);
    RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);

    /* Functionnal */
    virtual void actionForm();

private:
    RobotomyRequestForm(void);

    /* Attributes */
    std::string _target;

};

#endif
