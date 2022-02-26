#include<iostream>
#include<string>

using namespace std;
//상속의 방법은
//일반화, 특수화

class Animal {
protected:
	string _name;
	float _age;
	float _weight;
	float _height;

public:
	Animal(string name, float age, float weight, float height)
		: _name(name), _age(age), _weight(weight), _height(height) {}

	void Walk() {
		cout << _name << "가 걷는다." << endl << endl;
	}

	void info() {
		cout << "이름 : " << _name << endl;
		cout << "나이 : " << _age << endl;
		cout << "몸무게 : " << _weight << endl;
		cout << "키 : " << _height << endl;
	}
};



class Pig : public Animal {
public:
	Pig(string name,float age, float weight, float height)
		: Animal(name,age,weight,height){}

	void Speak() {
		cout << _name << "가 말한다. 먉먉" << endl;
	}

};

class Cow : public Animal{
public:
	Cow(string name, float age, float weight, float height)
		: Animal(name, age, weight, height) {}

	void Speak() {
		cout << _name << "가 말한다. 음메"  << endl;
	}

};

class Chicken : public Animal {
private:

	bool _isFly;

public:
	Chicken(string name, float age, float weight, float height, bool isFly)
		: Animal(name, age, weight, height) ,_isFly(isFly) {}

	void Speak() {
		cout << _name << "이 말한다. 꼬끼오" << endl;
	}

	void Walk() {
		if (_isFly) {	
		cout << _name << "이 난다." << endl << endl;
		}
		else {
			cout << _name << "이 걷는다." << endl << endl;
		}
		
	}
};

int main() {

	Pig pig("보미", 1.5f, 100.0f, 1.5f);
	Cow cow("소", 1.8f, 200.0f, 2.0f);
	Chicken notflychicken("닭", 0.5f, 3.0f, 0.3f, false);
	Chicken flychicken("닭", 0.5f, 3.0f, 0.3f, true);
	
	
	pig.info();
	pig.Speak();
	pig.Walk();
	

	cow.info();
	cow.Speak();
	cow.Walk();

	notflychicken.info();
	notflychicken.Speak();
	notflychicken.Walk();

	flychicken.info();
	flychicken.Speak();
	flychicken.Walk();

	return 0;
}
