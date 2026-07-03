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

vii movies;

signed main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int str, fns;
        cin >> str >> fns;
        movies.PB({fns, str});
    }
    sort(movies.begin(), movies.end());
    int res = 0,  last = 0;
    for (int i = 0; i < n; i++){
        if (last <= movies[i].second){
            last = movies[i].first;
            res++;
        }
    }
    cout << res;
}