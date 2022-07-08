#include <iostream>
#include <iomanip>
#define pi 3.14159
using namespace std;
 
int main() {

	double r,v;
	cin >> r;
	v = ((4/3.0) * pi * r * r * r);
	cout << fixed << setprecision(3)<< "VOLUME = " << v << endl;
    return 0;
}