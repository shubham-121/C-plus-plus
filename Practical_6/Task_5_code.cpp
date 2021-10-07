 # include <iostream>
# include <string>

using namespace std;

int main()
{
	string s1,s2;
	cout<<"Enter any two string:-\n";

	getline(cin,s1);


	getline(cin,s2);
	int x= s1.compare(s2);
	cout<<"Difference in Strings= "<<x<<"\n";
	
	if(x==0)
		cout<<"Strings are equal\n";
	else
		cout<<"Strings are unequal\n";
	return 0;
}
