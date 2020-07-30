#include<iostream>
using namespace std;
int n, m, sum;
bool g[100][100];
bool vis[100][100];
int dx[5]={-1,0,1,0};
int dy[5]={0,1,0,-1}; //搜索顺序
void dfs(int x, int y){
    int xx, yy;
    for(int i=0;i<4;i++){
        xx=x+dx[i];yy=y+dy[i];
        if(xx>=0 && xx<n && yy>=0 && yy<n && g[xx][yy]!=1){
            g[xx][yy]=1;
            dfs(xx, yy);
        }
    }
    return;
}

int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>g[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(g[i][j]==0){
                dfs(i, j);
                sum++;
            }
        }
    }
    cout<<endl<<sum;
    return 0;
}