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
    int n, m, k;
    cin >> n >> m >> k;
    vi a(n), ap(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    for (int i = 0; i < m; i++)
        cin >> ap[i];
    
    sort(a.begin(), a.end());
    sort(ap.begin(), ap.end());

    int i = 0, j = 0, res = 0; 
    while (i < n && j < m){
        if (abs(a[i] - ap[j]) <= k){
            i++; j++; res++;
        } else if (a[i] > ap[j]) 
            j++;
        else 
            i++;
    }
    cout << res;
}