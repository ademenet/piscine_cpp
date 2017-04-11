/**
 * @Author: ademenet
 * @Date:   2017-04-10T19:36:43+02:00
 * @Last modified by:   ademenet
 * @Last modified time: 2017-04-11T16:01:36+02:00
 */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include "Form.hpp"

class PresidentialPardonForm : public Form {

public:
    PresidentialPardonForm(const std::string target);
    PresidentialPardonForm(PresidentialPardonForm const &src);
    virtual ~PresidentialPardonForm(void);
    PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);

    /* Functionnal */
    virtual void execute(Bureaucrat const &executor) const;

private:
    PresidentialPardonForm(void);

    /* Attributes */
    std::string _target;

};

#endif
