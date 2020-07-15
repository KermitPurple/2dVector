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
    cout << v1.get_x() << " " << v1.get_y() << endl;
	return 0;
}
