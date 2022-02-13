#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    #include<bits/stdc++.h>

using namespace std;
vector<vector<int> >graph;
stack<int> Stack;
bool visited[100]={false};
int n,e;


void topologicalDFS (int v)

{
    visited [v]=true;
    for(vector<int>::iterator i=graph[v].begin();i!=graph[v].end();i++)
    {
        if (visited[*i]==false)
            topologicalDFS(*i);
    }
    Stack.push(v);
}
void topologicalSort()
{
    for(int i=0; i<n; i++)
        if(visited[i]==false)
            topologicalDFS(i);
}
void print(){
   while(!Stack.empty()) {
      cout << Stack.top() << " ";
      Stack.pop();
   }
}
int main()
{
    int u,v;
    printf("Enter total vertex and edge: ");
    scanf("%d %d",&n,&e);
    graph.resize(n);
    for(int i=0;i<e;i++)
    {
        scanf("%d %d",&u,&v);
        graph[u].push_back(v);
    }
    topologicalSort ();

    return 0;
}
    return 0;
}
