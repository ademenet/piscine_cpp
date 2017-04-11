/**
 * @Author: ademenet
 * @Date:   2017-04-10T19:36:43+02:00
 * @Last modified by:   ademenet
 * @Last modified time: 2017-04-11T11:45:57+02:00
 */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include "Form.hpp"

// TODO Required grades : sign 25, exec 5

class PresidentialPardonForm : public Form {

public:
    PresidentialPardonForm(const std::string name, const unsigned int gradeRequired, const unsigned int gradeExecutive, std::string target);
    PresidentialPardonForm(PresidentialPardonForm const &src);
    virtual ~PresidentialPardonForm(void);
    PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);

    /* Functionnal */
    virtual void actionForm();

private:
    PresidentialPardonForm(void);

    /* Attributes */
    std::string _target;

};

#endif
