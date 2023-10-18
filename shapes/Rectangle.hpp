#pragma once

#include <string>

#include "Shape.hpp"

class Rectangle : public Shape
{
public:
    Rectangle(double x, double y);
    Rectangle(const Rectangle& other);

    double getArea() const;
    double getPerimeter() const;
    double getX() const;
    double getY() const;
    void print() const;
    std::string getColor() const;

private:
    Rectangle();

    double x_;
    double y_;
};
