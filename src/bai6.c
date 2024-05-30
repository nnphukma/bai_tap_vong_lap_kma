#include <stdio.h>
// cau6 ~ NNP dz ~ DT070235
int main (){
	int n;
	int posCnt = 0, negCnt = 0;
	float posTb = 0, negTb = 0;
	printf("Nhap so phan tu cua day so: ");
	scanf("%d", &n);
	int a[n];
	printf("Nhap cac phan tu cua day ");
	for (int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		if (a[i] > 0){
			posTb += a[i];
			posCnt++;
		} else {
			negTb += a[i];
			negCnt++;
		}
	}
	if (posCnt == 0){
		printf("Day khong co so duong\n");
		printf("Trung binh cong cac so am la: %f\n", negTb*1.0/negCnt);
	} else if (negCnt == 0){
		printf("Trung binh cong cac so duong la: %f\n", posTb*1.0/posCnt);
		printf("Day khong co so am\n");
	} else {
		printf("Trung binh cong cac so duong la: %f\n", posTb*1.0/posCnt);
		printf("Trung binh cong cac so am la: %f\n", negTb*1.0/negCnt);
	}
	return 0;
}