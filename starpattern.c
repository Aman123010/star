#include <stdio.h>
void right_triangle() {
	int i,j;
	for (i=0; i<5; i++) {
		for (j=0; j<=i; j++) {
			printf(" * ");
		}
		printf("\n");
	}
}
 void right_triangle2() 
{
	
	int i,j,k;
	for (i=1; i<=5; i++) {
		for (j=5; j>=i; j--) {
			printf(" ");
		}
		for (k=1; k<=i; k++) {
			printf("*");
		}
		printf("\n");
	}
}

void inverted()
 {
	int i,j,k,samp=1;
	
	for (i=5; i>=1; i--) {
		for (k=samp; k>=0; k--) 
		{
					printf(" ");
			
		}
		for (j=i; j>=1; j--) {
			printf("*");
		}
		samp = samp + 1;
		printf("\n");
	}
}

void inverted2()
 {
	int i,j;
	for (i=5; i>=1; i--) {
		for (j=1; j<=i; j++)
		 {
			printf(" * ");
		}
		printf("\n");
	}
}
void pyramid()
 { 	int i,j,k,t=0;
	for (i=1; i<=5; i++) {
		for (k=t; k<5; k++) {
			printf(" ");
		}
		for (j=0; j< i; j++) {
			printf(" * ");
			t = t + 1;
		}
		printf("\n");
	}
}


int main()
{int ch;
printf("\n enter 1 for right triangle,\n 2 for right traingle 2,\n 3 for inverted,\n 4 for inverted 2,\n 5 for pyramid\n");

	while(1)
	{	printf("\nenter the pattern choice :");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:right_triangle();
				break;
		case 2:right_triangle2();
				break;
		case 3:inverted();
		        break;
	    case 4:inverted2();
	            break;
		case 5:pyramid();
		        break;	}
     	}return 0;}
     
