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

  const Student & operator=(const Student &rhs)
  {
    // 1. check for self-assignment
    if (this != &rhs)
      {
        // 2.  Deallocate any memory that Student is using internally
        cout << "Freeing up memory for string " << studentName << endl;
	delete[] studentName;
        if (rhs.studentName != NULL)
	  {
          // 3.  Allocate some memory to hold the contents of rhs
          studentName = new char[50];        
          // 4.  Copy the values from rhs into this instance
	  strcpy(studentName,rhs.studentName);
	  }
      }
    // 5.  Return *this
    return *this;
  }


  void print()
  {
    cout << "StudentName:" << studentName << endl;
  }
};

int main()
{
  const char name1[50] = "Vitthal";
  Student student1(name1);
  student1.print();

  const char name2[50] = "Janani";
  Student student2(name2);
  student2.print();
  Student student3(name1);

  student1 = student2;
  cout << "After executing student1 = student2, values inside student2 are" << endl;
  student1.print();

  //int x=3,y=5,z=15;
  //(x = y) = z;
  cout << x << endl;
  cout << "Exiting the program - last line of code. Bye!"<<endl;
  return 0;
}
