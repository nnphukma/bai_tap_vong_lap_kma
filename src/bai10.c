#include <stdio.h>
//cau 10 ~ NNPdz ~ DT070235
int main (){
	int n;
	printf("Nhap so phan tu cua day: ");
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for (int i = 0; i< n; i++){
		if(a[i] > 0){
			printf("%d ", a[i]);
		}
	}
	putchar('\n');
	for (int i = 0; i < n; i++){
		if(a[i] <= 0){
			printf("%d ", a[i]);
		}
	}
	putchar('\n');
	return 0;
}