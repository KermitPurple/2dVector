#include<iostream>
#include<Vec2.h>
using namespace std;

int main(){
    //constructors
    Vec2 v1;
    Vec2 v2(5, 5);
    cout << v1.get_x() << " " << v1.get_y() << endl;
    cout << v2.get_x() << " " << v2.get_y() << endl;
    v1.set_x(3);
    v1.set_y(3);
    v2.set_xy(1,1);
    cout << v1.get_x() << " " << v1.get_y() << endl;
    cout << v2.get_x() << " " << v2.get_y() << endl;
    cout << v1 << endl;
    cin >> v1;
    cout << v1 << endl;
    cout << v2 << endl;
    cout << v1 + v2 << endl;
    cout << v1 - v2 << endl;
    v1 += v2;
    cout << v1 << endl;
    v2 -= v1;
    cout << v2 << endl;
    v1 = Vec2(10, 10);
    v2 = Vec2(5, 5);
    cout << v1 << v2 << endl;
    cout << (v1 * v2) << endl;
    cout << (v1 / v2) << endl;
    v1 *= Vec2(2, 2);
    v2 /= Vec2(2, 2);
    cout << v1 << v2 << endl;
    cout << (Vec2(2, 2) == Vec2(2, 2)) << endl;
    cout << (Vec2(2, 2) != Vec2(2, 2)) << endl;
    cout << (Vec2(2, 1) == Vec2(2, 2)) << endl;
    cout << (Vec2(2, 1) != Vec2(2, 2)) << endl;
	return 0;
}
