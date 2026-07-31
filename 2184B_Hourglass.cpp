#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while(t--){
    long long s,k,m;
    cin >> s >> k >> m;
    long long up=s,down=0;
    long long flip=0;
    if(s<k){
        cout << s-min(m%k,s) << endl;
    }
    else {
        if((m/k)%2==0){
            cout << s-(m%k) << endl;
        }
        else {
            cout << k-(m%k) << endl;
        }
    }
  }
return 0;
}