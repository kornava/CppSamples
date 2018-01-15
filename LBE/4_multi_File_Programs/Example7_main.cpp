#include <iostream>
#include <cmath>

#include "Example42_ComplexNumber.h"
#include "Example42_ComplexNumber_Polar.h"


ComplexNumber addTwoComplexNumbers
  (const ComplexNumber& cart,
   const ComplexNumber_Polar& polar)
{
  float realPart = polar.modulus * cos(polar.argument * ComplexNumber::PI/180);
  float complexPart = polar.modulus * sin(polar.argument * ComplexNumber::PI/180);

  ComplexNumber result(realPart + cart.realPart, complexPart + cart.complexPart);
  return result;

}


int main()
{

  ComplexNumber cart(5,5);
  ComplexNumber_Polar polar(10,45);

  ComplexNumber sumOfTwoComplexNumbers = addTwoComplexNumbers(cart,polar);
  
  cout << "Real part = " << sumOfTwoComplexNumbers.getRealPart() 
       << "Complex part = " << sumOfTwoComplexNumbers.getComplexPart() << endl;
 

}


