/*
Q20. A shopkeeper applies a discount of d% on the marked price m, and then charges a tax of
t% on the discounted price. Take m, d, and t (all doubles) as input and print the final amount
the customer pays.
*/

#include<iostream>
    using namespace std ;
       int main () {
          float n; cout<<"Real coaste : ";cin>>n;
          float m; cout<<"gst : ";cin>>m;
          float o; cout<<"discount: "<<"%";cin>>o;
          cout<<"final price : "<<(n-((n*o)/100))+(n-((n*o)/100))*m/100;
       }