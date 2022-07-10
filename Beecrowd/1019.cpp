#include <iostream>
 
using namespace std;
 
int main() {
	int h;
	cin >> h;
	cout << h/3600 << ":" <<(h%3600)/60<< ":" << (h%3600)%60<< endl;
    return 0;
}