#include <iostream>
using namespace std;
// my confusion
int main() {
    int a = 0, b = 0;

    if (a++ && ++b) {
        cout << "Condition standard check true" << endl;
    }

    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}/* ekhane if cond use  kare kaj karano hache 
a++ theke jeta if e jache ta halo 0 then increases its value 
++b eitar janya hache je if neor age increament hache tai valu of b becomes to 1 
thats why when and && cond applicable it doest happends
*/
