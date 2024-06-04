#include <iostream>
#include <vector>
using namespace std;

//0.5 Detik/Test Case dan Max 32MB

class Vertex{
public:
    int num;

    Vertex(int num){
        this->num = num;
    }
};

class Graph{
public:
    vector<bool> visited;
    vector<Vertex> vertices;
    vector<vector<int>> adjList;
    int kekuatan = 0;
    int tenaga = 0;

    Graph(){

    }

    void addVertex(int num){
        vertices.push_back(Vertex(num));
        adjList.resize(vertices.size());
    }

    void addEdge(int v, int w){
            adjList[v].push_back(w);
    }

    void printGraph(){
        for (int v = 0; v < vertices.size(); ++v){
            cout << "Adjacency list of vertex " << v << "(" << vertices[v].num << "):\n head ";
            for(auto x : adjList[v]){
                cout << "->" << x;
            }
            cout << endl;
        }
    }

    void DFT(int vertex){
        kekuatan++;
        visited[vertex] = true;
        vector<int> adj = adjList[vertex];

        cout << vertex << " ";

        vector<int> :: iterator i;
        for(i = adj.begin() ; i != adj.end(); i++){
            tenaga += (kekuatan * vertices[*i].num);
            if(!visited[*i]){
                DFT(*i); // recursive
            }
        }
    }
};

int main(){
    Graph g;
    int N, K;
    cin >> N >> K;

    int num;
    for (int i = 0; i < N; i++){
        cin >> num;
        g.addVertex(num);
    }

    int v, w;
    for (int i = 0; i < K; i++){
        cin >> v >> w;
        g.addEdge((v - 1), (w - 1));
    }

    g.DFT(0);

    cout << g.tenaga << endl;
    return 0;
}
