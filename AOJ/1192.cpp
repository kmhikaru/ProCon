#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
	int x,y,s,tmp,tmp2,max,boo=1;
	cin >> x;
        cin >> y;
        cin >> s;
	while (!(x==0 && y == 0 && s == 0)){
		tmp = s*100/(100+x);
		tmp = tmp*(100+x)/100;
		cout << tmp == s*(100+x)/100 << endl;
		if(!(s == tmp*(100+x)/100)) tmp++;//上の丸められる前の値が整数でない時
		cout << tmp << endl;	
		while(boo){
			boo = 0;
			for(int	i = 1;i < tmp;i++){
				tmp2 = i*(100+x)/100;
                        	tmp2 += (tmp-i)*(100+x)/100;
                        	if(tmp2 == s)
					boo = 1;
			}
			if(boo)tmp++;
		}
		tmp--;
		max = tmp*(100+y)/100;
		for(int i = 1;i < tmp;i++){
			tmp2 = i*(100+y)/100;
			tmp2 += (tmp-i)*(100+y)/100; 
			if(max < tmp2) max = tmp2; 
		}
		cout << max << endl;
		cin >> x;
	       	cin >> y;
       	 	cin >> s;
	}	
}

