#include<stdio.h>
int main(){
	int e,m,h,c,s,total,per,avg;
	per=(e+m+h+c+s)/5;
	
	
	printf("Marksheet\n\n");
	printf("Enter English Marks");
	scanf("%d",&e);
	printf("Enter Math Marks");
	scanf("%d",&m);
	printf("Enter Hindi Marks");
	scanf("%d",&h);
	printf("Enter Computer Marks");
	scanf("%d",&c);
	printf("Enter Science Marks");
	scanf("%d",&s);
	printf("\nPercent obtained = %d",per);
	if (per>33){
		printf("\npassed");
	}
	else{
	
	
	printf("\nfailed");
	}
}
