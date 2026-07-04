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
    int sum = arr[0], mx = arr[0];
    for (int i = 1; i < n; i++){
        mx = max(mx, sum);
        if (sum + arr[i] > arr[i]){
            sum += arr[i];
        }
        else {
            sum = arr[i];
        }
    }
    mx = max(sum, mx);
    cout << mx;
}