#include<iostream>

using namespace std;

int main() {
	int a = 20;

	float b = 1.2f;

	a = (int)b;//명시적 형변환

	a += 1;
	//a = a + 1;

	int k = 30;
	//식(expression)-결과값을 돌려주는것
	//문(statement)-그냥 처리만 하는것
	if (k > 20) { //참인 경우에만 처리, 단일 조건문
		cout << "k 가 20보다 큽니다." << endl;
	}
	

	if (k > 20) { //참과 거짓을 둘 다 처리, 이중 조건문
		cout << "k 가 20보다 큽니다." << endl;
	}
	else {
		cout << "k 가 20보다 작거나 같습니다." << endl;
	}
	
	k = 20;

	if (k > 30) { //조건이 여러개일때 처리,다중 조건문
		cout << "k 가 30보다 큽니다." << endl;
	}
	else if(k > 20) {
		cout << "k 가 20보다 큽니다." << endl;
	}
	else if (k > 10) {
		cout << "k 가 10보다 작습니다." << endl;
	}
	else {
		cout << "k 가 10보다 작습니다." << endl;
	}



	int buttonNum = 0;

	cout << "TV 리모컨의 버튼 번호를 입력하세요:" << endl;

	cin >> buttonNum;

	switch (buttonNum) {
	case 0: //변수를 만들때는 중괄호 블럭을 치고 만들어야함
	{int a = 20;
	cout << "TV 켜" << endl; }
		break;

	case 1:
		//int b = 20;
		cout << "TV 꺼" << endl;
		break;

	case 2:
		cout << "볼륨 올려" << endl;
		break;

	case 3:
	case 4:
	case 5:
	case 6:
		cout << "볼륨 내려" << endl;
		break;

	default:
		cout << "번호를 잘못 누르셨습니다." << endl;
		break;
		
	}

	/*
	if (buttonNum == 0) {

	}
	else if (buttonNum == 1) {

	}
	else if (buttonNum == 2) {

	}*/

	return 0;
}
