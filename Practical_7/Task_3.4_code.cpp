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
}
cout<<"output elements of new array is :"<<"\n";                         
for(i=0;i<size;i++)
{
    for(j=0;j<size;j++)
        {   //cout<<" "<<arr[i][j] ;
           b[i][j]=10 - arr[i][j];                                           //RESTORING TO NEW ARRAY BY USING FORMULA ,i.e,10-arr[i][j]
           cout<<" "<<b[i][j];
        }    
cout<<"\n";

}
return 0;
}

