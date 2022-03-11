#include <iostream>

using namespace std;

class A {
public:

    void print() {  //일반멤버함수
        cout << "A:print()" << endl;
    }

    virtual void print2() { //가상함수
        cout << "A:print2()" << endl;
    }

    virtual void print3() { //가상함수
        cout << "A:print3()" << endl;
    }
};

class B : public A {
public:

    void print() {  //일반멤버함수
        cout << "B:print()" << endl;
    }

    void print2() override {    //오버라이드
        cout << "B:print2()" << endl;
    }

};

class C : public A {
public:

    void print() {  //일반멤버함수
        cout << "C:print()" << endl;
    }

    void print3() override {    //오버라이드
        cout << "C:print3()" << endl;
    }

};


void funcPrint(A& ref) {
    ref.print();
    ref.print2();
    ref.print3();
}


int main() {
    A a;
    B b;
    C c;

    cout << "A class type" << endl;
    funcPrint(a);

    cout << "B class type" << endl;
    funcPrint(b);

    cout << "C class type" << endl;
    funcPrint(c);

    return 0;
}
