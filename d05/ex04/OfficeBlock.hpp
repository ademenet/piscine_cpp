/**
 * @Author: ademenet
 * @Date:   2017-04-11T17:32:10+02:00
 * @Last modified by:   ademenet
 * @Last modified time: 2017-04-11T22:38:42+02:00
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
	void setIntern(Intern *);
	void setSigner(Bureaucrat *);
	void setExecutor(Bureaucrat *);

	/* Functionnal */
	void doBureaucracy(std::string formName, std::string targetName);

	/* Exceptions */
	class SpecificException : public std::exception {
        public:
            SpecificException(int);
            virtual ~SpecificException() throw();
            SpecificException(OfficeBlock::SpecificException const &src);
            SpecificException &operator=(SpecificException const &rhs);
            virtual const char * what() const throw();

		private:
			int	_n;
    };


private:
	OfficeBlock(OfficeBlock const &src);

	Intern 		*_intern;
	Bureaucrat	*_signer;
	Bureaucrat	*_executor;

};

#endif
