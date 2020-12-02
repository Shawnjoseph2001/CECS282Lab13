//
// Created by shawn on 11/26/20.
//

#include "cylinderType.h"
#include <iostream>
#include <cmath>
using namespace std;
void cylinderType::print() const {
    cout << "Base Center: " << circleType::getX() << ", " << circleType::getY() << endl;
    cout << "Base radius: " << circleType::getRadius() << endl;
    cout << "Base circumference: " << circleType::getCircumference() << endl;
    cout << "Base area: " << circleType::getArea() << endl;
    cout << "Cylinder Height: " << getHeight() << endl;
    cout << "Cylinder Surface area: " << getSurfaceArea() << endl;
    cout << "Cylinder Volume: " << getVolume() << endl;
}

void cylinderType::setHeight(double h) {
    height = h;
}

void cylinderType::setBaseCenter(double x, double y) {
    circleType::setPoint(x, y);
}

void cylinderType::setCenterRadiusHeight(double x, double y, double r, double h) {
    circleType::setPoint(x, y);
    height = h;
    circleType::setRadius(r);
}

double cylinderType::getHeight() const {
    return height;
}

double cylinderType::getVolume() const {
    return getHeight() * circleType::getArea();
}

double cylinderType::getSurfaceArea() const {
    return M_PI * circleType::getRadius() * 2 * (height + circleType::getRadius());
}

cylinderType::cylinderType(double x, double y, double r, double h) {
    setCenterRadiusHeight(x, y, r, h);
}

