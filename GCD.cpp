#include <iostream>
using namespace std;
int gcd(int m, int n){
    int rem = 0;
    do{
        rem = m % n;
        if(rem == 0) break;
        m = n;
        n = rem;
    }
    while(rem != 0);
    return n;
}
int main(){
    int m, n;
    cout << "Enter the larger number:   ";
    cin >> m;
    cout << "Enter smaller number:   ";
    cin >> n;
    if(n > m){
        cout << "Invalid input!\n";
        exit(0);
    }
    cout << "gcd is " << gcd(m,n) << "\n";
}
