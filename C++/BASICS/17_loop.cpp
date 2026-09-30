#include<iostream>
using namespace std;
int main(){

    // priinting my name 40 times 
    for(int i=1; i<=40; i++){
        cout<<"Shubhajit Mahato"<<endl;
    } 

    // printing natural numbeer upto 40
    for(int i=1; i<=40; i++){
        cout<<i<<"\n";
    }  

    //odd number
    cout<<"odd Number :"<<endl;
    for(int i=1; i<=40; i++){
            if(i%2 != 0) cout<<i<<"\t";
    }


    cout<<endl;

    //even number 
    cout<<"Even Number :"<<endl;
    for(int i=1; i<=40; i++){
            if(i%2 == 0) cout<<i<<"\t";
    }
    for(int i=1; i<100; i=i+2){
        cout<<endl<<i<<"\t";
    }
}    

  