// C++ program to illustrate concept of Virtual Functions
#include <iostream>
using namespace std;

class base {
public:
	virtual void print() { cout << "print base class\n"; }

	void show() { cout << "show base class\n"; }
};
class derived : public base {
public:
	void print() { cout << "print derived class\n"; }

	void show() { cout << "show derived class\n"; }
};

int main()
{
	base *bp = new base();
	derived d;

	// Virtual function, binded at runtime
	bp->print(); // prints: print base class;

	// Non-virtual function, binded at compile time
	bp->show(); // prints: show base class

	d.show(); // show derived class
	d.print(); // print derived

	bp = &d;

	bp->show();
	bp->print();
	return 0;
}
