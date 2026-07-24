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

set<int> lights;
multiset<int> intervals;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x, n;
    cin >> x >> n;
    lights.insert(0); lights.insert(x);
    intervals.insert(x);
    for (int i = 0; i < n; i++){
        int v; cin >> v;
        auto it = lights.upper_bound(v);
        int mx = *it;
        int mn = *prev(it);
        lights.insert(v);
        intervals.erase(intervals.find(mx - mn));
        intervals.insert(mx - v);
        intervals.insert(v - mn);
        cout << *intervals.rbegin() << ' ';
    }
}   