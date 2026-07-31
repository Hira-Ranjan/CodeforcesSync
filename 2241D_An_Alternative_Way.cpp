#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    vector<long long>a(n),b(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        cin >> b[i];
    }
    if(a[0]>b[0]){
        cout << "NO" << endl;
        continue;
    }
    bool f=true;
    long long sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i]-b[i];
        if(sum>0){
            f=false;
            break;
        }
    }
    if(f){
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
  }
return 0;
}