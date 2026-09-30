#include<iostream>
using namespace std;
int main(){
    int x ;
    cout<<"Enter a Integer Number : ";
    cin>>x;
    float y = (float)x;
    // thats called type casting , means in way x integer converted to float by help of casting float y then assiment
    cout<<y/3<<endl;  

    //ACS value of character
    char ch ;
    cout<<"Enter an Alphabte : ";
    cin>>ch;
    cout<<"ACS value : "<<(int)ch;

    //  some interesting things
    cout<<endl<<5/2<<endl;  // 2
    cout<<5.0/2<<endl;      // 2.5
    cout<<5.0/2.0<<endl;    // 2.5
    cout<<5/2.0<<endl;      // 2.5
}