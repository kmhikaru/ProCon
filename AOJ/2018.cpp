#include<iostream>
using namespace std;
int x[100];
int main(){
	for(int i=0;i<100;i++) x[i]=0;
	int n,m,p,sum=0;
	while(cin >> n >> m >> p,n!=0){
		sum=0;
		for(int i=0;i<100;i++) x[i]=0;
		for(int i=0;i<n;i++){
		 	cin >> x[i];
			sum+=x[i];
		}
		int res;
		if(x[m-1]!=0) res=((sum)*(100-p))/x[m-1];
		 else res=0;
		cout <<res<<endl;
	}
	return 0;
}
