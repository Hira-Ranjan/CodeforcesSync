#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
 
  int t;
  cin >> t;
  while(t--){
    long long a,b,c;
    cin >> a >> b >> c;
    if(a>=b && a>=c){
        a=min(a,b+c);
        long long m=min(b,c);
        cout << a-m << endl;
    }
    else if(b>=a && b>=c){
        b=min(b,a+c);
        long long m=min(a,c);
        cout << b-m << endl;
    }
    else {
        c=min(c,b+a);
        long long m=min(b,a);
        cout << c-m << endl;
    }
  }
return 0;
}