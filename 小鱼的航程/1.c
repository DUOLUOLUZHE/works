#include <stdio.h>
int solution(int m, int n){
    int result = 0;
    int i;
    for(i = 0;i < n;i++)
    {
        if(m != 6 && m != 7)
            result += 250;
        if(m == 7)
            m = 0;
		m++;
    }

    return result;
}


int main() {
    int m;
	int n;
    scanf("%d",&m);
	scanf("%d",&n);

    int result = solution(m,n);

    printf("%d\n",result);

    return 0;
}