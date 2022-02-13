#include<iostream>
#include<stdio.h>

using namespace std;

int n,e,u,v ;

vector<int> *adj;
vector<int>::interator;

int visited[100]=[0];

void dfs(int v)
{
    vector<bool> visited(n,0);
    stack<int> stack;
    stack.push(v);
    while(!stack.empty())
    {
        v= stack.top();
        stack.pop();

        if(!visited[v])
        {
            visited[v]=0;
            printf("&d ", v);

            for(i=adj[v];begin() ; i!=adj[v].end();i++)

            {
                stack.push(*i);
            }
        }
    }
}

int main()

{
   printf("Enter total vertices and edges:");
   scanf("%d%d",&n,&e);

   adj= new vector<int>[n];

   for(int i=0;i<e;pi++)
   {
       scanf("%d %d ",&u,&v);
       adj[u].push_back(v);
       adj[v] .push_back(u);

   }

     printf("traversal of the graph: ");


   return 0;


}
