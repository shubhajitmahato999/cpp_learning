#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main (){
    vector<int> arr = {1,2,3,45,67,8,9,0};
    reverse(arr.begin()+1,arr.end()-1);  
    for(int ele : arr) cout<<ele<<" ";
}

/* 
 use              : reverse(nameOfVector.begiin(),nameOfVector.end())
 include headeer  : #include<algorithm>
 defaut           : uno reverse order 
 input            : 1  2  3  45  67  8  9  0 
 output           : 1  9  8  67  45  3  2  0 
 conclution       : +1 with begin means reverse but except 1st from begin
                  : -1 with end means revrse but except last one from end
 ex output        : remains unchannge last and 1st element of this arr
  */