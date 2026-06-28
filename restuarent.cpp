#include<stdio.h>
int main()
{
	int you,data;
	printf("enter the rating of you and data\n");
	scanf("%d %d",&you,&data);
if(you<=2||data<=2)
{
	printf("0");
	}	
	else if(you<=8||data>=8){
		printf("2");	
	}
	else{
		printf("1");
	}
	return 0;
}
