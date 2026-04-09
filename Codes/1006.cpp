#include <iostream>
#include <iomanip>  
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    double average = (a*2.0 + b*3.0 + c*5.0) / (2.0+3.0+5.0);
    cout << fixed << setprecision(1) << "MEDIA = " << average << endl;
    return 0;
}