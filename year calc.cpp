#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int days, hours = 24, mins = 60, seconds = 60, h, m, s;
    cout << "No. of days in a year: ";
    cin >> days;
    h=days*hours;
    m=h*mins;
    s=m*seconds;
    cout << "1 year equals to " << h << " HOURS, " << m << " MINUTES, " << s << " SECONDS\n\n" << endl;
    return 0;
}
