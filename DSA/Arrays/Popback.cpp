#include<iostream> 
#include<vector>  // include file neo haye thake for usase of vector
using namespace std;
// pop_back last element ke remove kare  
int main(){
    vector<int> arr(5,11);
    arr.pop_back();
    arr.push_back(100);
    int n = arr.size();
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"\t";
    }
}
// output : 11      11      11      11      100