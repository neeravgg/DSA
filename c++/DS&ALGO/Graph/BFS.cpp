#include <iostream>
#include <list>
using namespace std;

class graph
{
public:
    list<int> *adj;
    int v;
    graph(int v)
    {
        this->v = v;
        adj = new list<int>[v];
    }
    void addEdge(int s, int d);
    void bfs(int s);
};

void graph::addEdge(int s, int d)
{
    adj[s].push_back(d);
    adj[d].push_back(s);
}
void graph::bfs(int s)
{
    bool *visit = new bool[v];
    for(int i =0; i<v; i++){
        visit[i]=false;
    }

    list<int> queue;

    visit[s] = true;
    queue.push_back(s);

    list<int>::iterator itr;

while(!queue.empty()){

    int item = queue.front();
    cout<<item;
    queue.pop_front();

    for(itr = adj[item].begin(); itr!= adj[item].end(); itr++){
        if(!visit[*itr]){
            visit[*itr] = true;
            queue.push_back(*itr);
        }
    }
}
}
int main()
{
   graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    g.bfs(3);

    return 0;
}