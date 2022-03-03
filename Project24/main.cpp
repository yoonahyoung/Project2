#include <iostream>
using namespace std;

//일반화 상속 

class Animal {
private:
    int _type;      // 0: 돼지, 1: 소, 2: 닭, 3: 돌고래
    int _weight;
    int _age;
    int _height;
    bool _isFly;    // 0: 못나는 닭, 1: 나는 닭
    bool _isSwim;   // 수영 여부


public:
    Animal(int type, int weight, int age, int height, bool isFly)
        : _type(type), _weight(weight), _age(age), _height(height), _isFly(isFly) {}


    void Speak() {

        switch (_type) {
        case 0:
            cout << "꿀꿀" << endl;
            break;

        case 1:
            cout << "음매" << endl;
            break;

        case 2:
            cout << "꼬끼오" << endl;
            break;

        }
    }


    void Walk() {
        if (_isFly) {
            cout << "난다" << endl;
        }
        else {
            if (_isSwim) {
                cout << "헤엄친다." << endl;
            }
            else {
                cout << "걷는다." << endl;
            }

        }
    }

};




int main()
{

    Animal pig(0, 100, 2, 100);
    Animal cow(1, 200, 2, 200);
    Animal chicken(2, 3, 1, 2);

    pig.Speak();
    cow.Speak();
    chicken.Speak();



    return 0;
}
