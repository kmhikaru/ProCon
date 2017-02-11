#include<iostream>
using namespace std;
int cards[50];
int tmpcards[50];
int main(){
	int p,c,n,r;
	while(cin >> n >> r,n && r){
		//init cards	
		for(int i=0;i<n;i++){
			cards[i] = n-i;
		}
		
		//input
		for(int i=0;i<r;i++){
			cin >> p >> c;
			
			//shuffle
			for(int i=0;i<p-1;i++){
				tmpcards[i] = cards[i];
			}
			for(int i=p-1;i<c+p-1;i++){
				cards[i-p+1] = cards[i];
			}
			for(int i=c;i<c+p-1;i++){
				cards[i] = tmpcards[i-c];
			}
		}
	cout << cards[0] << endl;
	}
}
