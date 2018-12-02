/*
 */
#include "functions.h"

using namespace std;

int main()
{
   cout << "hello world" << endl;

   
   complex<double> a (5, 3);
   complex<double> b (4, 7);
   complex<double> modi (3, -4);
   complex<double> conj (3, 5);
   complex<double> sumi;
   complex<double> prodc;
   complex<double> con;
   
   complex<double> v [4] =
      {
	 complex<double>(5, -3),
	 complex<double>(4, 2),
	 complex<double>(5, -2),
	 complex<double>(7, 8)
      };
   
   complex<double> w [4] =
      {
	 complex<double>(16, 3),
	 complex<double>(0, -7),
	 complex<double>(6, 0),
	 complex<double>(3, 2)
      };
   complex<double> add[4];
   
   addi (v, w, add);
   
   int modu = mod (modi);
   con = conju (conj);
   sumi = sum(a, b);
   prodc = prod(a, b);
   
   cout << "sum is: " << sumi << " prod is: " << prodc << endl;
   cout << "modulus of " << modi << " is: " << modu << endl;
   cout << "the conj of " << conj << " is: " << con << endl;
   cout << "the addition of the two matrecies is: ";
   
   for (int i = 0; i < 4; i++)
      cout << add[i] << " ";
   cout << endl;
   
   return 0;
}

