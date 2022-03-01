#include<iostream>

using namespace std;

class com {
public:
	int _price = 1000000;

	void info() {
		cout << "컴퓨터 값 : " <<_price<< endl;
	}
};

class phone {
public:
	int _price = 200000;

	void info() {
		cout << "핸드폰 값 : "<< _price << endl;
	}
};

class smartphone : public com, public phone {
public:
	int _price = 1200000;

	void info() {
		cout << "스마트폰 가격 : " << _price << endl;
	}
};

int main() {

	smartphone s;

	s.smartphone::info();

	




	return 0;
}

/*#include <iostream>
#include <string>

using namespace std;


// 숙제
//다중상속
// 컴퓨터클래스와 phone클래스를 만드시고 
// 다중 상속해서 smartphone을 만들어보세요..

// 생활중에 다중상속을 할 수 잇는 것을 
// 생각해 보시고 클래스를 만들고 다중상속 해보세요...

class Computer {
private:
   string _message;
public:

   void Cacluate() {
      cout << "계산을 합니다." << endl;
   }

   void SendMessage() {
      cout << _message << "를 보냅니다." << endl;
   }

   void UseKakaoTalk() {
      cout << "카카오 톡을 사용합니다. " << endl;
   }
};

class Phone {
private:
   string _phoneNumber;

public:
   void Call() {
      cout << _phoneNumber << "로 전화를 겁니다." << endl;
   }

};

class SmartPhone : public Computer, public Phone {

};


int main() {

   SmartPhone sphone;

   sphone.UseKakaoTalk();

   return 0;
}*/
