#include<stdio.h>
int main(){
	int a;
	printf("ENTER THE UNIT CONSUMED \n");
	scanf("%d",&a);
	if(a<=50){
		printf("ELECTRICTY BILL IS %d \n",a*50/100);
	}
	else if (a<=100 && a>50){
		printf("ELECTRICTY BILL IS %d \n",a*75/100);
	}
	else if (a<=200 && a>100){
		printf("ELECTRICTY BILL IS %d \n",a*120/100);
	}
	else if (a>250){
		printf("ELECTRICTY BILL IS %d \n",a*150/100);
	}
	return 0;
}
