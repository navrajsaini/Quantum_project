/*
  By: Navraj Saini
  4110 Project
  Implement a toffoli gate on a classical computer
 */
#include <iostream>

using namespace std;

// change the second qubit based on the first
// takes in 2 bits x, and y
// applies a exclusive or on the two bits to change
// the second qubit and returns the new qubits

void tofolli (int, int, int);
void tensor (int, int, int, int[]);
void fill_U(int[][8]);

int main()
{
   int qbit1, qbit2, qbit3; // get the 3 qubits
   
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

   
   cout << "please enter the last qubit (0 or 1): ";
   cin >> qbit3;

   while (qbit3 != 0 and qbit3 != 1)
   {
      cout << "the number entered was invalid please enter 0 or 1"
	   << " for the first qubit: ";
      cin >> qbit3;
   }

   tofolli (qbit1, qbit2, qbit3);

   return 0;
}

void tofolli (int a, int b, int c)
{
   int tens[8], U[8][8], ret[8];
   tensor (a, b, c, tens);//get the tensor of the two qubits
   
   //fill the U matrix first
   fill_U(U);
   
   //mult the tensor with U

   ret[0] =
      (U[0][0] * tens[0]) +
      (U[0][1] * tens[1]) +
      (U[0][2] * tens[2]) +
      (U[0][3] * tens[3]) +
      (U[0][4] * tens[4]) +
      (U[0][5] * tens[5]) +
      (U[0][6] * tens[6]) +
      (U[0][7] * tens[7]);
   
   ret[1] =
      (U[1][0] * tens[0]) +
      (U[1][1] * tens[1]) +
      (U[1][2] * tens[2]) +
      (U[1][3] * tens[3]) +
      (U[1][4] * tens[4]) +
      (U[1][5] * tens[5]) +
      (U[1][6] * tens[6]) +
      (U[1][7] * tens[7]);

   ret[2] =
      (U[2][0] * tens[0]) +
      (U[2][1] * tens[1]) +
      (U[2][2] * tens[2]) +
      (U[2][3] * tens[3]) +
      (U[2][4] * tens[4]) +
      (U[2][5] * tens[5]) +
      (U[2][6] * tens[6]) +
      (U[2][7] * tens[7]);

   ret[3] =
      (U[3][0] * tens[0]) +
      (U[3][1] * tens[1]) +
      (U[3][2] * tens[2]) +
      (U[3][3] * tens[3]) +
      (U[3][4] * tens[4]) +
      (U[3][5] * tens[5]) +
      (U[3][6] * tens[6]) +
      (U[3][7] * tens[7]);

   ret[4] =
      (U[4][0] * tens[0]) +
      (U[4][1] * tens[1]) +
      (U[4][2] * tens[2]) +
      (U[4][3] * tens[3]) +
      (U[4][4] * tens[4]) +
      (U[4][5] * tens[5]) +
      (U[4][6] * tens[6]) +
      (U[4][7] * tens[7]);

   ret[5] =
      (U[5][0] * tens[0]) +
      (U[5][1] * tens[1]) +
      (U[5][2] * tens[2]) +
      (U[5][3] * tens[3]) +
      (U[5][4] * tens[4]) +
      (U[5][5] * tens[5]) +
      (U[5][6] * tens[6]) +
      (U[5][7] * tens[7]);

   ret[6] =
      (U[6][0] * tens[0]) +
      (U[6][1] * tens[1]) +
      (U[6][2] * tens[2]) +
      (U[6][3] * tens[3]) +
      (U[6][4] * tens[4]) +
      (U[6][5] * tens[5]) +
      (U[6][6] * tens[6]) +
      (U[6][7] * tens[7]);

   ret[7] =
      (U[7][0] * tens[0]) +
      (U[7][1] * tens[1]) +
      (U[7][2] * tens[2]) +
      (U[7][3] * tens[3]) +
      (U[7][4] * tens[4]) +
      (U[7][5] * tens[5]) +
      (U[7][6] * tens[6]) +
      (U[7][7] * tens[7]);

   ret[8] =
      (U[8][0] * tens[0]) +
      (U[8][1] * tens[1]) +
      (U[8][2] * tens[2]) +
      (U[8][3] * tens[3]) +
      (U[8][4] * tens[4]) +
      (U[8][5] * tens[5]) +
      (U[8][6] * tens[6]) +
      (U[8][7] * tens[7]);
   cout << "the tensor after the U function is: ";
   for (int i = 0; i < 8; i++)
   {
      cout << ret[i];
   }
   cout << endl;
   cout << "the tensor before the U function is: ";
   for (int i = 0; i < 8; i++)
      cout << tens[i];
   cout << endl;
   
   if (ret != tens)
   {
      if (ret[8] == 0)
      {
	 cout << "the bits are: " << a << " " << b << " 0" << endl;
      }
      else
	 cout << "the bits are: " << a << " " << b << " 1" << endl;
   }
   
   else
      cout << "there were no flips the qubits after cnot are: " << a << " " << b << " " << c << "." << endl;
}

