#include<iostream>
#include<string>

using namespace std;

class Apple {
private:
	string _iphone;
	string _applewatch;
	string _airpods;

public:
	Apple()
		:_iphone(0), _applewatch(0), _airpods(0) {
		
	}
	Apple(string iphone,string applewatch, string airpods)
		:_iphone(iphone), _applewatch(applewatch), _airpods(airpods) {
		cout << "각 version  " << endl;
	}

	void info() {
		cout << "아이폰: " << _iphone << endl;
		cout << "애플워치: " << _applewatch << endl;
		cout << "에어팟: " << _airpods << endl;
	}

};

int main() {
	
	Apple apps("XR","SE","2세대");
	apps.info();




	return 0;
}
