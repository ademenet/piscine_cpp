#include <iostream>
#include "Pony.hpp"

void ponyOnTheHeap(void) {
	Pony *myPonyOnTheHeap = new Pony("Roger le poney on the heap");

	myPonyOnTheHeap->doStuffThatPonyDo();
	delete myPonyOnTheHeap;
	return;
}

void ponyOnTheStack(void) {
	Pony myPonyOnTheStack("Robert le poney on the stack");

	myPonyOnTheStack.doStuffThatPonyDo();
	return;
}

int main(void) {
	std::cout << "Whistling the poney on the heap..." << std::endl;
	ponyOnTheHeap();
	std::cout << "Whistling the poney on the stack..." << std::endl;
	ponyOnTheStack();
	return(0);
}
