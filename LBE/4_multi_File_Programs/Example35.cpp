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
  Student student(name);
  student.print();
  cout << "Exiting the program - last line of code. Bye!"<<endl;
  return 0;
}
