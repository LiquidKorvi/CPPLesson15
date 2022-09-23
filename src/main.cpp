//#include "windows.h"
//#include "stdafx"
#include "iostream"
//#include "math.h"

using namespace std;

struct JustPoint {
	int x, y;
	void set(int a, int b) {   x = a;   y = b;   };
	void show() { cout << "x = " << x << "  y = " << y << endl; };

};

struct Circle : JustPoint {
	int radius;
	using JustPoint::set;
	void set(int a) { radius = a; };
	void set(int a, int b, int c) { x = a; y = b; radius = c; };
	void ShowCircle() {
		show();
		cout << "Radius = " << radius << endl;
	};

};

int main()
{
	cout << "Hello, World!!\n\n" << endl;

	JustPoint jp_obj;
	jp_obj.set(455, 34343);
	jp_obj.show();
	cout << "\n\n" << endl;
	Circle cr_obj;
	cr_obj.set(555, 456, 789);
	//cr_obj.setradius(789);
	cr_obj.ShowCircle();

	getchar();
	return 0;
}
