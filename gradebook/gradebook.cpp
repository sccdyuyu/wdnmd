#include <iostream>
#include"gradebook.h"
using namespace std;
GradeBook::GradeBook (string cn,string tn)
:courseName(cn),teacherName(tn)
{

}
void GradeBook::setCourseName(string cn)
{
    courseName=cn;
}
string GradeBook::getCourseName()const
{
    return courseName;
}
void GradeBook::setTeacherName(string tn)
{
    teacherName=tn;
}
string GradeBook::getTeacherName()const
{
    return teacherName;
}
void GradeBook::displayMessage()const
{
    cout<<"welcome to the grade book for\n"<<getCourseName()<<"!"<<"\nThis course is presented by\n"<<getTeacherName()<<"!"<<endl;
}

