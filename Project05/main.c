#include<iostream>
#include <time.h>

using namespace std;

//나머지 연산자는 임의의 수를 일정한 의미있는 범위 숫자로 만들때 사용
int main() {
	srand(time(NULL)); //난수의 씨드값을 설정

	int randvalue = rand() ; // 난수를 발생

	int result = randvalue & 4; //0~3

	cout << "randvalue = " << randvalue << endl;
	cout << "result = " << result << endl;

	// 0: up, 1: down, 2: left, 3: right


	return 0;
}
