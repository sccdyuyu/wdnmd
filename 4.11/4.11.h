#ifndef 4_11_H_INCLUDED
#define 4_11_H_INCLUDED
#include<string>
using std::string
class message
{
public:
    message(string,string,int);
    void setStudentName(string);
    void setCourseName(string);
    void score(int)
    void totalScore(int);
    string getStudentName() const;
    string getCourseName() const;
    void displayMessage()const;
private:
    string studentName;
    string courseName;
    int score;
    int i;
    int r;
};
