#include <iostream>
 
using namespace std;
 
int main() {
	int v;
	cin >> v;
	cout << v << "\n";
	cout<< v/100 << " nota(s) de R$ 100,00" << "\n";
	cout<< (v%100)/50 << " nota(s) de R$ 50,00" << "\n";
	cout<< ((v%100)%50)/20 << " nota(s) de R$ 20,00" << "\n";
	cout<<(((v%100)%50)%20)/10 << " nota(s) de R$ 10,00" << "\n";
	cout<< ((((v%100)%50)%20)%10)/5<< " nota(s) de R$ 5,00" << "\n";
	cout<< (((((v%100)%50)%20)%10)%5)/2<< " nota(s) de R$ 2,00" << "\n";
	cout<< (((((v%100)%50)%20)%10)%5)%2<< " nota(s) de R$ 1,00" <<endl;
    return 0;
}