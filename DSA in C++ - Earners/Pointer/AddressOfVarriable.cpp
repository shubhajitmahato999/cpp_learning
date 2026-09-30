#include<iostream>
using namespace std;
int main(){
    int a = 5 ;
    int* ptr = &a;
    cout<<ptr<<endl<<a<<endl<<&a<<endl<<&ptr<<endl;
}
/*

0x61ff0c : output by ptr is equal output to &a
5        : a
0x61ff0c : &a
0x61ff08 : address of ptr , denoted by '&ptr'

*/