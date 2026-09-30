/* Co-leaner testing*/
#include<iostream>
using namespace std;
int main(){
    int x1, y1; cout<<"x1 "; cin>>x1; cout<<"y1 "; cin>>y1;
    int x2, y2; cout<<"x2 "; cin>>x2; cout<<"y2 "; cin>>y2;
    int x3, y3; cout<<"x3 "; cin>>x3; cout<<"y3 "; cin>>y3;
    ((y2 - y1)*(x3 -x2) == (x2 - x1)*(y3 - y2)) ? cout<<"co-eaner" : cout<<" not";

}