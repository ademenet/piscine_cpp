/**
 * @Author: ademenet
 * @Date:   2017-04-12T18:01:32+02:00
 * @Last modified by:   ademenet
 * @Last modified time: 2017-04-13T11:40:42+02:00
 */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

/* Template definition */
template<class T>
class Array {

public:
    Array(void);
	Array(unsigned int n);
    Array(Array <T> &);
    ~Array(void);
    Array<T> &operator=(Array <T> const &);
	T &operator[](unsigned int index);

	unsigned int size() const;

private:
	T 				*array;
	unsigned int	len;
};

#endif
