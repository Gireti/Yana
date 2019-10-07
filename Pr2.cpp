#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main ()
{
float a, b, c, D, x1, x2;
cout<<"Введите числа:"<<endl;
cout<<"a= ";
cin>>a;
cout<<"b= ";
cin>>b;
cout<<"c= "; 
cin>>c;

D=((b*b)-(4*a*c));
cout<<"D:"<<D<<endl;


  if(a==0){

    }

if(D>0){
    x1=(-b+sqrt(D))/(2*a);
    cout<<"X1=:"<<x1<<endl;
    x1=(-b-sqrt(D))/(2*a);
    cout<<"X2=:"<<x2<<endl;
}
else if (D==0)
{
   x1=(-b)/(2*a);
    cout<<"X1=:"<<x1<<endl; 
}
else
{
    cout<<"Корней нет"<<endl;
}

    return 0; 
}