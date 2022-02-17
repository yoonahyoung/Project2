#include<iostream>
#include<string>

using namespace std;

class Monster {
private:
	int _health; //멤버변수
	int _attack;
	int _defense;

public:
	Monster() 
		:_health(100),_attack(100),_defense(100)
	{	//생성자 (아무인자값도 받지 않는 생성자를 기본생성자라고 한다.)
		//생성자의 역할은 객체가 만들어 질 때 선행되어야 하는 작업을 생성자 함수에 넣어주시면 됩니다.
		cout << "Monster 기본 생성자" << endl;
		/*_health = 100;
		_attack = 100;
		_defense = 100;*/
	}

	//인자를 받는 생성자가 하나라도 있는 경우는
	//기본 생성자를 자동으로 만들어주지 않는다.

	//생성자 초기화 리스트를 사용하면 객체가 메모리에 할당됨과 동시에 멤버변수의 값이 초기화 됩니다.
	Monster(int health, int attack, int defense)
		:_health(health),_attack(attack),_defense(defense)
	{//인자를 받는 생성자
		int sum = 0;
		cout << "인자를 받는 생성자" << endl;
	}
	Monster(int health)
		:_health(health), _attack(0), _defense(0)
	{//인자를 받는 생성자
		int sum = 0;
		cout << "인자를 받는 생성자" << endl;
	}




	void Attack() { //멤버 함수 Action(행동), behaviour,
		cout << "공격" << endl;
	}

	void Defense() {
		cout << "방어" << endl;
	}

	void info() {
		cout << "생명력: " << _health << endl;
		cout << "공격력: " << _attack << endl;
		cout << "방어력: " << _defense << endl;
	}
};

int main() {

	//기본 생성자가 호출
	Monster mons;	//객체가 만들어지면서 자동으로 호출되는 멤버함수가 있습니다. 생성자라고 합니다.

	mons.info();

	//인자를 받는 생성자 호출
	Monster mons2(200,200,200);
	mons2.info();

	Monster mons3(100);
	mons3.info();

	return 0;
}
