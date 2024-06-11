#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#define MAX 10000
#define ll long long
#define lli long long int
using namespace std;


int main() {
    int n, team1, team2;
    string s;
    cin >> n;
    team1 = 0; team2 = 0;
    cin.ignore();
    for(int i=0; i<n; i++){
        int temp;
        getline(cin, s);
        if(s[5] == '1'){
            temp = s[8] - '0';
            team1 += temp;
        }else{
            temp = s[8] - '0';
            team2 += temp;
        }
    }
    cout << team1 << " x " << team2 << endl;

    return 0;
}


