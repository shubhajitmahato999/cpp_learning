#include<iostream>
#include<vector>
using namespace std;
void change(vector<int>& arr){
    arr[2] = 999;
}
int main (){
    vector<int> arr = {1,2,3,45,67,8,9,0};
    change(arr);
    cout<<arr[2];
}
/* 
output : 999  [(through passby refernce by using "&")]
*/