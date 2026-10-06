#include<iostream>
#include<vector>
using namespace std;
int main (){
    vector<int> arr = {10,20,30,40,50,60,70,80,90};
    int n = arr.size()-1;
    for(int i=0;i<=(n)/2; i++){
        int t = arr[i];
        arr[i]  = arr[n-i];
        arr[n-i]  = t;

    }
    for(int ele : arr){
        cout<<ele<<"\t";
    }
}
/*
input  : 10      20      30      40      50      60      70      80      90
output : 90      80      70      60      50      40      30      20      10
*/