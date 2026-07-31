#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        a[i]=b[i]=x;
    }
    sort(b.begin(),b.end());
    vector<int>ans;
    bool f=false;
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            f=true;
            ans.push_back(a[i]);
        }
    }
    if(f){
        cout << "YES" << endl;
        cout << ans.size() << endl;
        for(int i=0;i<ans.size();i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    else {
        cout << "NO" << endl;
    }
  }
return 0;
}