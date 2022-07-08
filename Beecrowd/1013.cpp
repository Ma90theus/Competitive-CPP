#include <iostream>
 
using namespace std;
 
int main() {
	int a,b,c,mab,mcf,state;
	cin >> a >> b >>c;
	state = a - b;
	if(state < 0){
		state = state * -1;
	};
	mab = (a + b + state) /2;
	state = mab - c;
	if (state < 0){
		state = state * -1;
	};
	mcf = (mab + c + state)/2;
	cout <<mcf<< " eh o maior" <<endl;
    return 0;
}