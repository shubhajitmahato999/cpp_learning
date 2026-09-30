#include<iostream>
using namespace std;
// permutation and combination
int f(int x){
   int f=1;
    for(int i=1; i<=x; i++){
        f*=i;
    
    }
    return f;
}
int main(){
    int n; cout<<"n : "; cin>>n;
    int r; cout<<"r : "; cin>>r;
    cout<<f(n)/(f(r)*f(n-r));
}