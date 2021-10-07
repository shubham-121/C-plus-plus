#include <iostream>
#include <string>

using namespace std;

int main()
{
string s="hello";
cout<<"\n"<<&s;
s[0]='j';
cout<<"\n"<<s;
cout<<"\n"<<&s;
	return 0;
	
}
