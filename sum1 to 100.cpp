#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int x,y,sum=0;
    x=1;
    while(x<=100){
        cout<<x;
        if(x/2*2!=x){
            cout<<"-";}
        else{
            cout<<"+";}
    sum=pow(sum+x,-1);
    x=x+1;
    }
    cout<<"\b ";
    cout<<"= "<<sum;
}

