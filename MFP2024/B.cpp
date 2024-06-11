#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#define MAX 10000
#define ll long long
#define lli long long int
using namespace std;


int main() {
    int x1,x2,x3,x4,y1,y2,y3,y4, x, y;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    x=0; y=0;
    if(x1 != x2){
        if(x1 >= 0 && x2 >= 0){
        x = max(x1-x2, x2-x1);
        }else if(x1 >= 0 && x2 < 0){
            x = x1 - x2;
        }else if(x1 < 0 && x2 >= 0){
            x = x2 - x1;
        }else{
            x = max(-(x1 - x2), -(x2 - x1));
        }
    }else if(x1 != x3){
        if(x1 >= 0 && x3 >= 0){
        x = max(x1-x3, x3-x1);
        }else if(x1 >= 0 && x3 < 0){
            x = x1 - x3;
        }else if(x1 < 0 && x3 >= 0){
            x = x3 - x1;
        }else{
            x = max(-(x1 - x3), -(x3 - x1));
        }
    }else if(x1 != x4){
        if(x1 >= 0 && x4 >= 0){
            x = max(x1-x4, x4-x1);
        }else if(x1 >= 0 && x4 < 0){
            x = x1 - x4;
        }else if(x1 < 0 && x4 >= 0){
            x = x4 - x1;
        }else{
            x = max(-(x1 - x4), -(x4 - x1));
        }
    }
    if(y1 != y2){
        if(y1 >=0 && y2 >= 0){
            y = max(y1-y2, y2-y1);
        }else if(y1 >= 0 && y2 < 0){
            y = y1 - y2;
        }else if(y1 < 0 && y2 >= 0){
            y = y2 - y1;
        }else{
            y = max(-(y1 - y2), -(y2 - y1));
        }
    }else if(y1 != y3){
        if(y1 >=0 && y3 >= 0){
            y = max(y1-y3, y3-y1);
        }else if(y1 >= 0 && y3 < 0){
            y = y1 - y3;
        }else if(y1 < 0 && y3 >= 0){
            y = y3 - y1;
        }else{
            y = max(-(y1 - y3), -(y3 - y1));
        }
    }else if(y1 != y4){
        if(y1 >=0 && y4 >= 0){
            y = max(y1-y4, y4-y1);
        }else if(y1 >= 0 && y4 < 0){
            y = y1 - y4;
        }else if(y1 < 0 && y4 >= 0){
            y = y4 - y1;
        }else{
            y = max(-(y1 - y4), -(y4 - y1));
        }
    }

    cout << x*y << endl;

    return 0;
}


