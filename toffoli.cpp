#include <iostream>

using namespace std;

// change the second qubit based on the first
// takes in 2 bits x, and y
// applies a exclusive or on the two bits to change
// the second qubit and returns the new qubits

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

   cout << "After the toffoli the qubits are: ";

   //apply the cnot gate to the 2 qubits
   cout << qbit1 << " " << qbit2 << " " << ( !(qbit1 &&qbit2) != !qbit3 ) << endl;
   
   return 0;
}
