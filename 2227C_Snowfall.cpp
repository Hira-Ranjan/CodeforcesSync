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
    vector<long long>two,three,six,other,ans;
    for(int i=0;i<n;i++){
        if(v[i]%6==0)
        six.push_back(v[i]);
        else if(v[i]%2==0)
        two.push_back(v[i]);
        else if(v[i]%3==0)
        three.push_back(v[i]);
        else 
        other.push_back(v[i]);
    }
    for(auto it: six){
        ans.push_back(it);
    }
    for(auto it: two){
        ans.push_back(it);
    }
    for(auto it: other){
        ans.push_back(it);
    }
    for(auto it: three){
        ans.push_back(it);
    }
    for(auto it: ans){
        cout << it << " ";
    }
    cout << endl;
  }
return 0;
}