#include <iostream>
#include "Pony.hpp"

void ponyOnTheHeap()
{
	Pony *p = new Pony(200, 100);
	p->say_hello();
	p->run();
	delete p;
}

void ponyOnTheStack()
{
	Pony p(200, 100);
	p.say_hello();
	p.run();
}

int main()
{
	ponyOnTheHeap();
	ponyOnTheStack();
	return 0;
}
