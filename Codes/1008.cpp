# include <iostream>
# include <iomanip>
using namespace std;
int main() {
    int a,b;
    float c;
    cin >> a >> b >> c;
    int number = a;
    float salary = b*c;
    cout << "NUMBER = " << number << endl;
    cout << fixed << setprecision(2) << "SALARY = U$ " << salary << endl;
    return 0;
}
