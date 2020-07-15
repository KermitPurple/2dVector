#ifndef VEC2_H
#define VEC2_H

#include<iostream>

class Vec2{
private:
    double x, y;
public:
    Vec2();
    Vec2(double, double);
    void set_x(double);
    void set_y(double);
    void set_xy(double, double);
    double get_x();
    double get_y();
    friend std::ostream& operator<<(std::ostream& out, Vec2 v);
    friend std::istream& operator>>(std::istream& ins, Vec2& v);
    Vec2 operator+(const Vec2 other) const;
    Vec2 operator-(const Vec2 other) const;
    Vec2 operator*(const Vec2 other) const;
    Vec2 operator/(const Vec2 other) const;
    Vec2& operator+=(const Vec2 other);
    Vec2& operator-=(const Vec2 other);
    Vec2& operator*=(const Vec2 other);
    Vec2& operator/=(const Vec2 other);
};

#endif //VEC2_H
