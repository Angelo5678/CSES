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

vi arr;

signed main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int val;
        cin >> val;
        arr.PB(val);
    }
    sort(arr.begin(), arr.end());
    int mx = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] > mx + 1){
            break;
        } else {
            mx += arr[i];
        }
    }
    cout << mx + 1;
}