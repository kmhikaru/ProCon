#include<iostream>
using namespace std;

int main(){
	int n;
	bool foot[2];
	while(cin >> n,n){
		foot[0]=false;foot[1]=false;
		string s;
		int cnt=0;
		bool before=false;
		for(int i=0;i<n;i++){
			cin >> s;
			if(s=="lu"){
				foot[0]=true;
			}else if(s=="ld"){
				foot[0]=false;
			}else if(s=="ru"){
				foot[1]=true;
			}else {
				foot[1]=false;
			}
			if(foot[0]==foot[1]&&foot[0]!=before){
				cnt++; 
			 	before=foot[0];
			}
		}
		cout << cnt <<endl;
	}
}

