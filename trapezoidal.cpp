#include<iostream>
#include<math.h>


double f(double x){
    return x*x*x + 1;
}
using namespace std;
int main()
{
 double a, b, integration=0.0, h, k;
 int i, n;


 cout<<"Enter a limit of integration: ";
 cin>>a;
 cout<<"Enter b limit of integration: ";
 cin>>b;
 cout<<"Enter number of sub intervals: ";
 cin>>n;

 
 h = (b - a)/n;
 
 integration = f(a) + f(b);

 for(i=1; i<= n-1; i++)
 {
  k = a + i*h;
  integration = integration + 2 * (f(k));
 }

 integration = integration * h/2;

 cout<< endl<<"Required value of integration is: "<< integration;

 return 0;
}