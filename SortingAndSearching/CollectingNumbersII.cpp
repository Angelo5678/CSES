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

signed main() {
    int n, m;
    cin >> n >> m;

    vector<int> vals(n + 1);
    vector<int> pos(n + 1);

    for (int i = 1; i <= n; i++) {
        cin >> vals[i];
        pos[vals[i]] = i;
    }
    int res = 1;
    for (int i = 1; i < n; i++) {
        if (pos[i + 1] < pos[i]) {
            res++;
        }
    }
    while (m > 0){
        int i, j;
        cin >> i >> j;
        int v1 = vals[i];
        int v2 = vals[j];
        set<pair<int, int>> afected;
        if (v1 - 1 >= 1) afected.insert({v1 - 1, v1});
        if (v1 + 1 <= n) afected.insert({v1, v1 + 1});
        if (v2 - 1 >= 1) afected.insert({v2 - 1, v2});
        if (v2 + 1 <= n) afected.insert({v2, v2 + 1});
        for (auto p : afected) {
            if (pos[p.first] > pos[p.second]) {
                res--;
            }
        }
        swap(pos[v1], pos[v2]);
        swap(vals[i], vals[j]);
        for (auto p : afected) {
            if (pos[p.first] > pos[p.second]) {
                res++;
            }
        }
        
        cout << res << '\n';
        m--;
    }

    return 0;
}