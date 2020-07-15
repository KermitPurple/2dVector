#include<Vec2.h>

Vec2::Vec2(){
    x = y = 0;
}

Vec2::Vec2(double xx, double yy){
    x = xx;
    y = yy;
}

void Vec2::set_x(double xx){
    x = xx;
}

void Vec2::set_y(double yy){
    y = yy;
}

double Vec2::get_x(){
    return x;
}

double Vec2::get_y(){
    return y;
}
