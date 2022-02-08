#include<iostream>

using namespace std;

int main() {
	int a = 20;
	int b = 30;


	int sum = a + b;
	cout << a << " + " << b << " = " << sum << endl;
	sum = a - b;
	cout << a << " - " << b << " = " << sum << endl;
	sum = a * b;
	cout << a << " * " << b << " = " << sum << endl;
	sum = a / b;
	cout << a << " / " << b << " = " << sum << endl;

	float sumf = 0.0f;
	sumf = a / b;

	cout << a << " / " << b << " = " << sumf << endl;

	sumf = a / (float)b; //(datatype) 형변환 연산자

	cout << a << " / " << b << " = " << sumf << endl;

	return 0;
}
