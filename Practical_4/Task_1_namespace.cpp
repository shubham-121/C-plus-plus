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

int main()
{
  first::add(1,2);
  second::add(1.2,2);
  second::add(1,2.1);
  first::add(1.1,2.1);
  first::add(0,1);
  return 0;
}
