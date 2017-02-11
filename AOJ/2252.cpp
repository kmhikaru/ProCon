#include<iostream>
using namespace std;

string lft = "qwertasdfgzxcvb";
bool judge(char s){
	for(int i = 0;i < lft.length() ; i++)
		if(lft[i] == s) return false;
	return true;	
}
int main(){
	string inp;
	while(cin >> inp,inp!="#"){
		int cnt = 0;
		bool hand;//left = false,right = true;
		for(int i = 0; i < inp.length() ; i++){
			bool tmp = judge(inp[i]);
			if(hand != tmp &&i!=0)cnt++;
			hand = tmp;
		}		
		cout << cnt << endl;
	}
	return 0;
}

