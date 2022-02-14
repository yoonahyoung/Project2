#include <iostream>
#include <string.>

using namespace std;

class Son {   // Son이라는 데이타 타입을 만듦, (클래스형 데이타 타입)
public:
	int _birthday;   // 생년월일   // 멤버변수
	string _address;    // 주소
	string _jumin;   // 주민번호

public:

	void SetBirthday(int value) {
		_birthday = value;
	}
	int GetBirthday() {
		return _birthday;
	}
	void SetAddress(string value) {
		_address = value;
	}
	string GetAddress() {
		return _address;
	}
	void SetJumin(string value) {
		_jumin = value;
	}
	string GetJumin() {
		return _jumin;
	}
};

//return type 함수명 (매개변수){
//명령어
//}
int add(int a, int b) {//일반함수
	int sum = a + b;

	return sum;  //함수의 외부로 값을 전달할때 return문을 사용
}

//return type이 void인 경우에는 return값이 없다는 이야기 입니다.
void print(string message) {
	cout << message << endl;
}

int main() {

	int sum = add(10, 20);
	cout << "sum = " << sum << endl;


	Son a;   // 클래스형 데이타 타입변수 -> 객체(object)

	//a.birthday = 19950110;
	a.SetBirthday(19950110);
	//a.address = "런던";
	a.SetAddress("런던");
	//a.jumin = "12312312312312";
	a.SetJumin("12312312312312");


	cout << "생년월일: " << a.GetBirthday() << endl;
	cout << "주소: " << a.GetAddress() << endl;
	cout << "주민번호: " << a.GetJumin() << endl;

	return 0;
}
