/*4、设有各不同面值人民币若干，编写一个计算程序，对任意输入的一个金额，给出能组合出这个值的最佳可能，
要求使用的币值个数最少。例如，给出146元，将得到下列结果：
 146元=
100元  1个
20元   2个
5元   1个
1元   1个
*/
#include<stdio.h>
int main(){
	int sum = 0;
	int a = 0,b =0,c =0,d = 0,e = 0,f = 0;
	printf("请输入一个金额：");
	scanf("%d",&sum);
	for(;;){
		sum-=100;
		a++;
		if(sum < 0){
			a--;
			break;
		}
	}
	sum+=100;
	for(;;){
		sum-=50;
		b++;
		if(sum < 0){
			b--;
			break;
		}
	}
	sum+=50;
	for(;;){
		sum-=20;
		c++;
		if(sum < 0){
			c--;
			break;
		}
	}
	sum+=20;
	for(;;){
		sum-=10;
		d++;
		if(sum < 0){
			d--;
			break;
		}
	}
	sum+=10;
	for(;;){
		sum-=5;
		e++;
		if(sum < 0){
			e--;
			break;
		}
	}
	sum+=5;
	for(;;){
		sum-=1;
		f++;
		if(sum < 0){
			f--;
			break;
		}
	}
	if(a != 0){
		printf("用了100元%d张\n",a);
	}
	if(b != 0){
	printf("用了50元%d张\n",b);
	}
	if(c != 0){
	printf("用了20元%d张\n",c);
	}
	if(d != 0){
	printf("用了10元%d张\n",d);
	}
	if(e != 0){
	printf("用了5元%d张\n",e);
	}
	if(f != 0){
	printf("用了1元%d张\n",f);
	}
	return 0;
}