#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#define MAX 10000
#define ll long long
#define lli long long int
using namespace std;


int main() {
    lli n, temp, total = 0;
    cin >> n;
    lli coins[n];
    temp = pow(2, n-1);
    n = pow(2, n);
    cin >> coins[0];
    for(lli i=1; i<(n-1); i++){
        cin >> coins[i];
    }

    total += coins[0];

    for(lli i=1; i<temp; i++){
        total += max(coins[i], coins[i+1]);
        i = (2*i)+1;
    }
    cout << total << endl;

    return 0;
}


