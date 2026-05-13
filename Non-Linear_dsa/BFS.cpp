// Online C++ compiler to run C++ program online
#include <iostream>
#include<list>
using namespace std;

class Graph{
  int v;
  list<int> *adj;
  public:
    Graph(int v);
    void addEdge(int v, int w);
    void BFS(int start, bool  visited[]);
    void connectedComponents();
};

//constructor
Graph::Graph(int v){
    this->v=v;
    adj = new list<int>[v];
}
//add direction edge
void Graph::addEdge(int v,int w){
    adj[v].push_back(w);
    adj[w].push_back(v);
}
//bfs
void Graph::BFS(int start , bool visited[]){
    list<int> queue;
    visited[start]= true;
    queue.push_back(start);
    while(!queue.empty()){
        int node = queue.front();
        cout<<node<<" ";
        queue.pop_front();
        
        // visited
        for(int neighbor:adj[node]){
            if(!visited[neighbor]){
                visited[neighbor]= true;
                queue.push_back(neighbor);
            }
        }
    }
}

//find connected components
void Graph::connectedComponents(){
    bool *visited= new bool [v];
    for (int i =0; i<v; i++)
    visited [i] = false;
int count =0;
for (int V = 0; V<v; V++){
    if (!visited[v]) {
        cout<<"component"<<count +1<<":";
        BFS (v,visited);
        cout<<endl;
        count++;


    }
}
cout<<"total connected components :"<< count << endl;
 delete[] visited;
}

// Driver program 
int main(){
Graph g (6);
g.addEdge(0,1);
g.addEdge(1,2);
g.addEdge(3,4);
// Vertex 5 is isolated
cout<<"connected components in the graph:\n";
g.connectedComponents();
return 0;
}
