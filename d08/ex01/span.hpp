/**
 * @Author: ademenet
 * @Date:   2017-04-13T16:55:42+02:00
 * @Last modified by:   ademenet
 * @Last modified time: 2017-04-14T20:12:41+02:00
 */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <set>

class Span {

public:
	/* Coplien */
    Span(unsigned int N);
    Span(Span const &src);
    ~Span(void);
    Span &operator=(Span const &rhs);

	/* Functionnal */
	void addNumber(int);
	int shortestSpan();
	int longestSpan();

	unsigned int	getN() const;

private:
	Span(void);

	std::set< int, std::greater<int> >		myset;
	const unsigned int	N;

};

#endif
