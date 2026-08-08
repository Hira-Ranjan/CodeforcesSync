#include<bits/stdc++.h>
using namespace std;
 
bool isSorted(string &s){
    bool f=false;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1'){
            f=true;
        }
        if(f && s[i]=='0'){
            return false;
        }
    }
    return true;
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
    set<int>st;
    int cnt=0;
    vector<int>id;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            cnt++;
            id.push_back(i+1);
        }
    }
    if(isSorted(s)){
        cout << 0 << endl;
        continue;
    }
    int k=0;
    int i=0;
    int j=n-1;
    while(cnt){
        if(s[j]=='0'){
            st.insert({j+1});
            st.insert({id[i]});
            i++;
            k+=2;
        }
        j--;
        cnt--;
    }
    cout << 1 << endl;
    cout << k << " ";
    for(auto it: st){
        cout << it << " ";
    }
    cout << endl;
  }
return 0;
}