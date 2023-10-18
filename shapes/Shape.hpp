#pragma once

enum class Color : unsigned char { RED, GREEN, BLUE };

class Shape {
protected:
  Color color = Color::BLUE;

public:
  virtual ~Shape() {}

  virtual double getArea() const = 0;
  virtual double getPerimeter() const = 0;
  virtual void print() const;
};
