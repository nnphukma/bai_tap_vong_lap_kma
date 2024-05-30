#include <stdio.h>
//cau9 ~ NNP dz ~ DT070235
double power(int x, int n){
	double result = 1.0;
	for (int i = 1; i <= n; i++){
		result *= x;
	}
	return result;
}

int main (){
	int n;
	float s = 0;
	printf("Nhap n: ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++){
		s+= 1/power(i, 2);
	}
	printf("S = %f", s);
	return 0;
}