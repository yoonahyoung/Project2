#include <iostream>
using namespace std;

//상속을 걷어내고 포함을 사용했을 때 (로봇은 변경할게 없고 팔 두개만 사용하니 굳이 모든 걸 상속할 필요는 없다.)

class Arm {
public:
    virtual void info() {

    }
};

class CannonArm : public Arm {
public:
    void info() override {
        cout << "CannonArm" << endl;
    }
};

class GunArm : public Arm {
public:
    void info() override {
        cout << "GunArm" << endl;
    }
};

class LazerArm : public Arm {
public:
    void info() override {
        cout << "LazerArm" << endl;
    }
};

class RocketArm : public Arm {
public:
    void info() override {
        cout << "RocketArm" << endl;
    }

};


class Robot {
private:
    Arm& _leftArm;
    Arm& _rightArm;

public:
    Robot(Arm& leftArm, Arm& rightArm)
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
    LazerArm lazerArm;
    RocketArm rocketArm;

    Robot cannonArmRobot(cannonArm, cannonArm);
    cannonArmRobot.info();

    Robot gunArmRobot(gunArm, gunArm);
    gunArmRobot.info();

    Robot lazerArmRobot(lazerArm, lazerArm);
    lazerArmRobot.info();

    Robot rocketArmRobot(rocketArm, rocketArm);
    rocketArmRobot.info();


    return 0;
}
