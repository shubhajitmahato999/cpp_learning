#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int t = a;
    a = b;
    b = t;
    cout<<a<<endl<<b;
}
/*

 input  : 7  8
 output : 8  7

 */