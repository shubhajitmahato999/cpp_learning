#include<iostream>
using namespace std;

int f(int x){
   int f=1;
    for(int i=1; i<=x; i++){
        f*=i;
    
    }
    return f;
}

int g(int a, int b){
    int c = f(a)/(f(b)*f(a-b));
    return c;
}
int main(){
    int n; cout<<"n : "; cin>>n;
    for(int i=0; i<=n; i++){
          for(int j=0; j<=(n-i+1); j++){
            cout<<"  ";
        }

        for(int j=0; j<=i; j++){
            cout<<g(i,j)<<"   ";
        }
        cout<<endl;
    }
}