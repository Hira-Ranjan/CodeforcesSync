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
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    int d=0;
    for(int i=0;i<n-1;i++){
        if(v[i]>v[i+1]) d++;
    }
    if(v[n-1]>v[0]) d++; 
    if(d>1)  cout << "NO" << endl;
    else cout << "YES" << endl;
}
return 0;
}