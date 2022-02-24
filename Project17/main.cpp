#include<iostream>

using namespace std;

class Math2 {
public:
	int add(int a, int b) {
		return a + b;
	}

	int add(float a) {
		return a;
	}

	float add(float a, int b) {
		return a - b;
	}

	
	float add(float a, float b) {
		return a + b;
	}
};

int add(int a, int b) {
	return a + b;
}

//_add

//C언어에서는 한 프로젝트 안에 동일한 함수명이 있을 수 없습니다.
//c++에서는 한 프로젝트 안에 동일한 함수명을 만들 수 있습니다.
//오버로딩: 동일한 함수명으로 함수를 만드는 것.
//완전히 동일한 함수는 만들 수 없습니다.
// 매개변수의 갯수나 매개변수의 데이타 타입이 달라야 합니다.
//리턴타입은 포함되지 않습니다.

//함수를 네이밍하는 방법이 c언어랑은 달라서 가능
//c++언어는 네이밍을 할때 네임맹글링
//매개변수의 데이타 타입을 함수의 이름에 포함시키는 방법

int main() {
	int a = 20;
	int b = 30;

	float c = 40;
	float d = 50;
	
	Math2 math;

	cout << a << " + " << b << "= " << math.add(20, 30) << endl;
	//cout << a << " + " << b << "= " << math.addxx(20, 30) << endl;

	cout << c << " + " << d << "= " << math.add(c, d) << endl;
	//cout << c << " + " << d << "= " << math.addyy(c, d) << endl;

	return 0;
}
