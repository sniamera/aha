#include <iostream>
using namespace std;
int main(){
    setlocale(LC_ALL, "rus");
    int k, x = 0, y = 1, z = 0, sum;
    cout << "k =";
    cin >> k;
    cout << '\n'; 
    while(x<=k) {
        x=y+z;
        z=y;
        y=x;
        sum+=x;
    }
    cout << sum;
    return(0);
}