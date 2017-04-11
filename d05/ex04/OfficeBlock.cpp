/**
 * @Author: ademenet
 * @Date:   2017-04-11T17:32:10+02:00
 * @Last modified by:   ademenet
 * @Last modified time: 2017-04-11T18:32:39+02:00
 */

#include "OfficeBlock.hpp"

OfficeBlock::OfficeBlock(void) {
    return;
}

OfficeBlock::OfficeBlock(OfficeBlock const &src) {
    *this = src;
    return;
}

OfficeBlock::~OfficeBlock(void) {
    return;
}

OfficeBlock &OfficeBlock::operator=(OfficeBlock const &rhs) {
    if (this != &rhs) { }
	return *this;
}

void OfficeBlock::setIntern(Intern &intern) {
	_intern = &intern;
	return;
}

void OfficeBlock::setSigner(Bureaucrat &signer) {
	_signer = &signer;
	return;
}

void OfficeBlock::setExecutor(Bureaucrat &executor) {
	_executor = &executor;
	return;
}

void OfficeBlock::doBureaucracy(std::string formName, std::string targetName) {
	// Error for assignment
	Form *newForm;
	newForm = _intern->makeForm(formName, targetName);
	_signer->signForm(*newForm);
	_executor->executeForm(*newForm);
}
