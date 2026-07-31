#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    vector<long long>v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    int cnt3=0,cnt2=0;
    for(int i=0;i<n;i++){
        if(v[i]>=3)
        cnt3++;
        if(v[i]>=2)
        cnt2++;
    }
    if(cnt3>=1 || cnt2>=2){
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
  }
return 0;
}