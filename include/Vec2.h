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
    friend std::ostream& operator<<(std::ostream& out, Vec2& v);
};

#endif //VEC2_H
