#include<iostream>
using namespace std;
int main (){
int arr1[5];      // guarbage value
int arr2[5] = {}; // default zero 
for(int i=0; i<5; i++){
    cout<<arr1[i]<<" ";
}
cout<<endl;
for(int i=0; i<5; i++){
    cout<<arr2[i]<<"\t";
}
}

/*
output : 
235616723   -2       6422280    1997573149   4201072  (gurbage value)
0            0       0          0            0        (default zero = 0)
*/