#include<iostream>
using namespace std;
int dt[1000][4];

int main(){
	int n;
	cin >> n;
	int sp,fp;
	int Mp=1,mp=100000;
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < 4 ; j++){ 
			cin >> dt[i][j];	
			if(j == 2){
				if(Mp < dt[i][j]) Mp = dt[i][j];
			}else if(j == 3){
				if(mp > dt[i][j]) mp = dt[i][j];
			}
		}
	}
	sp = dt[0][0];
	fp = dt[n-1][1];
	cout << sp << " " << fp << " " << Mp << " " << mp;
}
