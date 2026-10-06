#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main (){
    vector<int> arr = {1,2,3,45,67,8,9,0};
    sort(arr.begin(),arr.end());
    for(int ele : arr) cout<<ele<<" ";
}

/* 
 use              : sort(nameOfVector.begiin(),nameOfVector.end())
 include headeer  : #include<algorithm>
 defaut           : assending order
 output           : 0  1  2  3  8  9  45  67 
  */