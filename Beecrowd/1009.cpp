#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
	string n;
	double sal,sell;
	cin >> n >> sal >> sell;
	cout << fixed << setprecision(2) << "TOTAL = R$ "<< sal + (0.15 * sell) << endl;
    return 0;
}