/**
 * @Author: ademenet
 * @Date:   2017-04-10T11:48:57+02:00
 * @Last modified by:   ademenet
 * @Last modified time: 2017-04-11T21:41:37+02:00
 */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void) {
    RobotomyRequestForm     robot("the love");
    ShrubberyCreationForm   tree("mars");
    PresidentialPardonForm  pardon("justin");
    Bureaucrat              Marine("Marine", 1);

	std::cout << "--- Change Marine's grade to test (try: 1, 40, 130, 150)" << std::endl;
	std::cout << Marine << std::endl;

	std::cout << "--- PresidentialPardonForm" << std::endl;
	std::cout << pardon << std::endl;
	Marine.executeForm(pardon);
    std::cout << pardon << std::endl;
    Marine.signForm(pardon);
    std::cout << pardon << std::endl;
	Marine.executeForm(pardon);

	std::cout << "--- RobotomyRequestForm" << std::endl;
	std::cout << robot << std::endl;
	Marine.executeForm(robot);
	std::cout << robot << std::endl;
    Marine.signForm(robot);
    std::cout << robot << std::endl;
	Marine.executeForm(robot);

	std::cout << "--- ShrubberyCreationForm" << std::endl;
    std::cout << tree << std::endl;
	Marine.executeForm(tree);
	std::cout << tree << std::endl;
    Marine.signForm(tree);
    std::cout << tree << std::endl;
	Marine.executeForm(tree);

    return 0;
}
