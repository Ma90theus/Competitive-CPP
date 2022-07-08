#include <iostream>
#include <iomanip>
#define n  3.14159
using namespace std;
 
int main() {
	double area=0,raio;
	cin >> raio;
	area = n * (raio * raio);
	cout << fixed << setprecision(4);
	cout <<"A=" << area<<endl;
    return 0;
}