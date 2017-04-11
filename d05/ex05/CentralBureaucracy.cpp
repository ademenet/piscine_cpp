/**
 * @Author: ademenet
 * @Date:   2017-04-11T18:31:51+02:00
 * @Last modified by:   ademenet
 * @Last modified time: 2017-04-11T18:33:36+02:00
 */

#include "CentralBureaucracy.hpp"

CentralBureaucracy::CentralBureaucracy(void) {
    return;
}

CentralBureaucracy::CentralBureaucracy(CentralBureaucracy const &src) {
    *this = src;
    return;
}

CentralBureaucracy::~CentralBureaucracy(void) {
    return;
}

CentralBureaucracy &CentralBureaucracy::operator=(CentralBureaucracy const &rhs) {
    if (this != &rhs) {

    }
    return *this;
}
