#ifndef VEC2_H
#define VEC2_H

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
};

#endif //VEC2_H
