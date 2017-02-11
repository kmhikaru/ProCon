#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int tbl[250001];
// tbl[i]1(is prime)  
int main(){
  for(int i=2;i<=250000;++i) tbl[i]=1;
  for(int i=2;i<=250000;++i) if(tbl[i]==1) for(int j=2;i*j<=250000;++j) tbl[i*j]=0;
  int n;
  while(scanf("%d",&n),n!=0){
    int cnt = 0;
    for(int i=n+1;i<=2*n;++i) cnt+=tbl[i];
    printf("%d\n",cnt);
  }
  return 0;
}
