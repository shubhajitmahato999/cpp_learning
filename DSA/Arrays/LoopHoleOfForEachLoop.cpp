#include<iostream>
#include<vector>
using namespace std;
int main (){
    vector<int> arr = {1,2,3,45,67,8,9,0};
    for(int i=1; i<arr.size(); i++){
        if(arr[i]%2 != 0) {
            arr[i]*=arr[i];
        }
        else{
            arr[i]*=2;
        }


    }
    for(int ele : arr) cout<<ele<<" ";
}