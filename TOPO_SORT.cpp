#include <iostream>
#include<bits/stdc++.h>
#include <unordered_map>
#include<queue>
using namespace std;
unordered_map<int,list<int>>adj;
void func(unordered_map<int,list<int>>adj)
{
    queue<int>q;
    unordered_map<int,bool>visited;
    unordered_map<int,int>indegree;
    for(auto i:adj)
    visited[i.first]=false;
    for(auto i:adj)
    indegree[i.first]=0;
    for(auto i:adj)
    {
        int u=i.first;
        for(auto j:adj[u])
        indegree[j]++;
        
    }
    for(auto i:adj)
    {
        int u=i.first;
        if(indegree[u]==0)
        q.push(u);
    }
    while(q.size()!=0)
    {
        int front=q.front();
        q.pop();
        cout<<front<<" ";
        for(auto i:adj[front])
        {
            indegree[i]--;
            if(indegree[i]==0)
            q.push(i);
        }
    }
    
    
}
int main()
{
    adj[2].push_back(3);
    adj[2].push_back(1);
    adj[1].push_back(4);
    adj[3].push_back(4);
    adj[3].push_back(5);
    adj[4].push_back(5);
    //adj[5].push_back(-1);
    for(auto i:adj)
    {
      cout<<endl;
      int u=i.first;
      cout<<u<<"->";
      for(auto i:adj[u])
       cout<<" "<<i<<" ";
    }
    cout<<endl;
    func(adj);
    return 0;
}

