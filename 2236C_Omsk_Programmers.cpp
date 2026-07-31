#include<bits/stdc++.h>
using namespace std;
 
long long ans(long long m,long n,int x){
    if(m==n){
        return 1;
    }
    else {
        long long d=abs(m-n);
        if(m>n) m/=x;
        else n/=x;
        return 1+min(d,ans(m,n,x));
    }
}
 
int main(){
  int t;
  cin >> t;
  while(t--){
    long long a,b,x;
    cin >> a >> b >> x;
    long long cnt=ans(a,b,x);
    cout << cnt-1 << endl;
  }
return 0;
}