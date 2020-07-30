/*
5
0 0 1 0 0
0 1 1 1 0
1 1 0 1 0
1 0 1 0 1
2 1 1 1 1

*/


#include<iostream>
using namespace std;
bool vis[100][100];
int G[100][100];
int dx[5]={-1,0,1,0};
int dy[5]={0,1,0,-1}; //搜索顺序
bool f=0;
int n;
int a, b, c, d;
void dfs(int x, int y){
    if(G[x][y]==2){
        f=true;
        return;
    }
    // 向四个方向搜索
    int xx, yy;
    for(int i=0;i<4;i++){
        xx=x+dx[i];yy=y+dy[i]; //要搜的位置
        //判断当前点是否可用
        //要在地图以内并且没有山
        if(xx>=0 && xx<n && yy>=0 && yy<n && 
           G[xx][yy]!=1 && vis[xx][yy]==1){
            vis[xx][yy]=1; 
            // 标记搜过了
            // 为了防止接下来搜的时候回过来搜本次点
            dfs(xx, yy);
            // 当前点状态重新还原
            vis[xx][yy]=0;
            // 为了新的路径可走
            // 顺序搜索本次不会重复
        }
    }
    return;
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>G[i][j];
        }
    }
    cin>>a>>b>>c>>d;
    a-=1;
    b-=1;
    c-=1;
    d-=1;
    G[c][d] = 2;
    //搜索
    if(G[c][d]==1){     //门口被封死？
        cout<<"NO";
        return 0;
    }
    if(G[a][b]==2){     //唐僧在门口？
        cout<<"YES";
        return 0;
    }
    vis[a][b]=1;    //已经搜过了
    dfs(c, d);      //深搜核心
    if(f){          //是否找到
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}