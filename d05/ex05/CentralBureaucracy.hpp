/**
 * @Author: ademenet
 * @Date:   2017-04-11T18:31:51+02:00
 * @Last modified by:   ademenet
 * @Last modified time: 2017-04-11T18:33:25+02:00
 */

#ifndef CENTRALBUREAUCRACY_HPP
# define CENTRALBUREAUCRACY_HPP

# include <iostream>

class CentralBureaucracy {

public:
    CentralBureaucracy(void);
    CentralBureaucracy(CentralBureaucracy const &src);
    ~CentralBureaucracy(void);
    CentralBureaucracy &operator=(CentralBureaucracy const &rhs);

private:

};

#endif