//places the tensor of a and b in the array ret
void tensor (int a,int b, int c, int ret[8])
{
   if (a == 1 && b == 1 && c == 1)
   {
      ret[0] = 0;
      ret[1] = 0;
      ret[2] = 0;
      ret[3] = 0;
      ret[4] = 0;
      ret[5] = 0;
      ret[6] = 0;
      ret[7] = 1;
   }

   if (a == 0 && b == 0 && 0 && c == 0)
   {
      ret[0] = 1;
      ret[1] = 0;
      ret[2] = 0;
      ret[3] = 0;
      ret[4] = 0;
      ret[5] = 0;
      ret[6] = 0;
      ret[7] = 0;
   }
   if (a == 0 && b == 0 && c == 1)
   {
      ret[0] = 0;
      ret[1] = 1;
      ret[2] = 0;
      ret[3] = 0;
      ret[4] = 0;
      ret[5] = 0;
      ret[6] = 0;
      ret[7] = 0;
   }
   if (a == 0 && b == 1 && c == 0)
   {
      ret[0] = 0;
      ret[1] = 0;
      ret[2] = 1;
      ret[3] = 0;
      ret[4] = 0;
      ret[5] = 0;
      ret[6] = 0;
      ret[7] = 0;
   }
   if (a == 0 && b == 1 &&  c ==1)
   {
      ret[0] = 0;
      ret[1] = 0;
      ret[2] = 0;
      ret[3] = 1;
      ret[4] = 0;
      ret[5] = 0;
      ret[6] = 0;
      ret[7] = 0;
   }

   if (a == 1 && b == 0 &&  c == 0)
   {
      ret[0] = 0;
      ret[1] = 0;
      ret[2] = 0;
      ret[3] = 0;
      ret[4] = 1;
      ret[5] = 0;
      ret[6] = 0;
      ret[7] = 0;
   }
   if (a == 1 && b == 0 &&  c == 1)
   {
      ret[0] = 0;
      ret[1] = 0;
      ret[2] = 0;
      ret[3] = 0;
      ret[4] = 0;
      ret[5] = 1;
      ret[6] = 0;
      ret[7] = 0;
   }
   if (a == 1 && b == 1 &&  c == 0)
   {
      ret[0] = 0;
      ret[1] = 0;
      ret[2] = 0;
      ret[3] = 0;
      ret[4] = 0;
      ret[5] = 0;
      ret[6] = 1;
      ret[7] = 0;
   }
}

void fill_U(int U[][8])
{
   for (int i = 0; i < 8; i++)
   {
      for (int j = 0; j < 8; j++)
      {
	 U[i][j] = 0;
	 if ((i == 0 && j == 0) || (i == 1 && j == 1) || (i == 2 && j == 2) || (i == 3 && j == 3) ||
	     (i == 4 && j == 4) || (i == 5 && j == 5) || (i == 6 && j == 7) || (i == 7 && j == 6))
	    U[i][j] = 1;
      }
   }
}
