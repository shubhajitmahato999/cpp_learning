/*

Q16. Take an integer n as input. Print the minimum non-negative integer that must be added
to n to make it exactly divisible by 7. Use the modulus operator.

*/

#include<iostream>
    using namespace std ;
       int main () {
   // remember int use for module operator
          int m; cout<<"Enter Number : ";cin>>m;
          cout<<"Min Int : "<<7-(m%7);
       }