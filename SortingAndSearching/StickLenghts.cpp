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
    int l = 0, r = n - 1, sum = 0;
    while (l < r){
        int left = (arr[l + 1] - arr[l]) * (l + 1);
        int right = (arr[r] - arr[r - 1]) * (n - r);
        if (l + 1 <= n - r){
            sum += left;
            l++;
        } else {
            sum += right;
            r--;
        }   
    }
    cout << sum;
    
}