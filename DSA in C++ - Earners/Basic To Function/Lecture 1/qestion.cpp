#include<iostream>
using namespace std;
int main(){
    /*
    
    Q13. Given the number of sides n of a simple polygon and the sum of all its interior angles
S, write a program to check if the user has provided valid dimensional specifications

*/

int n; cout<<"No of Side : "; cin>>n;
int degree; cout<<"Put interior Degree : "; cin>>degree;
degree == (n-2)*180 ? cout<<"Valid": cout<<"Not Vallide";
}