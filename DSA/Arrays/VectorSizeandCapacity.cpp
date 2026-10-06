#include<iostream> 
#include<vector>  // include file neo haye thake for usase of vector
using namespace std; 
int main(){
    vector<int> arr;
    arr.push_back(5);
    cout<<arr.size()<<"  "<<arr.capacity()<<endl;
    arr.push_back(13);
    cout<<arr.size()<<"  "<<arr.capacity()<<endl;
    arr.push_back(53);
    cout<<arr.size()<<"  "<<arr.capacity()<<endl;
    arr.push_back(54);
    cout<<arr.size()<<"  "<<arr.capacity()<<endl;
    arr.push_back(57);
    cout<<arr.size()<<"  "<<arr.capacity()<<endl;
    arr.pop_back();
    cout<<arr.size()<<"  "<<arr.capacity()<<endl;
    arr.pop_back();
    cout<<arr.size()<<"  "<<arr.capacity()<<endl;
    arr.push_back(5);
    cout<<arr.size()<<"  "<<arr.capacity()<<endl;

}
/* output : S stands for size && C stands for Capacity
S  C
1  1
2  2
3  4
4  4
5  8
4  8
3  8
4  8
*/