#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int a, b, d, e;
    float c, f;
    double value;
    cin >> a >> b >> c;
    cin >> d >> e >> f;
    value = (b*c) + (e*f);
    cout << fixed << setprecision(2) << "VALOR A PAGAR: R$ " << value << endl;
    return 0;
}