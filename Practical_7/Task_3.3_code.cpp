#include <iostream>
#define size 3
using namespace std;
int main()
{
    int arr[size][size]={1,2,3,4,5,6,7,8,9};
    int i=0,j=0;
    int b[size][size];
cout<<"Input array is :"<<"\n";
for(i=0;i<size;i++)
{
    
for(j=0;j<size;j++)
        cout<<" "<<arr[i][j] ;
cout<<"\n";
}                                                                         //TO RESTORE VALUES IN NEW ARRAY
cout<<"output elements of new array is :"<<"\n";
for(i=size-1;i>=0;i--)
{
    for(j=size-1;j>=0;j--)
        {   //cout<<" "<<arr[i][j] ;
           b[i][j]=arr[i][j];
           cout<<" "<<b[i][j];
        }    
cout<<"\n";

}
return 0;
}
