#include<iostream>
using namespace std;

int main(){
	int cnt,n,sum;
	while(cin >> n,n){
		cnt = 0;
		sum = 0;
		for(int i = 1; 2*i+1 < n+1; i++){
			sum = i;
			for(int j =i+1; sum < n ; j++){
				sum += j;
				if(sum == n) cnt++;
			}
		}
		cout << cnt << endl;
	}
}
