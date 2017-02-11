#include<iostream>
using namespace std;
int player[50];
int main(){
	int n,p;
	int winner;
	while(cin >> n >> p,n&&p){
		int stones = p;
		for(int i=0;i<n;i++) player[i]=0;
		bool boo = true;
		while(boo){
			for(int i=0;i<n;i++){
				if(stones == 1&&player[i] == p-1) {
					winner = i;
					boo = false;
				}
				else if(stones==0) {
					stones=player[i];
					player[i]=0;
				}else{
					stones--;
					player[i]++;
				}					
			}
		}
		cout << winner << endl; 
	}
	return 0;	
}
