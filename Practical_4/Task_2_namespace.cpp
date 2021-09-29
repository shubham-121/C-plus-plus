#include <iostream>
using namespace std;                                     //code_by_shivam_dobhal_section_C
namespace first
{
  int add(int a,int b)
  {
    cout<<"\nsum= "<<a+b;
    return a+b;
  }
}

namespace second
{
  float add(float a,float b)
  {
    cout<<"\nsum="<<a+b;
    return a+b;
  }
}
using namespace second;
int main()
{
  add(1,2);
  add(1.2,2);
  add(1,2.1);
  add(1.1,2.1);
  add(0,1);
  return 0;
}
