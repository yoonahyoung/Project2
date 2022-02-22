#include<iostream>

using namespace std;

class A {
private:
	int _value;	//멤버변수
	int _value2;

public:

	static int count;	//정적멤버변수
	A(int value, int value2)	//인자를 받는 생성자
		: _value(value), _value2(value2) {}

	//정적멤버함수 안에서
	//멤버 변수에 접근하면 안됩니다.
	//정적멤버함수에서는 정적멤버변수만 접근이 가능합니다.
	//정적멤버함수는 객체를 생성하지 않고도 함수를 호출 할 수 있습니다.
	static int GetCount() {	//정적멤버함수
		//_value = 20;	//일반 멤버변수 접근 안됨.
		return count;
	}

	void info() {	//멤버함수
		cout << "_value = " << _value << endl;
		cout << "_value2 = " << _value2 << endl;
		cout << "this pointer = " << this << endl << endl;
	}
};

int A::count = 0;

//this 자기 참조형 포인터
int main() {

	A a(10,30);
	A b(20,40);

	A::GetCount();

	a.info();

	b.info();

	return 0;
}
