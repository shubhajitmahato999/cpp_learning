#include<iostream> 
#include<vector>  // include file neo haye thake for usase of vector
using namespace std; 
int main(){
    vector<int> arr(7);
    arr.push_back(-5);
    cout<<arr.size()<<"  "<<arr.capacity()<<endl;
}
// output : 8 and 14