#include <stdio.h>
int n = 10,t=1,s=0;
void A(int k)
{		
	if(k<=n){
		s = s+t;
		t = t*k;
		A(k+1);
	}

}

int main ()
{ 
	A(1);
	printf("%d\n",s);
	return 0;
}