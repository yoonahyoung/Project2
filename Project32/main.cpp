#include <iostream>
#include <string>

//오버라이딩을 통해서 구현한 함수

using namespace std;

class Drink {
private:
    string _name = "음료";

public:
    Drink() {}
    Drink(string name)
        : _name(name) {}

    string GetName() {
        return _name;
    }

    virtual void MakingDrink() {   // 가상멤버함수
        cout << "음료 를 만듭니다." << endl;
    }

};

class Coffee : public Drink {
public:
    Coffee()
        : Drink("Coffee")
    {}

    void MakingDrink() override {   // 일반멤버함수
        cout << "커피를 만듭니다." << endl;
    }

};

class Latte : public Drink {
public:
    Latte()
        : Drink("Latte")
    {}

    void MakingDrink() override {
        cout << "라떼를 만듭니다." << endl;
    }


};

class Cola : public Drink {
public:
    Cola()
        : Drink("Cola")
    {}

    void MakingDrink() override {
        cout << "콜라를 만듭니다." << endl;
    }


};


// 일반멤버함수는 변수 타입에 준해서 작동합니다.

// 가상멤버함수는 변수에 담긴 타입에 준해서 작동합니다.

class Barista {
public:
    void MakeDrink(Drink& drink) {
        cout << drink.GetName() << "를 만들도록 시킵니다." << endl;

        drink.MakingDrink();
    }
};

class Cashier {
private:
    Barista* _barista;

public:

    void SetBarista(Barista* barista) {
        _barista = barista;
    }

    void OrderedDrink(Drink& drink) {
        cout << drink.GetName() << "를 주문을 받습니다." << endl;
        _barista->MakeDrink(drink);
    }
};

class Guest {

public:
    void OrderingDrink(Drink& drink, Cashier& ref) {
        cout << drink.GetName() << "를 주문을 합니다." << endl;
        ref.OrderedDrink(drink);
    }
};

int main() {
    Guest guest;
    Cashier cashier;
    Barista barista;

    Coffee coffee;
    Latte latte;
    Cola cola;

    cashier.SetBarista(&barista);

    guest.OrderingDrink(coffee, cashier);

    cout << endl;
    guest.OrderingDrink(latte, cashier);


    cout << endl;
    guest.OrderingDrink(cola, cashier);




    return 0;
}
