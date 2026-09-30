#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n =5;
    for(int i=1; i<=5; i++){  // row banalam jekhane 5 ta row thakbe
        for(int j=1; j<=5; j++){  // ete 5 ta jaigar mato collumb banano halo
        if(j == (n/2 +1) || i == (n/2 + 1) )cout<<"* ";  // jehetu star tite row er 3 or col 3 er madhye ache tai if condition e take rekhe dilam
        else cout<<"  ";  //baki faka jaiga gulote dilam space
        }
        cout<<endl; // next row te jaor janya
    }
    
}