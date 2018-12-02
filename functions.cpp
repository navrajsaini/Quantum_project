/*******************************************
By: Navraj Saini (Raj)
the functions to be used for the programs
*******************************************/
#include "functions.h"

//accept 2 complex numbers and return their sum
complex<double> sum (complex<double> u/*1st complex number*/,
		     complex<double> v/*second complex number*/)
{
   complex<double> sumi/*the sum of them*/;
   //sum
   sumi.real(u.real() + v.real());//the real number
   
   sumi.imag(u.imag() + v.imag());//the imaginary number
   
   //the final number of the sum will be:
   //real + imag i
   return sumi;
}
// return the product of 2 complex values
complex<double> prod (complex<double> u/*1st complex number*/,
		      complex<double> v/*second complex number*/)
{
   complex<double> prodc;
   //product:
   prodc.real(( u.real() * v.real() ) - ( u.imag() * v.imag() ));//the real number
   prodc.imag(( u.real() * v.imag() ) + ( u.imag() * v.real() ));//the imaginary number
   //the final number will be:
   //real + imag i
   return prodc;
}

//accept 1 complex number and return it's modulus
int mod (complex<double> u)
{
   int modu = sqrt ( (real(u)*real(u)) + (imag(u) * imag(u)) );
   return modu;
}

//return the conjugate of a complex number
complex<double> conju (complex<double> u)
{
   return conj(u);
}

// accept two matrecies and the length of the matrecies
// calculate the addition and place it into the third matrix
void addi (complex<double> u[], complex<double> v[],
	   complex<double> ad[])
{
   int len = 4;
   for (int i = 0; i < len; i++)
   {
      ad[i].real ( u[i].real() + v[i].real());
      ad[i].imag ( u[i].imag () + v[i].imag ( ));
   }
}

