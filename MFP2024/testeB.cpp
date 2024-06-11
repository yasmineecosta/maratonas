#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#define MAX 10000
#define ll long long
#define lli long long int
using namespace std;


int main() {
    int bit, seg, quant;
    quant = 0;
    for(int i=0; i<7;i++){
        cin >> bit;
        if(bit == 1){
            quant++;
        }
    }
    cin >> seg;
    if(quant%2 == 0){
        cout << 'S' << endl;
    }else if(quant%2 != 0 || seg == 1){
        cout << "N?" << endl;
    }
    return 0;
}
