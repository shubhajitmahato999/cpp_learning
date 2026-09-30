#include<iostream>
using namespace std;

int main(){
    int n; cout<<"n : "; cin>>n;
    int p=0,r,N;
    while(n!=0){
        r=n%10;
        N=p+r;
        p=N*10;
        n/=10;
    }
    cout<<N;
    //factorial print with their sing value , while loop e fact jakhan bere jache take print kare deoa , done
}