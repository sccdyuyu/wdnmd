#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include<string>
class GradeBook
{
public:
    GradeBook(std::string,std::string);
    void setCourseName(std::string);
    void setTeacherName(std::string);
    std::string getTeacherName()const;
    std::string getCourseName()const;
    void displayMessage()const;
private:
    std::string courseName;
    std::string teacherName;
};

#endif // GRADEBOOK_H_INCLUDED
