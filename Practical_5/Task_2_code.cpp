#include <iostream>
using namespace std;
void boolf()
{
bool x=1;
cout<<"\nbool value = "<<x;
cout<<"\nsize of bool = "<<sizeof(x);
}
void  intf()
{
 int x=10;
 cout<<"\ninteger value= "<<x;
 cout<<"\nsize of int ="<<sizeof(x);
}
void floatf()
{
float x=3.20;
cout<<"\nfloat value= "<<x;
cout<<"\nsize of float  = "<<sizeof(x);
}
void doublef()
{
 double x=2.4444;
 cout<<"\ndouble value = "<<x;
 cout<<"\nsize of double = "<<sizeof(x);
}
void longf()
{
long x=5000;
cout<<"\nlong int value ="<<x;
cout<<"\nsize of long int = "<<sizeof(x);
}
void charf()
{
char ch='A';
cout<<"\ncharacter value is "<<ch;
cout<<"\nsize of char ="<<sizeof(ch);
}
void widecharf()
{
wchar_t wch=L'm';
cout<<"\nwide char = "<<wch; 
cout<<"\nsize of wide char ="<<sizeof(wch);
}
void shortf()
{
short x=29;
cout<<"\nshort int = "<<x;
cout<<"\nsize of short = "<<sizeof(x);
}
int main()
{
boolf();
intf();
shortf();
longf();
charf();
floatf();
doublef();
}
