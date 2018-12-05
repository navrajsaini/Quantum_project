/*
  By: Navraj Saini
  4110 Project
  Implement a CNOT gate on a classical computer
 */
#include <iostream>
#include <complex>
#include <cmath>

using namespace std;

// change the second qubit based on the first
// takes in 2 bits x, and y
// applies a exclusive or on the two bits to change
// the second qubit and returns the new qubits

//CNOT and toffoli matrixes
void cnot (int, int);
void tensor (int, int, int[]);
void fill_U (int[][4]);
int main()
{
   int qbit1, qbit2; // this way false is 0, 1 is true
   
   cout << "please enter the first qubit (0 or 1): ";
   cin >> qbit1;
   
   while (qbit1 != 0 and qbit1 != 1)
   {
      cout << "the number entered was invalid please enter 0 or 1"
	   << " for the first qubit: ";
      cin >> qbit1;
   }
   
   cout << "please enter the second qubit (0 or 1): ";
   cin >> qbit2;

   while (qbit2 != 0 and qbit2 != 1)
   {
      cout << "the number entered was invalid please enter 0 or 1"
	   << " for the first qubit: ";
      cin >> qbit2;
   }

   //apply the cnot gate to the 2 qubits
   cnot(qbit1, qbit2);
   
   return 0;
}


void cnot (int cnota, int cnotb)
{
   int tens[4], U[4][4], ret[4];
   tensor (cnota, cnotb, tens);//get the tensor of the two qubits
   
   //fill the U matrix first
   fill_U(U);

   //mult the tensor with U
   ret[0] = (U[0][0] * tens[0]) + (U[0][1] * tens[1]) + (U[0][2] * tens[2]) + (U[0][3] * tens[3]);
   ret[1] = (U[1][0] * tens[0]) + (U[1][1] * tens[1]) + (U[1][2] * tens[2]) + (U[1][3] * tens[3]);
   ret[2] = (U[2][0] * tens[0]) + (U[2][1] * tens[1]) + (U[2][2] * tens[2]) + (U[2][3] * tens[3]);
   ret[3] = (U[3][0] * tens[0]) + (U[3][1] * tens[1]) + (U[3][2] * tens[2]) + (U[3][3] * tens[3]);

   if (ret[2] == 0 and tens[2] == 1)
   {
      cout << "the bottom bit was flipped and the new qubits are: "
	   << cnota << " " << "1." << endl; 
   }
   else if (ret[2] == 1 and tens[2] == 0)
   {
      cout << "the bottom bit was flipped and the new qubits are: "
	   << cnota << " " << "0." << endl; 
   }
   else
      cout << "there were not flips the qubits after cnot are: " << cnota << " " << cnotb << "." << endl;
}

//places the tensor of a and b in the array ret
void tensor (int a,int b, int ret[4])
{
   if (a == 1 && b == 0)
   {
      ret[0] = 0;
      ret[1] = 0;
      ret[2] = 1;
      ret[3] = 0;
   }

   if (a == 0 && b == 0)
   {
      ret[0] = 1;
      ret[1] = 0;
      ret[2] = 0;
      ret[3] = 0;
   }
   if (a == 0 && b == 1)
   {
      ret[0] = 0;
      ret[1] = 1;
      ret[2] = 0;
      ret[3] = 0;
   }
   if (a == 1 && b == 1)
   {
      ret[0] = 0;
      ret[1] = 0;
      ret[2] = 0;
      ret[3] = 1;
   }
}

void fill_U(int U[][4])
{
   for (int i = 0; i < 4; i++)
   {
      for (int j = 0; j < 4; j++)
      {
	 U[i][j] = 0;
	 if ((i == 0 && j == 0) || (i == 1 && j == 1) || (i == 2 && j == 3) || (i == 3 && j == 2))
	    U[i][j] = 1;
      }
   }
}
