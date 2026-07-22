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
    int n, mx = 0;
    cin >> n;
    vi arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        mx = max(mx, arr[i]);
    }
    map<int, int> pos;
    int res = 0, l = 0;
    for (int r = 0; r < n; r++){
        if (pos.count(arr[r]))
            l = max(l, pos[arr[r]] + 1);
        pos[arr[r]] = r;
        res = max(res, r - l + 1);
    }
    cout << res << '\n';
}