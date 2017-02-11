#include <iostream>
#include <algorithm>
#include <queue>
#include <map>
using namespace std;
typedef pair<int,int> P;
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

void bfs(){ //breadth first search
  for(int i=0;i<h;++i)
    for(int j=0;j<w;++j)
      visited[i][j] = false;
  int sx,sy,gx,gy;
  for(int i=0;i<h;++i)
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
  queue<P> Q;
  Q.push(P(sx,sy));
  while(!Q.empty()){
    P cur = Q.front(); Q.pop();
    visited[cur.second][cur.first] = true;
    for(int i=0;i<4;++i){
      int mx = cur.first + dx[i];
      int my = cur.second + dy[i];
      if(mx<0 || my<0) continue; //hajiku
      if(mx>=w || my>=h) continue;
      if(visited[my][mx]) continue; //hajiku(visited)
      if(maze[my][mx]=='#') continue;
      step[my][mx] = step[cur.second][cur.first]+1;
      Q.push(P(mx,my));
    }
  }

  for(int i=0;i<h;++i){
    for(int j=0;j<w;++j){
      if(maze[i][j]=='#') cout << "* ";
      else cout << step[i][j] << " ";
    }
    cout << endl;
  }
}

int main(){
  cin >> h >> w;
  for(int i=0;i<h;++i)
    cin >> maze[i];
  bfs();
  return 0;
}
