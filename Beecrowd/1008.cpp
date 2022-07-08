#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
   int n1,n2;
   double sal,sal_tot;
   cin >> n1 >> n2 >> sal;
   sal_tot = sal * n2;
   cout << "NUMBER = " << n1 << endl;
   cout << fixed << setprecision(2) << "SALARY = U$ " << sal_tot << endl;
    return 0;
}