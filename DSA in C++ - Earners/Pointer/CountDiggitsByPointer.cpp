#include<iostream>
using namespace std;
// void use karte habe karan ete return ba print karar option nei
void f(long long n , int* ptr){
    int count = (n == 0) ? 1 : 0 ;
    while(n != 0){
        n/= 10;
        count++;
    }
    *ptr = count;
}
int main(){
    long long n ; cin>>n;
    int count = 0;
    f(n, &count);
    cout<<count;
}