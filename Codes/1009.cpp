#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    string a;
    double b, c, bonus;
    cin >> a >> b >> c;
    bonus= b+ ((c*15)/100);
    cout << fixed << setprecision(2) <<"TOTAL = R$ "<< bonus << endl;
    return 0;
}
