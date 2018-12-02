#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <cmath>
#include <complex>

using namespace std;

//accept 2 complex numbers and return their sum
complex<double> sum (complex<double>/*1st complex number*/,
		     complex<double>/*second complex number*/);

// accept 2 complex numbers and return their product
complex<double> prod (complex<double>/*1st complex number*/,
		      complex<double>/*second complex number*/);

//accept 1 complex number and return it's modulus
int mod (complex<double>);

//return the conjugate of a complex number
complex<double> conju (complex<double>);

// accept 3 vectors of imaginary numbers and the length
// the 2 vectors being added together and the third vector
// which stores the added values
void addi (complex<double>[], complex<double>[],
	   complex<double>[]);


#endif
