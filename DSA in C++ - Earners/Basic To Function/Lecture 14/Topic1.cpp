#include<iostream>
using namespace std;
// Global Varriable 
int x=7; // its is global varriable 
void fun(){
    x = 23;
}
int main(){
    cout<<x<<endl; 
    // output = 7
    fun();   
    // fun function er kach gelo sekhane giye x ke niye tate 23 assient kare dilo
    cout<<x<<endl;
    // output = 23
    // reason : fun changes its value 23 from 7
    
}

/*

output

7
23


*/