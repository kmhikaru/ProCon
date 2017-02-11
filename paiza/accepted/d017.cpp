#include<iostream>
using namespace std;
int inp[5];
int main(){
	int max,min;
	for(int i = 0; i < 5 ; i++){
		cin >> inp[i];
		if(i==0) {
			min = inp[i];
			max = inp[i];
		}else{
			if(min > inp[i]) min = inp[i];
			else if(max < inp[i]) max = inp[i];
		}
	}
	cout << max << endl;
	cout << min << endl;
	return 0;
}
