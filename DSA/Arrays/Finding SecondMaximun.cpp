#include<iostream>
#include<climits>
#include<cmath>
// Finding the second maximum element in an array
using namespace std;
int main (){
int  arr[] = {4,2,6,8,1,9,5};
//Hints : no element in array is 7
int mn = arr[0];
for(int i=0; i<7; i++){
    if(arr[i]>mn){
        mn = arr[i];
    }
}
int mns = arr[0];
for(int i=0; i<7; i++){
    if(arr[i]>mns and arr[i] != mn){
        mns = arr[i];
    }
}
cout<<mns;

}
// output : 8