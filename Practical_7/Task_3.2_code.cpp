#include <iostream>
#define size 3
using namespace std;
int main()
{
    int arr[size][size]={1,2,3,4,5,6,7,8,9};
    int i=0,j=0;
cout<<"Input array is :"<<"\n";
for(i=0;i<size;i++)
{
    
for(j=0;j<size;j++)
        cout<<" "<<arr[i][j] ;
cout<<"\n";
}
cout<<"output array is :"<<"\n";
for(i=0;i<size;i++)
{
    for(j=0;j<size;j++)
        cout<<" "<<10-arr[i][j] ;                     //BY USING FORMULA ,i.e, 10-arr[i][j];
cout<<"\n";
}
return 0;
}
