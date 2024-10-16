#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "n= ";
    cin >> n;

   
    double pointx[n], pointy[n];

    
    cout << " x: ";
    for (int i = 0; i < n; i++) {
        cin >> pointx[i];
    }

    
    cout <<" y= ";
    for (int i = 0; i < n; i++) {
        cin >> pointy[i];
    }

    double sumx = 0, sumy = 0, sumx_squared = 0, sumxy = 0;
    for (int i = 0; i < n; i++) {
        sumx += pointx[i];
        sumy += pointy[i];
        sumx_squared += pointx[i] * pointx[i];
        sumxy += pointx[i] * pointy[i];
    }

    double b = (n * sumxy - sumx * sumy) / (n * sumx_squared - sumx * sumx);
    double a = (sumy - b * sumx) / n;

    cout << "eq : y = " << a << " + " << b << " * x" << endl;

    return 0;
}
