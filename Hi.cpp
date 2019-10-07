#include <iostream>
#include <string>
using namespace std;

int main ()
{

 cout<<"Введите числа "<<endl;
 int x, y, w, h, x1, y2;
 cout<<"Введите x и y"<<endl;
 cout<<"x= ";
 cin >> x;
cout<<"y= ";
 cin >> y;

 cout<<"Введите w и h"<<endl;
 cout<<"w= ";
 cin >> w;
cout<<"h= ";
 cin >> h;
 

 cout<<"Введите x1 и y2"<<endl;
 cout<<"x1= ";
 cin >> x1;
 cout<<"y2= ";
 cin >> y2; 

 if((x1>x)&&(x1<(x+w))&&(y2<y)&&(y2>(y-h)))
 {
 cout<<"Входит в квадрат"<<endl;
 }
 else if ((y2>y)||(x1<x)||(x1>(x+w))||(y2<(y-h)))
 {
  cout<<"Не входит в квадрат"<<endl; 
 }
 else //if ((x1>x)&&(x1<(x+w))&&(y2<(y-h)))
 {
cout<<"На линии"<<endl; 
 }
return 0; 
}