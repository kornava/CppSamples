#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
   char * studentName;
public:
  Student(const char* name)
  {
    cout << "Inside constructor: passed in string = " << name << endl;
    studentName = new char[50];
    strcpy(studentName,name);
    cout << "Initialized string to: " << studentName << endl;
  }

  ~Student()
  {
    cout << "Freeing up memory for string " << studentName << endl;
    delete[] studentName;
  }

  void print()
  {
    cout << "StudentName:" << studentName << endl;
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
