#include <iostream>
#include <string.>

using namespace std;

class Son {   // Son이라는 데이타 타입을 만듦, (클래스형 데이타 타입)
public:
	int sonnum;   // 선수번호   // 멤버변수
	string price;    // 가격
	string grade;   // 등급
};

int main() {
	Son a;   // 클래스형 데이타 타입변수

	a.sonnum = 7;
	a.price = "1300000000";
	a.grade = "SSS";


	cout << "선수번호: " << a.sonnum << endl;
	cout << "가격: " << a.price << endl;
	cout << "등급: " << a.grade<< endl;

	return 0;
}
