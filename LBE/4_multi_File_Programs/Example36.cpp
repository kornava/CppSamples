#include <iostream>
#include <string>
using namespace std;



class Student
{
private:
  string studentName;
public:
  Student(const char* name) : studentName(name)
  {
    cout << "Initialized string to: " << studentName << endl;
  }

  void print() const
  {
    cout << "StudentName:" << studentName << endl;
    // This member function is marked const, so it can NOT
    // call a non-const method
    // changeStudentName();
  }

 void print()
  {
    cout << "StudentName:" << studentName << endl;
    // This member function is NOT marked const, so it can 
    // call a non-const method
    changeStudentName();
  }

  void changeStudentName()
  {
    studentName = string("Srinivasan");
    cout << "Oh, btw, now StudentName:" << studentName << endl;
  }


};

int main()
{
  const char name[50] = "Vitthal";
  const Student studentOne(name);
  studentOne.print();
  Student& StudentTwo = studentOne;
  Student& StudentThree = const_cast<Student &>(studentOne);
  

  return 0;
}
