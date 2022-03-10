#include <iostream>
#include <string>

//오버로딩을 이용한 다형성

using namespace std;

class Coffee {
private:
    string _name = "Coffee";

public:
    string GetName() {
        return _name;
    }

};

class Latte {
private:
    string _name = "Latte";

public:
    string GetName() {
        return _name;
    }

};

class Cocoa {
private:
    string _name = "Cocoa";

public:
    string GetName() {
        return _name;
    }
};



class Barista {
public:
    void MakeDrink(Coffee& drink) {
        cout << drink.GetName() << "를 만듭니다." << endl;
    }

    void MakeDrink(Latte& drink) {
        cout << drink.GetName() << "를 만듭니다." << endl;
    }

    void MakeDrink(Cocoa& drink) {
        cout << drink.GetName() << "를 만듭니다." << endl;
    }
};

class Cashier {
private:
    Barista* _barista;

public:

    void SetBarista(Barista* barista) {
        _barista = barista;
    }

    void OrderedDrink(Coffee& drink) {
        cout << drink.GetName() << "를 주문을 받습니다." << endl;
        _barista->MakeDrink(drink);
    }

    void OrderedDrink(Latte& drink) {
        cout << drink.GetName() << "를 주문을 받습니다." << endl;
        _barista->MakeDrink(drink);
    }

    void OrderedDrink(Cocoa& drink) {
        cout << drink.GetName() << "를 주문을 받습니다." << endl;
        _barista->MakeDrink(drink);
    }

};

class Guest {

public:
    void OrderingDrink(Coffee& drink, Cashier& ref) {
        cout << drink.GetName() << "를 주문을 합니다." << endl;
        ref.OrderedDrink(drink);
    }

    void OrderingDrink(Latte& drink, Cashier& ref) {
        cout << drink.GetName() << "를 주문을 합니다." << endl;
        ref.OrderedDrink(drink);
    }

    void OrderingDrink(Cocoa& drink, Cashier& ref) {
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
    Cocoa cocoa;

    cashier.SetBarista(&barista);

    guest.OrderingDrink(coffee, cashier);

    cout << endl;
    guest.OrderingDrink(latte, cashier);

    cout << endl;
    guest.OrderingDrink(cocoa, cashier);



    return 0;
}
