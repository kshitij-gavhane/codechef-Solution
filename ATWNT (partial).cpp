//ATWNT
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e5+5;
#define fo(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define po pop_back
#define v vector<int>
#define code_fast  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
vector<int>adj[mod];
vector<int>coun(mod,0);
void dfs(vector<int>graph[],vector<bool>&visited,int vert,int a,int &nondivided){
   visited[vert]=true;
   int si=coun[vert];
   if(si!=0&&a%si!=0){
       nondivided+=a;
       return;
   }
   else{a=si==0?a:(a/si);}
   for(auto k:graph[vert]){
       if(!visited[k]){
          dfs(graph,visited,k,a,nondivided);
       }
   }
}

int main(){
   code_fast
    int n;
    cin>>n;

    for(int i=1;i<n;i++){
        int elem;
        cin>>elem;
        adj[elem].push_back(i+1);
        coun[elem]++;
    }
    int query;
    cin>>query;
    while(query--){
        vector<bool>visited(n+1,false);
        int nondivided=0;
        int verte,w;
        cin>>verte>>w;
        dfs(adj,visited,verte,w,nondivided);
        cout<<nondivided<<"\n";
    }

    return 0;
}
