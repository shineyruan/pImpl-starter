#include "HelloWorld.h"
#include "HelloWorldImpl.h"

HelloWorld::HelloWorld() {
   // allocate an instance of HelloWorldImpl and remember its address in pImpl
}

HelloWorld::~HelloWorld() {
   // delete the instance of HelloWorldImpl that you allocated above
}
       
void HelloWorld::speak() {
   // call your impl's hello() function 
}
