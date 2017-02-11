#include<iostream>
using namespace std;
int p1[100];
int p2[100];

int main(){
	int s,n,m,tmp,idx,idy;
	int sum1,sum2;
	while(cin >> n >> m,n&&m){
		idx = 0;
		idy = 0;
		sum1 = 0;
		sum2 = 0;
		for(int i = 0; i < n+m ;i++){
			cin >> s;
			if(i<n){
			 	p1[i] = s;
				sum1 += s;
			}
			else {
				p2[i-n] = s; 
				sum2 += s;
			}
		}
		tmp = 300;	
		for(int i = 0; i < n;i++){
			for(int j = 0; j < m; j++){
				if(sum1 - p1[i] + p2[j] == sum2 - p2[j] + p1[i]){
					if(tmp > p1[i]+p2[j]){
						idx = i;
						idy = j;
						tmp = p1[i]+p2[j];	
					}						
				}
			}
		}
		if(tmp!=300) cout << p1[idx] << " " << p2[idy] << endl;
		else cout << -1 << endl;
	}
}
