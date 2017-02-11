#include <algorithm>
#include <stdio.h>
using namespace std;
int main(){
  int a,b;
  while(scanf("%d%d",&a,&b)){
    printf("%d %d\n",__gcd(a,b),a/__gcd(a,b)*b);
  }
  return 0;
}
