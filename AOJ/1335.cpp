#include<iostream>
using namespace std;

int memo[20][10][155];
int cnt = 0;
int func(int n,int k,int s){
	cnt++;
	if(memo[n-1][k-1][s-1] != -1){
		return memo[n-1][k-1][s-1];
	}
	int res = 0;
	for(int i = 1;i < n ; i++){
		if(s-i-1>0)res += func(i,k-1,s-i-1);
	}
	memo[n-1][k-1][s-1] = res;
	return res;
}	
int main(){
	for(int i = 0;i < 20 ; i++ )
		for(int j = 0; j < 10 ; j++)
			for(int k = 0; k < 155 ; k++){
				if(j == 0){
					if(i < k) memo[i][j][k] = 0;
					else memo[i][j][k] = 1;
				}else if(i == 0 || k == 0){
					memo[i][j][k] = 0;
				}else if(i < j || (i+1)*(j+1) < k+1) {
					memo[i][j][k] = 0;
				}else memo[i][j][k] = -1;
			}
 	int n,k,s;
	while(cin >> n >> k >> s,n||k||s)
		cout << func(n,k,s) << endl;
	cout << cnt <<endl;
	return 0;
}	

