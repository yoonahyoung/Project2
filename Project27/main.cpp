#include <iostream>
using namespace std;

//상속 수정 후


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


class CannonArmRobot : public Robot {
public:
    CannonArmRobot(CannonArm& leftArm, CannonArm& rightArm)
        : Robot(leftArm, rightArm) {}
};

class GunArmRobot : public Robot {
public:
    GunArmRobot(GunArm& leftArm, GunArm& rightArm)
        : Robot(leftArm, rightArm) {}
};

class LazerArmRobot : public Robot {
public:
    LazerArmRobot(LazerArm& leftArm, LazerArm& rightArm)
        : Robot(leftArm, rightArm) {}

};

class RocketArmRobot : public Robot {
public:
    RocketArmRobot(RocketArm& leftArm, RocketArm& rightArm)
        : Robot(leftArm, rightArm) {}
};


int main() {
    CannonArm cannonArm;
    GunArm gunArm;
    LazerArm lazerArm;
    RocketArm rocketArm;

    CannonArmRobot cannonArmRobot(cannonArm, cannonArm);
    cannonArmRobot.info();

    GunArmRobot gunArmRobot(gunArm, gunArm);
    gunArmRobot.info();

    LazerArmRobot lazerArmRobot(lazerArm, lazerArm);
    lazerArmRobot.info();

    RocketArmRobot rocketArmRobot(rocketArm, rocketArm);
    rocketArmRobot.info();


    return 0;
}
