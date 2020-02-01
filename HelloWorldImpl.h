#ifndef _HELLOWORLDIMPL_H
#define _HELLOWORLDIMPL_H

#include "HelloWorld.h"

class HelloWorld::HelloWorldImpl {
public:
    // add a function hello()
    void hello();
    // add a data member to count the number of times hello() has been called
    int hello_count;
};
#endif  // _HELLOWORLDIMPL_H
