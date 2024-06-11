#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define f first
#define s second
#define dbg(x) cout << "x = " << x << endl;
#define ll long long
#define lli long long int
#define ld  long double
#define MAXN 100000
#define INTMAX 10000000000
#define pii pair<int, int> 
#define piii pair<int, pair<int,int>>
#define ALL(x) x.begin(), x.end()

using namespace std;

vector<bool> visit(4, false);
int a, b, c;

int main(){
    optimize;
    cin >> a >> b >> c;
    
    visit[a] = true;
    visit[b] = true;
    visit[c] = true;

    for(int i=1; i<=3; i++){
        if(!visit[i]) cout << i << endl;
    }
    
    return 0;
}