/*Leap Year*/
#include<iostream>
using namespace std;
    int main(){
      int year; cout<<"year : "; cin>>year;
      ((year % 400 == 0) || ((year % 4) == 0) &&((year % 100) != 0)) ? cout<<"Yes" : cout<<"No";
    }