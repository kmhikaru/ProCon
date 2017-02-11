#include<iostream>
#include<string>
using namespace std;

string str[10];
int main(){
	string res;
	str[0]=".,!? ";
	str[1]="abc";
	str[2]="def";
	str[3]="ghi";str[4]="jkl";str[5]="mno";str[6]="pqrs";str[7]="tuv";
	str[8]="wxyz";
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		res ="";
		string inp;
		cin >> inp;
		int cnt=0,tmp=-1;
		for(int j=0;j<inp.length();j++){
			if(inp[j]=='0'){
				if(tmp!=-1){	
					int ind=cnt%(str[tmp-1].length());
					if(ind==0) ind = str[tmp-1].length()-1;
					else ind--;
					res=res+str[tmp-1][ind];
					cnt=0;
					tmp=-1;	
				}
			}else{
				if(cnt==0) tmp=int(inp[j])-int('0'); 
				cnt++;
			}		
		}
		cout << res <<endl;
	}		
}
