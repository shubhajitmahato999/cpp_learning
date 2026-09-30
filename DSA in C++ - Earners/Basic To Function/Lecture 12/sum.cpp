#include<iostream>
#include<cmath>
using namespace std;
    void f(int x, int y, int z){
      cout<<z+y+x;
      
    }
    int main(){
        int a; cout<<"a : ";cin>>a;
        int b; cout<<"b : ";cin>>b;
        int c; cout<<"c : ";cin>>c;
      f(a,b,c);
    }
/*

a : 123
b : 321
c : 111
555


*/