
#include <stdio.h>
#include <conio.h>
// cau 1 ~ NNP dz ~ DT070235
int main (){
	char c;
	do{
		printf("NHAP NGON NGU LAP TRINH \n");
		c = getch();
		switch (c){
			case 'C': 
			printf("TURBO C\n"); 
			break;
			case 'P': 
			printf("TURBO PASCAL\n"); 
			break;
			default : continue;
		}
		getch();
	} while (c != 'C' && c != 'P');
	return 0;
}