#include<iostream>

using namespace std;

class A {
public:
	int _value = 20;

	void Show() {
		cout << "A::Show()" << endl;
	}

	void info() {
		cout << "A::_value = " << _value << endl;
	}

};

class B {
public:
	int _value = 30;

	void Show() {
		cout << "B::Show()" << endl;
	}

	void info() {
		cout << "B::_value = " << _value << endl;
	}
};

class C : public A, public B {

};

int main() {

	C a;

	a.A::_value = 100;
	a.A::info();

	return 0;
}
