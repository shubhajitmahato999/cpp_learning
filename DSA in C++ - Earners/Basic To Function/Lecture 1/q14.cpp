/*

Q14. Take two integers as input. If exactly one of them is odd, print "One is odd". If
both are odd, print "Both are odd". If neither of them is odd, print "None is odd". Use
conditional constructs effectively.

*/

#include<iostream>
using namespace std;
int main(){
    int a; cout<<"a : "; cin>>a;
    int b; cout<<"b : "; cin>>b;
    if(a%2 == 0 && b%2 == 0) cout<<" Both Even";
    else if(a%2 != 0 && b%2 != 0) cout<<" Both Odd";
    else cout<<" One Odd One Even";
}