#include<stdio.h>
int main()
{
	int i=2156;
	while(i){
		int dig=i%10;
		printf("i=%d\n",i);
		i=i/10;
	}
}
