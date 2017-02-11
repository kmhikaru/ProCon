#include<iostream>
#define MAX 2000000
using namespace std;

bool prime[MAX];//if prime then true


int main(){
	prime[0] = false;
	prime[1] = false;
	for(int i=2;i < MAX ;i++){
	    prime[i] = true;
	}
	for(int i=2;i<MAX;i++){
	    for(int j=2;i*j < MAX;j++){
		if(prime[i]) prime[i*j]=false;
	    }
	}
	int a,d,n;
	while(cin >> a >> d >> n,a && d && n){
		int cnt=0;
		for(int i=1;a + (i-1)*d < MAX ;i++){
			if(prime[a+(i-1)*d]) cnt++;
			if(cnt == n){
				cout << a+(i-1)*d << endl;
				break;
			}
		}
	}
}

