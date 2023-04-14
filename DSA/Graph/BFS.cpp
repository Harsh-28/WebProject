#include <bits/stdc++.h>
using namespace std;

class BFS{
    int v;
    vector<list<int>> adj;
public:
    BFS(int v){
        this -> v = v;
        adj.resize(v);
    }

    void addEdge(int v, int w){
        adj[v].push_back(w);
    }

    void Bfstraversal(int s){
    vector<bool> visited;
    visited.resize(v,false);

    queue<int> q;
    visited[s] = true;
    q.push(s);

    while(!q.empty()){
        s = q.front();
        cout << s << " ";
        q.pop();

        for (auto adjacent : adj[s]) {
            if (!visited[adjacent]) {
                visited[adjacent] = true;
                q.push(adjacent);
            }
        }

    }

    }
};




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    BFS g(1);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 3);
    g.addEdge(2, 4);
    g.addEdge(3, 5);
    // g.addEdge();
    g.Bfstraversal(1);

    return 0;
}