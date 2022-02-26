#include<iostream>

using namespace std;

class A {
public:
	int _value;
public:
	A(int value)
		: _value(value){}
};

class B :public A {
public:
	int _value2;

public:
	B(int value, int value2)
		:A(value), _value2(value2){}
};

int main() {

	A a(10);

	B b(10, 20);

	a = b;	//상속관계에서 부모의 데이타 타입에 자식의 데이타 타입이 대입 가능하다.
			//업캐스팅

	//b = a;	//다운스캐스팅 (자식 데이타 타입에 부모 데이타 타입을 대입) 

	A& ref = b;	//참조타입이나

	ref._value = 100;
	cout << "b._value = " << b._value2 << endl;
	
	A* pa = &b;		//포인터 타입으로

	pa->_value = 200;
	cout << "b.value = " << b._value2 << endl;

	B* pab = (B*)pa;	//다운캐스팅

	cout << "pab -> _value = " << pab->_value << endl;
	cout << "pab -> _value2 = " << pab->_value2 << endl;

	return 0;
}
