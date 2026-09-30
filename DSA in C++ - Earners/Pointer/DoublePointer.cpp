#include<iostream>
using namespace std;

int main(){
  int n = 20;
  int* p1 = &n;
  int** p2 = &p1;
  cout<<&n<<endl;
  cout<<p1<<endl;
cout<<endl;
  cout<<&p1<<endl;
  cout<<p2<<endl;

}

/*
0x61ff08
0x61ff08

0x61ff04
0x61ff04
*/