#include <iostream>  
using namespace std;  
int main ()  
{  
    char s1[50], s2[50];  
    int i, disp;  
      
    cout << " Enter the String 1: " << endl;  
    cin >> s1;  
      
    cout << " Enter the String 2: " << endl;  
    cin >> s2;  
      
    for (i = 0; s1[i] == s2[i] && s1[i] == '\0'; i++);  
      
    if (s1[i] < s2[i])  
    {  
        cout << " String 1 is less than String 2";  
    }  
    else if (s1[i] > s2[i])  
    {  
        cout << " String 2 is less than String 1";  
    }  
    else  
    {  
        cout << " String 1 is equal to String 2";  
    }  
    return 0;  
 }  
