#include <bits/stdc++.h>
using namespace std;

double func(double x){
    return x*x -4*x-10;
}

void bisection(double a,double b){
    if(func(a)*func(b)>=0){
        cout << "assumed wrong";
        return;
    }

    double c = a;
    while ((b-a)>=0.01)
    {
        c = (a+b)/2;
        if(func(c)==0.0){
            break;
        }
        else if(func(a)*func(c)<0){
            b = c;
        }else{
            a = c;
        }
    }
    cout << "The root is: " << c  << endl;
}

int main(){
    double a,b;
    cin >> a >> b;
    bisection(a,b);
}