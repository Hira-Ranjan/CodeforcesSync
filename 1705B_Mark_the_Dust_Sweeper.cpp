#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
 
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    vector<long long>v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    bool f=false;
    long long ans=0;
    for(int i=0;i<n-1;i++){
        if(v[i]!=0){
            f=true;
            ans+=v[i];
        }
        else if(v[i]==0 && f==true){
            ans++;
        }
    }
    cout << ans << endl;
  }
return 0;
}