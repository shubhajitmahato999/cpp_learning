#include<iostream> 
#include<vector>
using namespace std;
int main(){
    vector<int> arr(5,18);
    /* _________________________________________________________
        | vector : dynamiic array
        |  <int> : data type 
        |   arr  : name of array
        |   (5)  : defaults / initial elements number of array 
        |   (18) : defaults value for the elements of arr
        _________________________________________________________
    */
   for(int i=0; i<5; i++){
    cout<<arr[i]<<"\t";
   }
}
/* 

output : at arr(5) 
0       0       0       0       0

output : at arr(5,18)
18      18      18      18      18

*/

