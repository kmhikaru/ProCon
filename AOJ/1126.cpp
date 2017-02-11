#include <iostream>
#include <algorithm>
#include <cstring>
#include <cctype>
#include <cstdlib>
using namespace std;
char tbl[80][80];
string T[80][80];

bool isnumber(char c){
  if('0'<=c && c<='9') return true;
  return false;
}

string Max(string a,string b){  
  string u="", t="";
  bool f1=false,f2=false;
  int m = a.length();
  int n = b.length();
  for(int i=0;i<m;++i){
    if(a[i]!='0') f1=true;
    if(f1) u+=a[i];
  }
  for(int i=0;i<n;++i){
    if(b[i]!='0') f2=true;
    if(f2) t+=b[i];
  }
  if(m>n) return u;
  if(n>m) return t;
  for(int i=0;i<n;++i){
    if(a[i]>b[i]) return u;
    if(b[i]>a[i]) return t;
  }
  return u;
}

int main(){
  int w,h;
  while(cin>>w>>h,w||h){
    for(int i=0;i<h;++i) for(int j=0;j<w;++j) T[i][j]="";
    for(int i=0;i<h;++i) cin>>tbl[i];
    if(isnumber(tbl[0][0])) T[0][0]+=tbl[0][0];
    for(int i=1;i<h;++i)
      if(isnumber(tbl[i][0]))
	T[i][0]=Max(T[i][0],T[i-1][0]+tbl[i][0]);
    for(int j=1;j<w;++j)
      if(isnumber(tbl[0][j]))
	T[0][j]=Max(T[0][j-1],T[0][j-1]+tbl[0][j]);

    for(int i=1;i<h;++i)
      for(int j=1;j<w;++j)
	if(isnumber(tbl[i][j])){
	  T[i][j] = Max(T[i-1][j], T[i][j-1])+tbl[i][j];
	}
    string ans = "0";
    for(int i=0;i<h;++i) for(int j=0;j<w;++j) ans = Max(ans,T[i][j]);
    cout << ans << endl;

  }
  return 0;
}
