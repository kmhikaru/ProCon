#include<iostream>
#include<map>
#define OPEN "Opened by "
#define CLOSE "Closed by "
#define UNKNOWN "Unknown "
using namespace std;

map<string,int> t;

int main(){
	int n;
	string s;
	cin >> n;
	bool door = false; //false => closed
	for(int i=0;i<n;i++){
		cin >> s;
		t[s]++;
	}
	int m;
	cin >>m;
	for(int k=0;k<m;k++){
		cin >> s;
		if(t.count(s)==1){
			if(door){
				cout << CLOSE << s <<endl;
				door = false;
			}else{
				cout << OPEN << s << endl;
				door = true;
			}
		}else cout << UNKNOWN << s << endl;
	}
	return 0;
}
