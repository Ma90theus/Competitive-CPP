#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
 
int main() {
	double x1,y1,x2,y2,p1,p2;
	cin >> x1 >> y1 >> x2 >> y2;
	p1 = (x2-x1) * (x2-x1);
	p2 = (y2-y1) * (y2-y1);
	
	cout << fixed << setprecision(4) << sqrt(p1 + p2)<< endl;
	
    return 0;
}