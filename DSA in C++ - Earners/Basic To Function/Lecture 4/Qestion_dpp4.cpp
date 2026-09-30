#include<iostream>
using namespace std;
int main(){
  cout<<"Qestion 11"<<endl;
  /*
  Q11. Take two integers as input from the user. Determine and print 
  whether their multiplication product is positive,
 negative, or zero without calculating the absolute numeric valuation
value if possible.
*/
int a ; cout<<"a : "; cin>>a;
int b; cout<<"b : "; cin>>b;
if(a*b < 0) cout<<"Neg";
else if(a*b >0 ) cout<<"Pos";
else cout<<"Zero";
cout<<endl;

/*
Q12. Take a positive integer input from the user and check if it is divisible by both 3 and
5. Do not use the logical AND (&&) operator inside your conditional test statement.
*/
int m; cout<<"m : ";cin>>m;
// if(m%15 == 0) cout<<"Divisiable";
// else cout<<"Not Divisiable";
m%15 == 0 ? cout<<"Diviable": cout<<"Not Diviable";

}