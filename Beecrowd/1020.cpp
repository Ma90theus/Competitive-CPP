#include <iostream>
 
using namespace std;
 
int main() {
	int d;
	cin >> d;
	cout << d /365 <<" ano(s)" << "\n";
	cout << (d %365)/30 <<" mes(es)" << "\n";
	cout << (d %365)%30 <<" dia(s)" << endl;
    return 0;
}