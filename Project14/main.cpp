#include<iostream>
#include<string>

using namespace std;

class Student {
private:
	int _age;	//일반멤버변수
	int _classNum;
	int _grade;

public:
	string _name;
	static int count;	//정적멤버변수
						//정적멤버변수는 객체에 속해있지 않습니다.
						//클래스에 속해있다. 클래스 변수
	Student(string name)
	:_name(name)
	{
		cout << _name << "생성자" << endl;
		_age = 0;
		_classNum = 0;
		_grade = 0;
		count++;	//객체가 생성되면서 count값이 증가
	}

	~Student() {	//객체가 메모리공간 할당해제될 때 호출되어짐.
		cout << _name << "소멸자" << endl;
		count--;	//객체가 소멸할 때 count값이 감소
	}

	static int GetCount() {	//정적멤버함수, 클래스함수
		return count;
	}

	void info() {
		cout << _age << endl;
		cout << _classNum << endl;
		cout << _grade << endl;
	}
};

int Student::count = 0;	//정적멤버변수의 초기화는 클래스의 외부에서 해준다.

int main() {

	Student st("st");
	st.info();	//멤버함수는 객체를 통해서만 호출이 가능하다
	//cout << "count = " << st.count << endl;
	//정적멤버함수는 클래스를 통해서도 호출할 수 있다.
	cout << "count = " << Student::GetCount() << endl; //::(범위지정연산자)
	cout << "count = " << st.GetCount() << endl;

	{
		Student st1("st1");
		cout << "count = " << st.count << endl;
	}
	
	Student st2("st2");
	cout << "count = " << st.count << endl;

	return 0;
}
