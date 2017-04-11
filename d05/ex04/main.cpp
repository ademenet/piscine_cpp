/**
 * @Author: ademenet
 * @Date:   2017-04-10T11:48:57+02:00
 * @Last modified by:   ademenet
 * @Last modified time: 2017-04-11T22:45:26+02:00
 */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"

int main()
{
	std::cout << "-------------------------------------" << std::endl;
    {
        Intern idiotOne;
        Bureaucrat hermes = Bureaucrat("Hermes Conrad", 37);
        Bureaucrat bob = Bureaucrat("Bobby Bobson", 123);

        OfficeBlock ob;

        ob.setIntern(&idiotOne);
        ob.setSigner(&bob);
        ob.setExecutor(&hermes);

        try {
            ob.doBureaucracy("ShrubberyCreation", "Pigley");
        }
        catch (OfficeBlock::SpecificException & e) {
            std::cout << e.what() << std::endl;
        }
        catch (std::exception & e) {
            std::cout << e.what() << std::endl;
        }
    }
    std::cout << "-------------------------------------" << std::endl;
    {
        Intern idiotOne;
        Bureaucrat hermes = Bureaucrat("Hermes Conrad", 70);
        Bureaucrat bob = Bureaucrat("Bobby Bobson", 68);

        OfficeBlock ob;

        ob.setIntern(&idiotOne);
        ob.setSigner(&bob);
        ob.setExecutor(&hermes);

        try {
            ob.doBureaucracy("RobotomyRequest", "Pigley");
        }
        catch (OfficeBlock::SpecificException & e) {
            std::cout << e.what() << std::endl;
        }
        catch (std::exception & e) {
            std::cout << e.what() << std::endl;
        }
    }
    std::cout << "-------------------------------------" << std::endl;
    {
        Intern idiotOne;
        Bureaucrat hermes = Bureaucrat("Hermes Conrad", 149);
        Bureaucrat bob = Bureaucrat("Bobby Bobson", 123);

        OfficeBlock ob;

        ob.setIntern(&idiotOne);
        ob.setSigner(&bob);
        ob.setExecutor(&hermes);

        try {
            ob.doBureaucracy("PresidentialPardon", "Pigley");
        }
        catch (OfficeBlock::SpecificException & e) {
            std::cout << e.what() << std::endl;
        }
        catch (std::exception & e) {
            std::cout << e.what() << std::endl;
        }
    }
    std::cout << "-------------------------------------" << std::endl;
    {
        Intern idiotOne;
        Bureaucrat hermes = Bureaucrat("Hermes Conrad", 37);
        Bureaucrat bob = Bureaucrat("Bobby Bobson", 123);

        OfficeBlock ob;

        ob.setIntern(&idiotOne);
        ob.setSigner(&bob);
        ob.setExecutor(&hermes);

        try {
            ob.doBureaucracy("mutant pig termination", "Pigley");
        }
        catch (OfficeBlock::SpecificException & e) {
            std::cout << e.what() << std::endl;
        }
        catch (std::exception & e) {
            std::cout << e.what() << std::endl;
        }
    }
    std::cout << "-------------------------------------" << std::endl;
    {
        Intern idiotOne;
        Bureaucrat bob = Bureaucrat("Bobby Bobson", 123);

        OfficeBlock ob;

        ob.setIntern(&idiotOne);
        ob.setSigner(&bob);
        // ob.setExecutor(NULL);

        try {
            ob.doBureaucracy("mutant pig termination", "Pigley");
        }
        catch (OfficeBlock::SpecificException & e) {
            std::cout << e.what() << std::endl;
        }
        catch (std::exception & e) {
            std::cout << e.what() << std::endl;
        }
    }
    std::cout << "-------------------------------------" << std::endl;}
