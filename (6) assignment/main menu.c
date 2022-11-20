#include<stdio.h>

void square(){
	printf("\n----- AREA OF SQUARE -----");
	int side,area;
	printf("\nenter Side of square");
	scanf("%d",&side);
	area=side*side;
	printf("Area of square is %d\n\n",area);
}
//------------------------------------------------------
void rectangle(){
	
	printf("\n----- AREA OF RECTANGLE -----");
	int a,b,area;
	printf(" \nlength of rectangle ");
	scanf("%d",&a);
	printf("breadth of rectangle ");
	scanf("%d",&b);
	area=a*b;
	printf("area of rectangle is %d\n\n",area);
	
}

//------------------------------------------------------
void circle(){
	
	printf("\n----- AREA OF CIRCLE -----");
	int r,area;
	printf(" \nenter radius of circle ");
	scanf("%d",&r);
	area=3*r*r;
	printf("area of circle is %d\n\n",area);
	
}

//------------------------------------------------------
void pera_rectangle(){
	
	printf("\n----- PERIMETER OF RECTANGLE -----");
	int a,b,pera;
	printf(" \nlength of rectangle ");
	scanf("%d",&a);
	printf("breadth of rectangle ");
	scanf("%d",&b);
	pera=2*(a+b);
	printf("perimeter of rectangle is %d\n\n",pera);
	
}

//------------------------------------------------------
void pera_circle(){
	
	printf("\n----- PERIMETER OF CIRCLE -----");
	int r,pera;
	printf(" \nenter radius of circle ");
	scanf("%d",&r);
	pera=2*3*r;
	printf("area of circle is %d\n\n",pera);
	
}
//------------------------------------------------------
void pera_square(){
	printf("\n----- PERIMETER OF SQUARE -----");
	int side,pera;
	printf("\nenter Side of square");
	scanf("%d",&side);
	pera=4*side;
	printf("perimeter of square is %d\n\n",pera);
}

//------------------------------------------------------
int main(){
	printf("---------- WELCOME! ---------- ");
	printf("\n(1) AREA OF RETANGLE");
	printf("\n(2) PERIMETER OF RECTANGLE");
	printf("\n(3) AREA OF SQUARE");
	printf("\n(4) PERIMETER OF SQUARE");
	printf("\n(5) AREA OF CIRCLE");
	printf("\n(6) PERIMETER OF CIRCLE");
	printf("\n(0) EXIT ");
	int a;
	printf("\n\nEnter Your Choice :--");
	scanf("%d",&a);
	if (a==1){
		rectangle();
		}
	if (a==2){
		pera_rectangle();
		}
	if (a==3){
		square();
		}
	if (a==4){
		pera_square();
		}
	if (a==5){
		circle();
		}
	if (a==6){
		pera_circle();
		}
	if (a==0){
		return 0;
		}
	

	
	
}



	




