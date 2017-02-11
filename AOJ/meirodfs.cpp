#include <iostream>
#include <algorithm>
#include <queue>
#include <map>
using namespace std;
typedef pair<int,int> P;
#define INF 1000000000
/*
  s : start
  g : goal
  . : can enter
  # : can't enter
*/
/*
  x : path
 */
char maze[100][100];
int h,w;
bool visited[100][100]; //whether visited or not
int step[100][100]; // step[i][j] : minimum number of steps from start
int dx[] = {0,1,0,-1};
int dy[] = {1,0,-1,0};

void dfs(int x,int y){
  visited[y][x] = true;
  for(int i=0;i<4;++i){
    int mx = x+dx[i];
    int my = y+dy[i];
    if(mx<0 || my<0) continue; //hajiku
    if(mx>=w || my>=h) continue;
    if(visited[my][mx]) continue;
    if(maze[my][mx]=='#') continue;
    step[my][mx] = min(step[my][mx], step[y][x]+1);
    for(int i=0;i<h;++i){
      for(int j=0;j<w;++j){
        if(maze[i][j]=='#') cout << "* |";
        else if(step[i][j] < 10) cout << step[i][j] << " |";
        else if(step[i][j] == INF) cout << "**|";
        else cout << step[i][j] << "|" ;
      }
      cout << endl;
    }
    cout << endl;
    dfs(mx,my);
  }
  visited[y][x]=false;

}

int main(){
  cin >> h >> w;
  for(int i=0;i<h;++i)
    cin >> maze[i];
  int sx,sy,gx,gy;
  memset(visited,0,sizeof(visited));
  for(int i=0;i<h;++i)
    for(int j=0;j<w;++j) step[i][j] = INF;
  for(int i=0;i<h;++i){
    for(int j=0;j<w;++j){
      if(maze[i][j]=='s'){
	        sx = j;
	        sy = i;
      }
      if(maze[i][j]=='g'){
	        gx = j;
	        gy = i;
      }
    }
  }

  step[sy][sx] = 0;
  dfs(sx,sy);

  for(int i=0;i<h;++i){
    for(int j=0;j<w;++j){
      if(maze[i][j]=='#') cout << "* |";
      else if(step[i][j] < 10) cout << step[i][j] << " |";
      else cout << step[i][j] << "|" ;
    }
    cout << endl;
  }

  return 0;
}
