#include <stdio.h>
//bai15 ~ NNP dz
int main (){
	int n;
	double negRes = 1;
	printf("Nhap so phan tu cua day so: ");
	scanf("%d", &n);
	int a[n];
	for (int i =0; i < n; i++){
		scanf("%d", &a[i]);
		if (a[i] < 0){
			negRes *= a[i];
		}
	}
	printf("Tich cac phan tu am la: %f ", negRes);
	return 0;
}