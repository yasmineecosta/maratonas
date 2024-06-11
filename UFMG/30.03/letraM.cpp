#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#define MAX 10000
#define ll long long
#define lli long long int
using namespace std;

lli N, K;
ll A[MAX], C[MAX];

lli quantDist(lli N, lli K, lli sum) {
    for(int i=0; i<N; i++){
        cin >> A[i];
        sum += A[i];
    }
    for(int i=0; i<N; i++){
        cin >> C[i];
        sum += C[i];
    }
    return sum;
}

int main() {
    ll sum = 0;
    cin >> N >> K;
    sum = quantDist(N,K, sum);
    cout << K/sum << endl;
    return 0;
}

