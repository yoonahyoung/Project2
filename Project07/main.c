#include<iostream>

using namespace std;

int main() {

	int a = 20;
	int b = 30;

	int result = (a > b) ? a : b; //참이면  : 콜론 앞에 a, 거짓이면 콜론 뒤의 b
									// 항이 세개이기 때문에 삼항 연산자, 조건연산자
	cout << "a > b" << " = " << result << endl;

	//증감연산자
	//++,--

	cout << "a = " << a << endl;
	a++; //전위형
	//a = a + 1;
	cout << "a = " << a << endl;
	++a; //후위형
	//a = a + 1;
	cout << "a = " << a << endl;

	result = ++a;
	// a = a + 1;
	// result = a;
	cout << "result = " << result << endl;
	cout << "a = " << a << endl << endl;

	result = a++;
	// result = a;
	// a = a + 1;
	cout << "result = " << result << endl;
	cout << "a = " << a << endl;

	return 0;
}
