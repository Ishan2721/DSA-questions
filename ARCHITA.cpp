#include<bits/stdc++.h>
using namespace std;
struct job{
    int job_id,deadline, profit;
};

struct disjoint{
    int *parent;

    disjoint(int n){
        parent=new int[n+1];
        for(int i=0;i<=n;i++){
            parent[i]=i;
        }
    }

    int find(int n){
        if(n==parent[n]){
            return n;
        }
        else{
            return parent[n]=find(parent[n]);
        }
    }

    void merge(int u,int v){
        parent[v]=u;
    }

};

bool compare(job a,job b){
    return (a.profit>b.profit);
}

int main(){
    job a[]={{1,2,100},{2,1,19},{3,2,27},{4,1,25},{5,3,15}};
    int n=sizeof(a)/sizeof(a[0]);

    sort(a,a+n,compare);

    disjoint ds(n);
    for(int i=0;i<n;i++){
        int slot=ds.find(a[i].deadline);
        if(slot>0){
            ds.merge(ds.find(slot-1),slot);
            cout<<a[i].job_id<<" ";
        }
    }

}
