#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#define MAX 10000
#define ll long long
#define lli long long int
using namespace std;

int ladoA(int m, int n){
    return pow(m,2) - pow(n,2);
}

int ladoB(int m, int n){
    return 2*m*n;
}

int ladoC(int m, int n){
    return pow(m,2) + pow(n,2);
}

int main() {
    int m,n;
    cin >> m >> n;
    int a, b, c;
    a = ladoA(m,n);
    b = ladoB(m,n);
    c = ladoC(m,n);
    cout << a << " " << b << " " << c << endl;
    return 0;
}

