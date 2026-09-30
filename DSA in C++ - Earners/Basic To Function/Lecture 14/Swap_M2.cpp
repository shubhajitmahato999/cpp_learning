#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    a = a + b; // a ekhan halo a+b
    b = a - b; // b = a means now a+b er theke pure b removed , means b te ekhan eseche a
    a = a - b; // a(a+b) theke b(a) means a removed , now a =b;
        cout<<a<<endl<<b;
}