#include <iostream>
#include <iomanip>
using namespace std;

int celsius(int);
int fahrenheit(int);
int celsius(int f)
{
   return (5/9*(f-32));
}
int fahrenheit(int c)
{
   return (9/5*(c+32));
}
int main()
{
   cout << "Fahrenheit to Celsius:" << endl;
      for ( int t = 0; t < 4; t++ )
         cout << setw(7) << "Celsius" << setw(12) << "Fahrenheit ";
   cout << endl;
   for ( int i = 0; i < 25; i++ )
   {
      for ( int j = 0; j <= 75; j += 25 )
         cout << setw( 7 ) << i+j<< setw( 11 ) <<fahrenheit(i+j)<< ' ';
   cout << endl;
   }

   cout << "\nCelsius to Fahrenheit:" << endl;
      for ( int t = 0; t < 4; t++ )
         cout <<setw(10) <<"Fahrenheit"<<setw(9) << "Celsius ";
   cout << endl;
   for ( int i = 32; i < 77; i++ )
   {
      for ( int j = 0; j <= 135; j += 45 )
         cout <<setw( 10 )<<i + j<< setw(8)<<celsius(i+j) << ' ';
   cout << endl;
   }
}
