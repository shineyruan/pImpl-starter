#include "HelloWorldImpl.h"
#include <iostream>
#include "HelloWorld.h"

void HelloWorld::HelloWorldImpl::hello() {
    // increment the count of how many times hello() has been called on this instance
    // print hello world and the current count]
    std::cout << "Hello World "
              << hello_count << std::endl;
    ++hello_count;
}
