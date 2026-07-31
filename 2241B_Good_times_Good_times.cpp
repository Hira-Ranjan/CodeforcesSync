#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while(t--){
    long long x;
    cin >> x;
    int cnt=0;
    while(x){
        x/=10;
        cnt++;
    }
    if(cnt==1) cout << 11 << endl;
    else if(cnt==2) cout << 101 << endl;
     else if(cnt==3) cout << 1001 << endl;
      else if(cnt==4) cout << 10001 << endl;
       else if(cnt==5) cout << 100001 << endl;
        else if(cnt==6) cout << 1000001 << endl;
         else if(cnt==7) cout << 10000001 << endl;
          else if(cnt==8) cout << 100000001 << endl;
           else if(cnt==9) cout << 1000000001 << endl;
            else if(cnt==10) cout << 10000000001 << endl;
  }
return 0;
}