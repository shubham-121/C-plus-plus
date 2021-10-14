#include <iostream>
#define size 3
using namespace std;                                //BY REVERSING ARRAY
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
for(i=size-1;i>=0;i--)
{
    for(j=size-1;j>=0;j--)
    {
        cout<<" "<<arr[i][j];
    }
cout<<"\n";
}


return 0;
}

































