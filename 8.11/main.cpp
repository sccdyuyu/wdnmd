#include <iostream>

using namespace std;

int main()
{
   int z = 1;
   int *number = &z;
   cout<<*number<<endl;
   double *realPtr;
   long *integerPtr;
   *integerPtr= * realPtr;
   int*x,y;
   *x=y;
   char s[] ={"this is a character array"};
  for(;*s!='\0';++s)
    cout<<*s<<' ' ;
    double a = 19.34;
    double *xPtr =&a;
    cout<<*xPtr<<endl;
}
