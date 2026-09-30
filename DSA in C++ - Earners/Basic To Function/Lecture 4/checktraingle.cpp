//Traingle Cheaking
#include<iostream>
using namespace std;
int main(){
    int a, b, c; cout<<"a "; cin>>a; cout<<"b "; cin>>b; cout<<"c "; cin>>c;
    if((a+b)>c && (b+c)>a && (c+a)>b){
           if(a == b && b == c && a == c){ cout<<"Equilater Traiangle";}
      else if(a != b && b != c && c != a){ cout<<" Scalene Traingle";  }
      else                              {cout<<"isosceles   Traingle";}
    }
    else{
         cout<<"coleaner point";
        }


}