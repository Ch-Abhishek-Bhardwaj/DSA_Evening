#include<iostream>
using namespace std;

// int main(){
//     int n,m;
//     cin>>n>>m;

//     int adj[n+1][m+1];
//     for(int i=0;i<m;i++){
//         int u,v;
//         cin>>u>>v;
//         adj[u][v]=1; // in weight graph we will store the weight
//         adj[v][u]=1;
//     }


//     return 0;
// }

//

int main(){
    int n,m;
    cin>>n>>m;

    vector<int> adj[n+1];

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);///in weight graph we will store the weight
        adj[v].push_back(u);
    }

    return 0;
}