#include<iostream>
using namespace std;
bool space[25][25];
int main(){
	int n;
	while(cin >> n,n){
		for(int i=0;i<25;i++)
			for(int j=0;j<25;j++){
				space[i][j]=false;
			}
		int cnt =0;
		for(int i=0;i<n;i++) {
			int x,y;
			cin >> x >> y;
			space[x][y] = true;
		}
		int m;
		cin >> m;
		int rx=10,ry=10; 
		for(int i=0;i<m;i++){
			char d;
			cin >> d;
			int scl;
			cin >> scl;
			int gx=0,gy=0;
			switch (d){
				case 'N':gy=1;gx=0;break;
				case 'W':gx=-1;gy=0;break;
				case 'S':gy=-1;gx=0;break;
				case 'E':gx=1;gy=0;break;
			}
			for(int j=0;j<scl;j++){
				rx =rx+gx;ry=ry+gy;
				if(space[rx][ry]){
				 	cnt++;
					space[rx][ry]=false;
				}
			} 
		}

		if(cnt==n) cout << "Yes" <<endl;
		else cout << "No" << endl;
	}
}

