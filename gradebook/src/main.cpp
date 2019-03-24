#include<iostream>
#include<GradeBook.h>
using namespace std;

int main()
{
    GradeBook GradeBook;
    cout<<"gradeBook's initial course name is:"
    << gradeBook.getCourseName();

    gradeBook.setCourseName("CS101 C++ Programming");

    cout<<"gradeBook's name is:"
    << gradeBook.getCourseName()
    <<endl;

    GradeBook.displayMessage();


    return 0;
}
