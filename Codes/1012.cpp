#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double A, B, C;
    cin >> A >> B >> C;
    
    double triangleArea = (A * C) / 2.0;
    double circleArea = M_PI * C * C;
    double trapezoidArea = ((A + B) * C) / 2.0;
    double squareArea = B * B;
    double rectangleArea = A * B;
    
    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << triangleArea << endl;
    cout << "CIRCULO: " << circleArea << endl;
    cout << "TRAPEZIO: " << trapezoidArea << endl;
    cout << "QUADRADO: " << squareArea << endl;
    cout << "RETANGULO: " << rectangleArea << endl;
    
    return 0;
}
