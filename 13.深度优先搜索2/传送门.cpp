/*
4 4
1 1 4 4
1 6 6 6
15 7 6 6
15 3 6 6
15 15 1 1
*/

#include<iostream>
using namespace std;
bool vis[100][100];
int G[100][100];
int dx[5]={-1,0,1,0};
int dy[5]={0,1,0,-1};
int n, m;
int a, b, c, d;
int minn=2147483646;
void dfs(int x, int y, int s){
    if(x==c&&y==d){
        minn=min(s, minn);
        return;
    }
    int xx, yy;
    for(int i=0;i<4;i++){
        xx=x+dx[i];yy=y+dy[i];
        if(xx>=0 && xx<n && yy>=0 && yy<m && vis[xx][yy]==0){
            vis[xx][yy]=1; 
            dfs(xx, yy, s+G[xx][yy]);
            vis[xx][yy]=0;
        }
    }
    return;
}
int main(){
    cin>>n>>m;
    cin>>a>>b>>c>>d;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>G[i][j];
        }
    }
    a-=1;b-=1;c-=1;d-=1;
    //搜索
    vis[a][b]=1;
    dfs(a, b, 0);      //深搜核心
    cout<<"\n"<<minn+G[a][b]<<"\n";
    return 0;
}