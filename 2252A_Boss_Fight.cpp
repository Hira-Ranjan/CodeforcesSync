#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    map<int,vector<int>>mp;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        mp[x].push_back(i);
    }
    int sum=0;
    for(auto it: mp){
        int v=it.first;
        int sz=it.second.size();
        if(sz<=n-sz){
            sum+=sz*v;
        }
        else{
            int r=min(n-sz+2,sz);
            sum+=r*v;
        }
    }
    cout << sum << endl;
  }
return 0;
}