#include<iostream>
#include"gradebook.h"
using namespace std;

int main()
{
    GradeBook GradeBook("wang","qiezi");
    cout<<"gradeBook's initial course name is:"
    << GradeBook.getCourseName();

    GradeBook.setCourseName("wdnmd");

    cout<<"gradeBook's name is:"
    << GradeBook.getCourseName()
    <<endl;

    GradeBook.displayMessage();


    return 0;
}
