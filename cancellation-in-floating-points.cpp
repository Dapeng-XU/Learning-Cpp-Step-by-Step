#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	float x = 1000.0f; // 10^4
	float y = 0.001f; // 10^(-4)
	cout << "Test the cancellation, which occurs during the calculation" << endl 
	 << " between two single floating points. " << endl
	 << "x = " << x << endl
	 << "y = " << y << endl
	 << "x + y = " << (x + y) << endl
	 << "y + x = " << (y + x) << endl
	 << "x - y = " << (x - y) << endl
	 << "y - x = " << (y - x) << endl;
	float r;
	int* ip = (int*)(&r);
	cout << setprecision(8);
	x = 10000.112f;
	y = 0.00048f;
	r = x;
	cout << "x = " << dec << x;
	cout << "(Hex: " << hex << *ip << ")" << endl;
	r = y;
	cout << "y = " << dec << y;
	cout << "(Hex: " << hex << *ip << ")" << endl;
	r = y;
	r = x + y;
	cout << "x = 10000.112, y = 0.00048, x + y = " << r
	 << "(Hex: " << hex << *ip << ")" << endl;
	y = 0.00049f;
	r = y;
	cout << "y = " << dec << y;
	cout << "(Hex: " << hex << *ip << ")" << endl;
	r = x + y;
	cout << "x = 10000.112, y = 0.00049, x + y = " << dec << r
	 << "(Hex: " << hex << *ip << ")" << endl;
	return 0;
}
