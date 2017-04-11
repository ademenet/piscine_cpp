/**
 * @Author: ademenet
 * @Date:   2017-04-11T17:32:10+02:00
 * @Last modified by:   ademenet
 * @Last modified time: 2017-04-11T18:25:13+02:00
 */

#ifndef OFFICEBLOCK_HPP
# define OFFICEBLOCK_HPP

# include <iostream>
# include "Bureaucrat.hpp"
# include "Intern.hpp"

class OfficeBlock {

public:
    OfficeBlock(void);
    ~OfficeBlock(void);
    OfficeBlock &operator=(OfficeBlock const &rhs);

	/* Setters */
	void setIntern(Intern &);
	void setSigner(Bureaucrat &);
	void setExecutor(Bureaucrat &);

	/* Functionnal */
	void doBureaucracy(std::string formName, std::string targetName);

private:
	OfficeBlock(OfficeBlock const &src);

	Intern 		*_intern;
	Bureaucrat	*_signer;
	Bureaucrat	*_executor;

};

#endif
