/**
 * @Author: ademenet
 * @Date:   2017-04-10T11:48:57+02:00
 * @Last modified by:   ademenet
 * @Last modified time: 2017-04-11T16:56:51+02:00
 */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void) {

    std::cout << "--- Tests ex02" << std::endl;

    RobotomyRequestForm     robot("the love");
    ShrubberyCreationForm   tree("mars");
    PresidentialPardonForm  pardon("justin");
    Bureaucrat              Marine("Marine", 148);

    std::cout << Marine;
    std::cout << pardon;
    Marine.signForm(pardon);
    std::cout << pardon;
    std::cout << robot;
    Marine.executeForm(robot);
    Marine.signForm(robot);
    std::cout << robot;
    std::cout << tree;
    Marine.executeForm(tree);
    Marine.signForm(tree);
    std::cout << tree;
    Marine.executeForm(tree);
    std::cout << robot;

    return 0;
}
