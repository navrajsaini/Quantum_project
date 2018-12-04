/*
  By: Navraj Saini
  4110 Project
  Implement a CNOT gate on a classical computer
 */
#include <iostream>

using namespace std;

// change the second qubit based on the first
// takes in 2 bits x, and y
// applies a exclusive or on the two bits to change
// the second qubit and returns the new qubits

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

   cout << "After the controlled the qubits are: ";

   //apply the cnot gate to the 2 qubits
   cout << qbit1 << " " << (!qbit1 != !qbit2) << endl;
   
   return 0;
}
