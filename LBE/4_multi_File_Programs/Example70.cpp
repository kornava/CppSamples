#include <iostream>
#include <vector>
#include <map>
using namespace std;

#include <iostream>
#include <algorithm>                   //for find()
using namespace std;





double in_to_cm(double in)
{
  return (in * 2.54);
}

int main() {

  vector<string> names;
  names.push_back("Janani");
  names.push_back("Ahmad");
  names.push_back("Swetha");
  names.push_back("Navdeep");
  names.push_back("Vitthal");
  names.push_back("Ahmad");

  string someString = "Vitthal";
  cout << "Initial value: " << someString << endl;
  transform(someString.begin(), someString.end(), someString.begin(), ::toupper);
  cout << "Final value: " << someString << endl;


  vector<string>::iterator findIt = find(names.begin(), names.end(), "Vitthal");
  cout << "Find algorithm" << endl << endl;
  if(findIt == names.end()) 
    cout << "Not found!!" << endl;
  else 
     cout << "First object with value Vitthal found at offset "
       << (findIt-names.begin()) << endl;



  int n = count(names.begin(), names.end(), "Ahmad");  
  cout << "The name Ahmad appears " << n << " times in the vector." << endl;

  int arr[] = { 11, 22, 33, 44, 55, 66, 77, 88 };
  int* ptr;
  
  
  //cout << "First object with value 33 found at offset "
  //     << (ptr-arr) << endl;




  cout << "Sort algorithm" << endl << endl;
  sort(names.begin(), names.end());
  for(vector<string>::const_iterator iter=names.begin(); 
      iter!=names.end(); 
      iter++)
    cout << *iter << endl;


  cout << "Search algorithm" << endl << endl;
  int source[] =  { 11, 44, 33, 11, 22, 33, 11, 22, 44 };
  int pattern[] = { 11, 22, 33 };

  
  ptr = search(source, source+9, pattern, pattern+3);

  if(ptr == source+9)                //if past-the-end
    cout << "No match found\n";
  else
    cout << "Match at " << (ptr - source) << endl;
  

  cout << "Merge algorithm" << endl << endl;
  int src1[] = { 2, 3, 4, 6, 8 };
  int src2[] = { 1, 3, 5 };
  int dest[8];

  merge(src1, src1+5, src2, src2+3, dest);

for(int j=0; j<8; j++)
    cout << dest[j] << endl;
  cout << endl;

  cout << "Transform algorithm" << endl << endl;

    double inches[] = { 3.5, 6.2, 1.0, 12.75, 4.33 };
    double centi[5];
    double in_to_cm(double);   //prototype
    //transform into array centi[]
    transform(inches, inches+5, centi, in_to_cm);

for(int j=0; j<8; j++)
    cout << centi[j] << endl;
  cout << endl;

return 0;
  
  


}
