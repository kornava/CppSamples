#include <iostream>
using namespace std;
class ComplexNumber_Polar;

class ComplexNumber
{
private:
  float realPart;
  float complexPart;
  static int numObjectsCreated;
public:
  const static double PI;

  ComplexNumber();

  ComplexNumber(double c, double r);

  ComplexNumber(const ComplexNumber& rhs);

  ~ComplexNumber();

  float getRealPart() const;

  void  setRealPart(float r);


  float getComplexPart() const;
  void  setComplexPart(float c);

friend ComplexNumber addTwoComplexNumbers
  (const ComplexNumber& cart,
   const ComplexNumber_Polar& polar);

};
