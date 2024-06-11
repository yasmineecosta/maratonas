#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#define MAX 500
#define ll long long
#define lli long long int
using namespace std;

int T, N;
char mat[MAX][MAX], vec_l[MAX], vec_c[MAX];

void setMatrix(int N){
  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      cin >> mat[i][j];
    }
  }
}

bool isLatinSqr(int N){
    bool sqrLat_l = true, sqrLat_c = true;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            vec_l[j] = mat[i][j];
            vec_c[j] = mat[j][i];
        }
        sort(vec_l, vec_l + N);
        sort(vec_c, vec_c + N);
    }
    for(int i = 0; i < N; i++){
            if(vec_l[i] == vec_l[i+1]){
                sqrLat_l = false;
            }
            if(vec_c[i] == vec_c[i+1]){
                sqrLat_c = false;
            }
    }
    return sqrLat_l && sqrLat_c;
}

int main() {
  cin >> T;
  for(int i = 0; i < T; i++){
    cin >> N;
    setMatrix(N);
    if(isLatinSqr(N)) cout << "sim" << endl;
    else cout << "nao" << endl;
    
  }
  return 0;
}

