#include <iostream>

using namespace std;


void zero(int bigIntegers[])
{

}
void zero(const int bigIntegers);
int addlandsum(int onetoosmall[])
{

}
void addlandsum(const int addlandsum());

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}

34-ÕÔ¸£çô-C5120 2019/5/5 8:39:40
//8.11
#include <iostream>

using namespace std;

int main()
{
   //a
   int z = 1;
   int *number = &z;
   cout<<*number<<endl;

   //b
   double *realPtr;
   long *integerPtr;
   *integerPtr= * realPtr;
 //c
   int*x,y;
   *x=y;

//d
   char s[] ={"this is a character array"};
  for(;*s!='\0';++s)
    cout<<*s<<' ' ;



  //e






    //f
    double a = 19.34;
    double *xPtr =&a;
    cout<<*xPtr<<endl;


}

34-ÕÔ¸£çô-C5120 2019/5/5 8:39:56
//8.13

#include <iostream>
using namespace std;

void mystery1( char *, const char * );

int main()
{
   char string1[ 80 ];
   char string2[ 80 ];

   cout << "Enter two strings: ";
   cin >> string1 >> string2;
   mystery1( string1, string2 );
   cout << string1 << endl;
}

void mystery1( char *s1, const char *s2 )
{
   while ( *s1 != '\0' )
      s1++;

   for ( ; *s1 = *s2; s1++, s2++ )
      ;
}

34-ÕÔ¸£çô-C5120 2019/5/5 8:40:17
//8.13

#include <iostream>
using namespace std;

void mystery1( char *, const char * );

int main()
{
   char string1[ 80 ];
   char string2[ 80 ];

   cout << "Enter two strings: ";
   cin >> string1 >> string2;
   mystery1( string1, string2 );
   cout << string1 << endl;
}

void mystery1( char *s1, const char *s2 )
{
   while ( *s1 != '\0' )
      s1++;

   for ( ; *s1 = *s2; s1++, s2++ )
      ;
}
