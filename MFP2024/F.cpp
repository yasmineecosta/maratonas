#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#define MAX 10000
#define ll long long
#define lli long long int
using namespace std;


int main() {
    int prog, volei, fut, corr, total, modalidade;
    cin >> total;
    prog = 8; volei = 4; fut = 2; corr = 1; modalidade = 0;
    while(total>0){
        if(total >= prog){
            total -= prog;
            modalidade++;
        }else if(total >= volei){
            total -= volei;
            modalidade++;
        }else if(total >= fut){
            total -= fut;
            modalidade++;
        }else if(total >= corr){
            total -= corr;
            modalidade++;
        }
    }
    cout << modalidade << endl;
    return 0;
}


