#include<iostream>

using namespace std;

int main() {
	int a = 20;
	int b = 30;

	cout << a << " < " << b << " = " << (a < b) << endl;
	cout << a << " > " << b << " = " << (a > b) << endl;

	int x = 0;

	cout << "x의 값을 입력하세요:";
	cin >> x; //키보드에서 값을 입력받을때 사용

	int result = (x > 0) && (x < 10);

	cout << "result = " << result << endl;
	

	return 0;
}
