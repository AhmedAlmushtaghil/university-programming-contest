#include <iostream>

using namespace std;

int main()
{
   int number; 

   cin >> number; 

   if (number % 11 == 0 && number % 3 == 0)
   {
       cout << 33;
   }
   else if (number % 11 == 0)
   {
       cout << 11;
   }
   else if (number % 3 == 0)
   {
       cout << 3;
   }
   else
   {
       cout << 1;
   }

    return 0;
}