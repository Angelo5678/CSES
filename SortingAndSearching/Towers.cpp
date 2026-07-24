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

multiset<int> blocks;

signed main(){
    int n, val, res = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> val;
        auto it =  blocks.upper_bound(val);
        if (it == blocks.end()) res++;
        else blocks.erase(it);
        blocks.insert(val);
    }
    cout << res << '\n';
}   