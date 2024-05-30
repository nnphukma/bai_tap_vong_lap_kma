#include <stdio.h>
//cau5 ~ NNP dz ~ DT070235
int main(){
	int mm, yy;
	printf("Nhap thang: ");
	scanf("%d", &mm);
	printf("Nhap nam: ");
	scanf("%d", &yy);
	if (mm < 1 || mm > 12){
		printf("Thang hoac nam khong hop le vui long nhap lai\n");
	} else {
		if (mm == 2){
			printf ("Thang %d nam %d co 28 ngay", mm, yy);
		} else if ( mm == 4 || mm == 6 || mm == 9 || mm == 11){
			printf ("Thang %d nam %d co 30 ngay", mm, yy);
		} else {
			printf ("Thang %d nam %d co 31 ngay", mm, yy);
		}
	}
	return 0;
}