#include <iostream>
using namespace std;
int main(){
    setlocale(LC_ALL, "rus");
    int n = 1000, s = 0, a = 1, b = 1;
    cout << '\n'; 
    for (int i = 1; i <= n-2; i++){
        s = b;
        b = a + s;
        a = s;
    }
    cout << b <<" ";
    system("pause");
    return(0);
}