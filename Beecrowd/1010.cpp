#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
    int c1,c2,p1,p2;
	double pu1,pu2;
	cin >> c1 >> p1 >> pu1 >> c2 >> p2 >> pu2;
	cout << fixed << setprecision(2) << "VALOR A PAGAR: R$ " << ((p1*pu1)+(p2*pu2)) << endl;
    return 0;
}