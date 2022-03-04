#include <iostream>
using namespace std;

//특수화 상속

class Animal {
private:
    //int _type;      // 0: 돼지, 1: 소, 2: 닭, 3: 돌고래
    int _weight;
    int _age;
    int _height;


    bool _isSwim;   // 수영 여부


public:
    Animal(int weight, int age, int height)
        : _weight(weight), _age(age), _height(height) {}


    void Speak() {

    }


    void Walk() {
        cout << "걷는다." << endl;
    }

};


class Pig : public Animal {

public:
    Pig(int weight, int age, int height)
        : Animal(weight, age, height) {}

    void Speak() {
        cout << "꿀꿀" << endl;
    }

};

class Cow : public Animal {
public:
    Cow(int weight, int age, int height)
        : Animal(weight, age, height) {}

    void Speak() {
        cout << "음매" << endl;
    }

};

class Chicken : public Animal {
private:
    bool _isFly;    // 0: 못나는 닭, 1: 나는 닭

public:
    Chicken(int weight, int age, int height, bool isFly)
        : Animal(weight, age, height), _isFly(isFly) {}

    void Speak() {
        cout << "꼬끼오" << endl;
    }


    void Walk() {
        if (_isFly) {
            cout << "난다" << endl;
        }
        else {
            cout << "걷는다." << endl;
        }
    }

};

class Dolphin : public Animal {
public:
    void Walk() {
        cout << "헤엄친다." << endl;
    }

    void Speak() {

        cout << "끽끽" << endl;
    }
};




int main()
{

    Pig pig(100, 2, 100); //pig에 walk함수가 없는 경우엔 부모의 것이 실행
    Cow cow(200, 2, 200);
    Chicken chicken(3, 1, 2, false);

    pig.Speak();
    cow.Speak();
    chicken.Speak();



    return 0;
}
