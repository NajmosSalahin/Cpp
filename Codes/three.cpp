#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    const double n = 3.14159;
    double R;
    cin >> R;
    cout << fixed << setprecision(4);
    cout <<"A="<< n * R*R << endl;
    return 0;
}
