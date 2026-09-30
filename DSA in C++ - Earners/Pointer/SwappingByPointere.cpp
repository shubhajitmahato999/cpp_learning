#include<iostream>
using namespace std;

void change(int* a, int* b){
   int t = *a;
   *a  =   *b;
   *b  =    t;
}
int main(){
    int a = 5 ;
    int b = 2 ;
    cout<<a<<"\t"<<b<<endl;
    change(&a,&b);
    cout<<a<<"\t"<<b;
}