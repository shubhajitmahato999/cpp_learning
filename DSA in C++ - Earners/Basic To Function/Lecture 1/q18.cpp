/*

Q18. Compute the Kinetic Energy of a moving object. Take the Mass m (in kg, double) and
Velocity v (in m/s, double) as input from the user. Be careful about integer vs. double division
when applying the fraction coefficient.

*/


#include<iostream>
    using namespace std ;
       int main () {
          double m; cout<<"mass(kg) : ";cin>>m;
          double v; cout<<"velocity(m/s) : ";cin>>v;
          cout<<"KE(Kinetic Energy) = "<<0.5*m*v*v<<" J";
       }