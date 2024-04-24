#include <iostream>
#include <fstream>

using namespace std;
int main() {
   cout << "Adj meg egy számot << endl;
   int a;
   cin >> a;
   for(int i=0; i < 5; i++) {
       cout << "Adj meg egy számot << endl;
       int a;
       cin >> a;
    }

   double pi = 3.1415926535;
   cout << pi << endl;
   cout << setw(10) << pi << endl;
   cout << setprecision(4) << pi << endl;
   return 0;
}
