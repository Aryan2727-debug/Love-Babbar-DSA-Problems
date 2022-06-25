#include <iostream>
#include <bits/stdc++.h>
#define N 3
using namespace std;

int adj_mat[N][N];
int visited[]={0};

void read_graph(){
    int option;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(i==j){
                adj_mat[i][j]=0;
                continue;
            }
            if(i!=j){
                adj_mat[i][j]=1;
            }else{
                adj_mat[i][j]=0;
            }
        }
    }
}
int build_graph(){
    int deg;
    cout<<"The Adjacency Matrix is"<<endl;
    read_graph();
    for(int i=0;i<N;i++){
        cout<<i<<endl;
    }
    for(int i=0;i<N;i++){
        cout<<i<<endl;
        for(int j=0;j<N;j++){
            cout<<adj_mat[i][j]<<endl;
            if(adj_mat[i][j]) deg++;
        }
    }
    cout<<"The number of Edges in the Graph are = "<<deg/2<<endl;
    return 1;
}
void DFS(int i){
    cout<<i<<endl;
    visited[i]=1;
    for(int j=0;j<N;j++){
        if(!visited[j] && adj_mat[i][j]==1){
            DFS(j);
        }
    }
}
int main()
{
    int reply;
    build_graph();
    cout<<"After performing Depth First Traversal on the Graph"<<endl;
    DFS(0);
    return 0;
}