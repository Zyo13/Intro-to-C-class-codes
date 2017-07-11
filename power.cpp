#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int x, y, z;
    cout << "Enter value of x:";
    cin >> x;
    cout << "Enter value of y:";
    cin >> y;
    z = pow(x,y);
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "x^y = " << z << endl;
}
