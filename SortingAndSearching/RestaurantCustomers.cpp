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

vii customers;

struct cmpSecond {
    bool operator()(const ii& a, ii& b){
        return a.second > b.second;
    }
};

signed main(){
    int n;
    cin >> n;
    priority_queue<ii, vii, cmpSecond> pq;
    for (int i = 0; i < n; i++){
        int arr, dep;
        cin >> arr >> dep;
        customers.PB({arr, dep});
    }
    sort(customers.begin(), customers.end());
    int i = 1, mx = 1;
    pq.push(customers[0]);
    while (i < n){
        int mn = pq.top().second;
        if (mn < customers[i].first)
            pq.pop();
        pq.push(customers[i]);
        mx = max(mx, sz(pq));
        i++;
    }
    cout << mx;
}