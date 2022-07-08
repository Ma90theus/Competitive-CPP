#include <iostream>
#define pi 3.14159
#include <iomanip>
using namespace std;
 
int main() {
 
	float a,b,c;
	cin >> a >> b >> c;
	cout << fixed << setprecision(3) <<"TRIANGULO: " << ((a*c)/2.0) <<endl;
	cout << fixed << setprecision(3) <<"CIRCULO: "<< pi * c * c <<endl;
	cout << fixed << setprecision(3) <<"TRAPEZIO: " << ((a + b) * c)/2.0 <<endl;
	cout << fixed << setprecision(3) <<"QUADRADO: " <<b*b<<endl;
	cout << fixed << setprecision(3) <<"RETANGULO: " << a * b<<endl;
    return 0;
}