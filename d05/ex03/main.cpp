/**
 * @Author: ademenet
 * @Date:   2017-04-10T11:48:57+02:00
 * @Last modified by:   ademenet
 * @Last modified time: 2017-04-11T22:00:06+02:00
 */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(void) {
	Form	*rrf;

    std::cout << "--- PresidentialPardonForm" << std::endl;
    Intern	someRandomIntern1;
    rrf = someRandomIntern1.makeForm("President's form", "Prez");
	std::cout << "--- RobotomyRequestForm" << std::endl;
    Intern	someRandomIntern2;
    rrf = someRandomIntern2.makeForm("Robot's form", "Bender");
	std::cout << "--- ShrubberyCreationForm" << std::endl;
    Intern	someRandomIntern3;
    rrf = someRandomIntern3.makeForm("Shrubbery's form", "Triz");
	std::cout << "--- Error" << std::endl;
    Intern	someRandomIntern4;
    rrf = someRandomIntern4.makeForm("Jacadi's form", "Triz");

	std::cout << "--- Proof" << std::endl;
	Bureaucrat Bizou("Bizou", 1);
	Intern	someRandomIntern5;
	rrf = someRandomIntern5.makeForm("Robot's form", "Triz");
    Bizou.signForm(*rrf);
	Bizou.executeForm(*rrf);


    return 0;
}
