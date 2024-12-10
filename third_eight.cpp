#include<iostream>
#include<math.h>

double f(double x){
  return sqrt(sin(x));
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

  if(i%3==0)
  {
    integration = integration + 2 * (f(k));
  }
  else
  {
    integration = integration + 3 * (f(k));
  }

 }

 integration = integration * h*3.0/8.0;

 cout<< endl <<"Required value of integration is: "<< integration;

 return 0;
}