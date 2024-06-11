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
    vector<lli> vet;
    for (lli i = 1; i <= N; i++) {
        if(N%i == 0){
            vet.push_back(i);
        }
    }
    
    if(vet.size()%2 == 0){
        cout << 'Y' << endl;
    } else {
        cout << 'N' << endl;
    }

    return 0;
}

