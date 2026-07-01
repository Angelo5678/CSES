#include <bits/stdc++.h>
using namespace std;

#define int long long
#define sz(v) (int)v.size()
#define PB push_back
#define PP pop_back

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef priority_queue <ii, vector<ii>, greater<ii>> pq_min;

signed main(){
    int n, mx;
    cin >> n >> mx;
    vi w(n);
    for (int i = 0; i < n; i++)
        cin >> w[i];
    
    sort(w.begin(), w.end());
    int l = 0, r = n - 1, res = 0;
    while (l <= r){
        if (w[l] + w[r] <= mx){
            l++;
        }
        res++;
        r--;
    }
    cout << res;
}