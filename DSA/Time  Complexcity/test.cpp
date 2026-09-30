#include<iostream>
using namespace std;
int main (){
    int marks[] = {100,97,95,91,98,93,94};
    //output 
    cout<<marks[3]<<endl;
    //input 
    cin>>marks[3];
    for(int i=0; i<7; i++){
        cout<<marks[i]<<"\t";
    }
}