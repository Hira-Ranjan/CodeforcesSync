#include<bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
 
  int t;
  cin >> t;
  while(t--){
    int n,q;
    cin >> n >> q;
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        cin >> b[i];
    }
    vector<pair<int,int>>v(q);
    for(int i=0;i<q;i++){
        cin >> v[i].first;
        cin >> v[i].second;
    }
    int m=0;
    for(int i=n-1;i>=0;i--){
        m=max(m,max(a[i],b[i]));
        a[i]=m;
    }
    vector<long long>pre(n+1);
    pre[0]=0;
    for(int i=1;i<=n;i++){
        pre[i]=pre[i-1]+a[i-1];
    }
    // for(int i=0;i<pre.size();i++){
    //     cout << pre[i] << " ";
    // }
    // cout << endl;
    for(int i=0;i<q;i++){
        cout << pre[v[i].second]-pre[v[i].first-1] << " ";
    }
    cout << endl;
  }
return 0;
}