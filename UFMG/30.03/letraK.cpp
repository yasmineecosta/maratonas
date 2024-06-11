#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#define MAX 10000
#define ll long long
#define lli long long int
using namespace std;

using namespace std;
 
int sudokuNum(int k[9][9], int index, bool ehLin) {
  bool found[9 + 1] = {false};
  for (int i = 0; i < 9; i++) {
    int num = ehLin ? k[index][i] : k[i][index];
    if (num != 0)
      found[num] = true;
  }
 
  for (int i = 1; i <= 9; i++) {
    if (!found[i])
      return i;
  }
  return -1;
}
 
void verificaSud(int k[9][9]) {
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      if (k[i][j] == 0) {
        int miss = sudokuNum(k, i, true);
        if (miss == -1) miss = sudokuNum(k, i, false);
        k[i][j] = miss;
      }
    }
  }
}
 
void printaSud(int k[9][9]) {
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      cout << k[i][j] << " ";
    }
    cout << endl;
  }
}
 
int main() {
 
  int kar[9][9];
 
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      char c;
      cin >> c;
      if (c == '#')
        kar[i][j] = 0;
      else{
        c = c - '0';
        kar[i][j] = c;
      }
    }
  }
  verificaSud(kar);
  printaSud(kar);
}