#include <iostream>
using namespace std;

//상속 수정 전

class CannonArm {
public:
    void info() {
        cout << "CannonArm" << endl;
    }
};

class GunArm {
public:
    void info() {
        cout << "GunArm" << endl;
    }
};

class LazerArm {
public:
    void info() {
        cout << "LazerArm" << endl;
    }
};

class CannonArmRobot {
private:
    CannonArm& _leftArm;
    CannonArm& _rightArm;

public:
    CannonArmRobot(CannonArm& leftArm, CannonArm& rightArm)
        : _leftArm(leftArm), _rightArm(rightArm) {}


    void info() {
        cout << "왼쪽팔: ";
        _leftArm.info();
        cout << "오른쪽팔: ";
        _rightArm.info();
    }

};

class GunArmRobot {
private:
    GunArm& _leftArm;
    GunArm& _rightArm;

public:
    GunArmRobot(GunArm& leftArm, GunArm& rightArm)
        : _leftArm(leftArm), _rightArm(rightArm) {}


    void info() {
        cout << "왼쪽팔: ";
        _leftArm.info();
        cout << "오른쪽팔: ";
        _rightArm.info();
    }
};








int main() {
    CannonArm cannonArm;
    GunArm gunArm;

    CannonArmRobot cannonArmRobot(cannonArm, cannonArm);
    cannonArmRobot.info();

    GunArmRobot gunArmRobot(gunArm, gunArm);
    gunArmRobot.info();


    return 0;
}
