#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={1,3,2,1,4,1,3,2,1,1,2};
    vector<int> l(v.size(),0);
    l[0]=v[0];
    for(int i=1;i<v.size();i++){
        l[i]=l[i-1]+v[i];
    }
    int k=8;
    vector<pair<int,int>> p;
    for(int i=0;i<v.size();i++){
        for(int j=i;j<v.size();j++){
            if(i==0){
                if(l[j]==k){
                    p.push_back({i,j});
                }
            }else{
                if((l[j]-l[i-1])==k){
                    p.push_back({i,j});
                }
            }
        }
    }
    for(int i=0;i<p.size();i++){
        cout<<p[i].first<<" "<<p[i].second<<endl;
    }
}
