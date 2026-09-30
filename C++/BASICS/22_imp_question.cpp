#include<iostream>
using namespace std;
// calculating higest factore
int main(){
    int n,r,sum=0; 
    cout<<"n : "; 
    cin>>n;
    while(n!=0){
        r=n%10;
        sum+=r;
        n/=10;
    }
 cout<<sum;
  
}