/************************************************************
 By: Navraj Saini
 4110 Project
 Implement the Deutsch algorithm on a classical computer
 ************************************************************/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   int F_0, F_1;
   cout << "What does the f(0) equal? f(0) = ";
   cin >> F_0;

   cout << "What does the f(1) equal? f(1) = ";
   cin >> F_1;
   
   if (F_0 == F_1 == 0)
   {
      cout << "constant\n";
      cout << "|0> xor (|0> - |1>)/sqrt(2)\n";
   }
   else if (F_0 == F_1 == 1)
   {
      cout << "constant\n";
      cout << "-|0> xor (|0> - |1>)/sqrt(2)\n";
   }
   else if (F_0 == 0 && F_1 == 1)
   {
      cout << "balanced\n";
      cout << "|1> xor (|0> - |1>)/sqrt(2)\n";
   }
   else if (F_0 == 1 && F_1 == 0)
   {
      cout << "balanced\n";
      cout << "-|1> xor (|0> - |1>)/sqrt(2)\n";
   }
   
   return 0;
}
