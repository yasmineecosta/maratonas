#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#define MAX 10000
#define ll long long
#define lli long long int
using namespace std;


int main() {
    lli N, p, time = 0;
    cin >> N >> p;
    lli runners[N];
    for(int i=0; i<N; i++){
        cin >> runners[i];
    }
    lli temp = runners[0];
    for(int i=1; i<N; i++){
        if(runners[i] < temp){
            temp = runners[i];
        }
    }
    lli a[N] = runners.sorted();
    while(p!=0){

    }
    
    return 0;
}


