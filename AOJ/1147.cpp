#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n,sum=0,max,min;
	while(cin >> n,n){
		int num;
		cin >> num;
		max = num;
		min = num;
		sum = num;
		for(int i=1;i<n;i++){
			cin >> num;
			max = std::max(max,num);
			min = std::min(min,num);
			sum += num;
		}
		sum =sum - min - max;
		cout << sum/(n-2) << endl;
	} 
}
