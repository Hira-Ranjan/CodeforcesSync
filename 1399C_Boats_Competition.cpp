#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int ans=0;
    for(int k=2;k<=100;k++){
        int i=0,j=n-1,cnt=0;
        while(i<j){
            if(v[i]+v[j]==k){
                i++,j--,cnt++;
            }
            else if(v[i]+v[j]<k) i++;
            else j--;
        }
        if(cnt>ans){
            ans=cnt;
        }
    }
    cout << ans << endl;
  }
return 0;
}