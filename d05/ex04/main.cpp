/**
 * @Author: ademenet
 * @Date:   2017-04-10T11:48:57+02:00
 * @Last modified by:   ademenet
 * @Last modified time: 2017-04-11T17:29:08+02:00
 */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(void) {

    std::cout << "--- Tests ex03" << std::endl;

    Intern	someRandomIntern;
    Form	*rrf;
    rrf = someRandomIntern.makeForm("President's form", "Bender");

    return 0;
}
