#include<Vec2.h>

Vec2::Vec2(){
    x = y = 0;
}

Vec2::Vec2(double xx, double yy){
    set_xy(xx, yy);
}

void Vec2::set_x(double xx){
    x = xx;
}

void Vec2::set_y(double yy){
    y = yy;
}

void Vec2::set_xy(double xx, double yy){
    x = xx;
    y = yy;
}

double Vec2::get_x(){
    return x;
}

double Vec2::get_y(){
    return y;
}

std::ostream& operator<<(std::ostream& out, Vec2 v){
    out << "(" << v.get_x() << ", " << v.get_y() << ")";
    return out;
}

std::istream& operator>>(std::istream& ins, Vec2& v){
    std::cout << "Enter x: ";
    ins >> v.x;
    std::cout << "Enter y: ";
    ins >> v.y;
    return ins;
}

Vec2 Vec2::operator+(const Vec2 other) const{
    return Vec2(x + other.x, y + other.y);
}
