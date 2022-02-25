#include<iostream>

using namespace std;

int global = 20;	//외부변수, 전역변수

class A {
private:
	int value;	//멤버변수
public:
	int info() {	//멤버함수
		global = 100;
	}
};



int add(int a, int b) {	//일반함수
	int sum;	//로컬변수, 자동변수
	static int count = 0;	//로컬변수, 정적변수
	sum = a + b;

	global = 100;

	return sum;
}

//main함수 프로그램 시작점.
int main() {
	int a;	//로컬변수, 자동변수
	int b;	//로컬변수, 자동변수
	a = 20;
	b = 30;

	int sum;
	sum = add(a, b);

	cout << a << " + " << b << " = " << sum << endl;

	return 0;
}
