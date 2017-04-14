/**
 * @Author: ademenet
 * @Date:   2017-04-13T16:55:42+02:00
 * @Last modified by:   ademenet
 * @Last modified time: 2017-04-14T18:06:55+02:00
 */

#include "Span.hpp"

Span::Span(unsigned int N) : N(N) {
    return;
}

Span::Span(Span const &src) : N(src.getN()) {
    *this = src;
    return;
}

Span::~Span(void) {
    return;
}

Span &Span::operator=(Span const &rhs) {
    if (this != &rhs) { }
    return *this;
}

/* Functionnal */
void Span::addNumber(int number) {
	if (myset.size() > N)
		throw std::out_of_range("reach the array capacity");

	myset.insert(number);
	return;
}

int Span::shortestSpan() {
	if (myset.size() < 2)
		throw std::logic_error("array is too short");

	int span = std::numeric_limits<int>::max();
	std::set<int>::iterator ite = myset.begin();
	int prevValue = *ite;

	for (++ite; ite != myset.end(); ite++) {
		if ((prevValue - *ite) < span)
			span = prevValue - *ite;
		prevValue = *ite;
	}
	return span;
}

int Span::longestSpan() {
	if (myset.size() < 2)
		throw std::logic_error("array is too short");

	std::set<int>::iterator smallest = myset.end();
	std::set<int>::iterator biggest = myset.begin();
	smallest--;

	return *biggest - *smallest;
}

unsigned int Span::getN() const {
	return N;
}
