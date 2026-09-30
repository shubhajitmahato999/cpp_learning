// calculating profit or losses 

#include<iostream>
using namespace std;
int main(){
    float  x , y ;
    cout<<"Enter Your Making Coste : ";
    cin>>x;
    cout<<endl<<"Enter Your Selling Coaste : ";
    cin>>y;
    cout<<endl;
    if(y>=x) cout<<"Profit of "<<(float)(y-x)*100.0/x<<" %";
    else cout<<"Loss of "<<(float)(x-y)*100.00/x<<" %";
}