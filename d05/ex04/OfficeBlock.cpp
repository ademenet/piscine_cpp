/**
 * @Author: ademenet
 * @Date:   2017-04-11T17:32:10+02:00
 * @Last modified by:   ademenet
 * @Last modified time: 2017-04-11T23:00:50+02:00
 */

#include "OfficeBlock.hpp"

OfficeBlock::OfficeBlock(void) : _intern(NULL), _signer(NULL), _executor(NULL) {
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

void OfficeBlock::setIntern(Intern *intern) {
	_intern = intern;
	return;
}

void OfficeBlock::setSigner(Bureaucrat *signer) {
	_signer = signer;
	return;
}

void OfficeBlock::setExecutor(Bureaucrat *executor) {
	_executor = executor;
	return;
}

void OfficeBlock::doBureaucracy(std::string formName, std::string targetName) {
	if (!_intern)
		throw OfficeBlock::SpecificException(1);
	else if (!_signer)
		throw OfficeBlock::SpecificException(2);
	else if (!_executor)
		throw OfficeBlock::SpecificException(3);
	Form *newForm;
	newForm = _intern->makeForm(formName, targetName);
	_signer->signForm(*newForm);
	_executor->executeForm(*newForm);
}

/* Exceptions */
OfficeBlock::SpecificException::SpecificException(int n) : _n(n) {
    return;
}

OfficeBlock::SpecificException::~SpecificException() throw() {
    return;
}

OfficeBlock::SpecificException::SpecificException(SpecificException const &src) {
    *this = src;
    return;
}

OfficeBlock::SpecificException &OfficeBlock::SpecificException::operator=(OfficeBlock::SpecificException const &rhs) {
    if (this != &rhs) { }
    return *this;
}

const char *OfficeBlock::SpecificException::what() const throw() {
	switch (_n) {
		case 1:
			return "no intern";
		case 2:
			return "no signer";
		case 3:
			return "no executor";
		default:
			return "office block error";
	}
}
