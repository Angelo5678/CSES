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

vi vals;

signed main(){
    int n, v;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> v;
        vals.PB(v);
    }
    sort(vals.begin(), vals.end());
    int nums = 1, last = vals[0];
    for (int i = 1; i < n; i++){
        if (vals[i] != last) 
            nums++;
        last = vals[i];
    }
    cout << nums;
}   