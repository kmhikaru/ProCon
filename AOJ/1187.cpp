#include<iostream>
#include <algorithm>
using namespace std;

int res[51][2];	
int pen[51][10];
int ranking[51]; //rank[i] :i th team id
int main(){
	int M,T,P,R;
	int m,t,p,j;
	while(cin>>M>>T>>P>>R,M||T||P||R){
	        for(int i = 0; i< 51 ;i++){
		 	for(int j = 0; j < 2 ; j++){
                	        res[i][j] = 0;
               		}
			for(int j = 0;j < 10 ; j++){
				pen[i][j] = 0;
			}
       		}
		for(int i=0;i<T+1;++i) ranking[i] = i;
		for(int i = 0; i < R;i++){
			cin >> m >> t >> p >> j;
			if(j==0){
				res[t][0]++;
				res[t][1]+=m+pen[t][p-1]*20;
			}else pen[t][p-1]++;
		}
		for(int i=1;i<T;++i){
		  for(int j=i+1;j<T+1;++j){
		    	if(res[i][0] < res[j][0]){
		       		swap(res[i][0],res[j][0]);
				swap(res[i][1],res[j][1]);
		      		swap(ranking[i],ranking[j]);
		    	}
		    	else if(res[i][0]==res[j][0] && res[i][1] > res[j][1]){
		      		swap(res[i][0],res[j][0]);
				swap(res[i][1],res[j][1]);
		      		swap(ranking[i],ranking[j]);		      
		    	}else if(res[i][0]==res[j][0] && res[i][1] == res[j][1] && ranking[i] <ranking[j]){
				swap(res[i][0],res[j][0]);
                                swap(res[i][1],res[j][1]);
                                swap(ranking[i],ranking[j]);
			}
		  }
		}
		for(int i=1;i<T+1;++i){
		  cout << ranking[i];
		  if(res[i][0]==res[i+1][0] && res[i][1]==res[i+1][1] &&i!=T)  cout << "=";
		  else if(i!=T) cout << ",";
		}
		cout << endl;
	}
}
