#include<bits/stdc++.h>
using namespace std;

class Graph
{
    int V;
    list<int>*adj;
    void DFSUtil(int v,bool visited[])
    {
        visited[v]=true;
        cout<<v<<" ";
        for(auto it=adj[v].begin();it!=adj[v].end();it++)
        {
            if(!visited[*it])
                DFSUtil(*it,visited);
        }

    }

public:
    Graph(int V)
    {
        this->V=V;
        adj=new list<int>[V];
    }

    void addEdge(int v,int w)
    {
        adj[v].push_back(w);
    }

    void DFS(int v)
    {
        bool *visited=new bool[V];
        for(int i=0;i<V;i++)
            visited[i]=false;
        DFSUtil(v,visited);
    }
    
};
int main()
{
    Graph g(4); 
    g.addEdge(0, 1); 
    g.addEdge(0, 2); 
    g.addEdge(1, 2); 
    g.addEdge(2, 0); 
    g.addEdge(2, 3); 
    g.addEdge(3, 3); 
  
    cout << "Following is Depth First Traversal"
            " (starting from vertex 2) \n"; 
    g.DFS(2); 
  
    return 0; 

}



