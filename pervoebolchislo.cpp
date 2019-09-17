#include <iostream>
using namespace std;
int main(){
    setlocale(LC_ALL, "rus");
    int k, x = 0, y = 1, z = 0;
    cout << "k =";
    cin >> k;
    cout << '\n'; 
    while(x<=k) {
        x=y+z;
        z=y;
        y=x;
    }
    cout << x;
    return(0);
}
    
