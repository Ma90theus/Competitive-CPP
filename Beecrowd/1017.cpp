#include <iostream>
# include <iomanip>
using namespace std;
 
int main() {
	int km,hr;
	double l;
	cin >> hr >> km;
	l = (hr * km)/ 12.0;
	cout << fixed << setprecision(3) << l << endl;
    return 0;
}