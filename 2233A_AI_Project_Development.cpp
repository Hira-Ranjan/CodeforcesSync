#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while(t--){
    int n,x,y,z;
    cin >> n >> x >> y >> z;
    int f=ceil((float)n/(float)(x+y));
    // cout << f << endl;
    int s=z+ceil((float)(n-(x*z))/(float)(x+10*y));
    // cout << s << endl;
    cout << min(f,s) << endl;
  }
return 0;
}