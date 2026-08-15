#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
 
  int t;
  cin >> t;
  while(t--){
    int x,y;
    cin >> x >> y;
    int n1=ceil(y/2.0);
    int n2=ceil((x+y*4)/15.0);
    cout << max(n1,n2) << endl;
  }
return 0;
}