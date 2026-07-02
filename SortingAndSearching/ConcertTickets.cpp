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
    int n, m;
    multiset<int> tickets;
    
    if (!(cin >> n >> m)) return 0; 
    
    for (int i = 0; i < n; i++){
        int val; cin >> val;
        tickets.insert(val);
    }
    for (int i = 0; i < m; i++){
        int val; cin >> val;
        auto it = tickets.upper_bound(val);
        if (it == tickets.begin()) 
            cout << -1 << '\n';
        else {
            it--;
            cout << *it << '\n';
            tickets.erase(it);
        }
    }   
}