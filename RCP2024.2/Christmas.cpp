#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <cmath>
#include <math.h>
#define MAX 10000
#define ll long long
#define lli long long int
using namespace std;

lli R, L;

double prob(lli R, lli L) {
    double circunf = 2* M_PI *R;
    if(L >= R*2) return 0;
    else{
        double probb = 1.0 - double(2*L)/circunf;
        return probb;
    }
}

int main() {
    double probab = 0;
    cin >> R >> L;
    probab = prob(R,L);
    cout << fixed << setprecision(10) << prob(R,L) << endl;
    return 0;
}

