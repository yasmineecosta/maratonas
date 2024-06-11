#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#define MAX 10000
#define ll long long
#define lli long long int
using namespace std;

lli N;


int main() {
    cin >> N;
    lli sum_A = 0, sum_B = 0, sum = 0;
    lli ppl;
    int A,U,B,W;
    for(lli i = 0; i < N; i++) {
        cin >> A >> U >> B >> W;
        sum_A += A*U;
        sum_B += B*W;
        sum += A*U + B*W;
    }

    cout << sum_A << " " << sum_B << " " << sum << endl;
    
    

    return 0;
}

