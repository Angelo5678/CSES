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

vii nums;

signed main(){
    int n, x;
    cin >> n >> x;
    for (int i = 0; i < n; i++){
        int val;
        cin >> val;
        nums.PB({val, i + 1});
    }
    sort(nums.begin(), nums.end());
    int i = 0, j = n - 1;
    bool found = false;
    while (i < n && j >= 0){
        if (i == j) continue;
        if ((nums[i].first + nums[j].first) == x){
            cout << nums[i].second << ' ' << nums[j].second;
            found = true;
            break;
        } else if (nums[i].first + nums[j].first > x) 
            j--;
        else i++;
    }
    if (!found)
        cout << "IMPOSSIBLE";
}