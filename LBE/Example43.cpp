#include <iostream>
#include <string>
using namespace std;


//class School;

class Student
{
private:
  string studentName;
public:
  Student(const char* name) : studentName(name)
  {
    cout << "Initialized string to: " << studentName << endl;
  }  
  friend class School;
   
};

class School
{
private:
  string schoolName;
public:
  School(const char* name) : schoolName(name)
  {
    cout << "Initialized string to: " << schoolName << endl;
  }  

  void admitStudent(const Student& s)
  {
    cout << "Admitting student " << s.studentName << endl;
  }

  void expelStudent(const Student& s)
  {
    cout << "Expelling student " << s.studentName << endl;
  }


};

int main()
{
  const char studentName[50] = "Vitthal";
  Student student(studentName);

  const char schoolName[50] = "St Johns";
  School school(schoolName);

  school.admitStudent(student);
  school.expelStudent(student);

  return 0;
}
