#include <iostream>
#include <string>
using namespace std;



// Courtesy of http://www.codeproject.com/Articles/15351/Implementing-a-simple-smart-pointer-in-c


class RefCount
{
private:
  int count; // Reference count

public:
  void AddRef()
  {
    // Increment the reference count
    count++;
  }

  int Release()
  {
    // Decrement the reference count and
    // return the reference count.
    return --count;
  }
};


template < typename T > class SmartPointer
{
private:
  T*    pData;       // pointer
  RefCount* reference; // Reference count


public:
  SmartPointer() : pData(0), reference(0) 
  {
    // Create a new reference 
    reference = new RefCount();
    // Increment the reference count
    reference->AddRef();
  }

  SmartPointer(T* pValue) : pData(pValue), reference(0)
  {
    // Create a new reference 
    reference = new RefCount();
    // Increment the reference count
    reference->AddRef();
  }

  SmartPointer(const SmartPointer<T>& sp) : pData(sp.pData), reference(sp.reference)
  {
    // Copy constructor
    // Copy the data and reference pointer
    // and increment the reference count
    reference->AddRef();
  }

  ~SmartPointer()
  {
    int refCount = reference->Release();
    cout << "Destructor called..current reference count = " << refCount << endl;  
    // Destructor
    // Decrement the reference count
    // if reference become zero delete the data
    if(refCount == 0)
      {
	delete pData;
	delete reference;
        cout << "Okey-dokey! Ref count is now 0, delete the underlying data" << endl;
      }
  }

  T& operator* ()
  {
    return *pData;
  }

  T* operator-> ()
  {
    return pData;
  }
    
  SmartPointer<T>& operator = (const SmartPointer<T>& sp)
  {
    // Assignment operator
    if (this != &sp) // Avoid self assignment
      {
	// Decrement the old reference count
	// if reference become zero delete the old data
	if(reference->Release() == 0)
	  {
	    delete pData;
	    delete reference;
	  }

	// Copy the data and reference pointer
	// and increment the reference count
	pData = sp.pData;
	reference = sp.reference;
	reference->AddRef();
      }
    return *this;
  }
};



int main()
{
  SmartPointer<string> p(new string("Vitthal Srinivasan"));
  
  {
    SmartPointer<string> q = p;
    cout << *q << endl;

    SmartPointer<string> r;
    r = p;
    cout << *r << endl;
    // Destructor of r will be called here
    // because the variable goes out of scope..
  }
  cout << *p << endl;
  // Destructor of p will be called here 
  // and smart pointer will be deleted

  return 0;
}



