#include <iostream>
#include <algorithm>
using namespace std;
int main(){
  int n;
  cin >> n; //10bit
  for(int i=0;i<10;++i){
    if((n>>i)&1) cout << i << endl;
  }
  return 0;
}

