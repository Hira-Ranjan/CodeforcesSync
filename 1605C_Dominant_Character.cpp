#include<bits/stdc++.h>
using namespace std;
 
void solve(string &s,int n){
  for(int i=0;i+1<n;i++){
      if(s[i]=='a' && s[i+1]=='a'){
        cout << 2 << endl;
        return ;
      }
    }
  for(int i=0;i+2<n;i++){
      if(s[i]=='a' && s[i+2]=='a'){
        cout << 3 << endl;
        return;
      }
      
  }
  for(int i=0;i+3<n;i++){
    if(s[i]=='a' && s[i+3]=='a'){
      if((s[i+1]=='b' && s[i+2]=='c') || (s[i+1]=='c' && s[i+2]=='b')){
        cout << 4 << endl;
        return;
      }
    }
  }
  for(int i=0;i+6<n;i++){
    if(s[i]=='a' && s[i+3]=='a' && s[i+6]=='a'){
      if((s[i+1]=='b' && s[i+2]=='b' && s[i+4]=='c' && s[i+5]=='c') || (s[i+1]=='c' && s[i+2]=='c' && s[i+4]=='b' && s[i+5]=='b')){
        cout << 7 << endl;
        return;
      } 
    }
  }
  cout << -1 << endl;
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
 
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    string s;
    cin >> s;
    solve(s,n);
  }
return 0;
}