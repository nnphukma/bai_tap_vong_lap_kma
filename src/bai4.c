#include <stdio.h>
#include <math.h>
//cau4 ~ NNP dz ~ DT070235
int main (){
	unsigned int t;
	printf("Nhap so lan thu: ");
	scanf("%d", &t);
	while (t--){
		int x, y, z;
		float s,c;
		printf("Nhap 3 so cho 3 canh cua tam giac: ");
		scanf("%d%d%d", &x, &y, &z);
		if ( x + y <= z || x + z <= y || y + z <=  x){
			printf("3 so khong phai la 3 canh cua mot tam giac\n");
		} else {
		
			c = (x + y + z);
			float p  = (c*1.0)/2;
			//cong thuc herron
			s = sqrt(p*(p - x)*(p - y)*(p - z));
			printf ("Chu vi la: %f\n", c);
			printf ("Dien tich la: %f\n", s);
		}
	}
	return 0;
}