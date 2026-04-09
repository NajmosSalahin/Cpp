#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double a, b;
    b = 3.14159;
    cin >> a;
    cout << fixed << setprecision(3)<<"VOLUME = " << (4.0/3.0)*b*a*a*a << endl;
    return 0;
}