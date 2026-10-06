#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main (){
    vector<int> arr = {1,2,3,45,67,8,9,0};
    reverse(arr.begin(),arr.end());
    for(int ele : arr) cout<<ele<<" ";
}

/* 
 use              : reverse(nameOfVector.begiin(),nameOfVector.end())
 include headeer  : #include<algorithm>
 defaut           : uno reverse order 
 input            : 1  2  3  45  67  8  9  0 
 output           : 0  9  8  67  45  3  2  1 
  */