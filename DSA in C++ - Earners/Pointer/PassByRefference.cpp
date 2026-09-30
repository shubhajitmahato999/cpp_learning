#include<iostream>
using namespace std;

void change(int* ptr){
    *ptr = 20;
}
int main(){
    int a = 5 ;
    change(&a);
    cout<<a;
}
// output : 20