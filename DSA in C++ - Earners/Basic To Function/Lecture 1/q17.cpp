/*

Q17. Take two integers a and b (b ̸= 0) as input. Print the result of ceiling integer division
of a by b.

*/


#include<iostream>
#include<cmath>
    using namespace std ;
       int main () {
          double m; cout<<"a : ";cin>>m;
          double v; cout<<"b : ";cin>>v;
          cout<<"Ceilling Int : "<<ceil(m/v);
       }