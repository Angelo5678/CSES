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
    int n;
    cin >> n;
    vi arr(n + 1);
    for (int i = 0; i < n; i++){
        int val;
        cin >> val;
        arr[val] = i;
    }
    int res = 1;
    for (int i = 2; i <= n; i++){
        if (arr[i] < arr[i - 1]) res++;
    }
    cout << res;
}