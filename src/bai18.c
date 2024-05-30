#include <stdio.h>
#include <math.h>
//cau 18 ~ NNP dz ~ DT070235
void arrInput(int a[][100], int n) {
    printf("Nhap ma tran: \n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
}

void arrOutput(int a[][100], int n) {
    printf("Ma tran la\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

int isMtDonvi (int a[][100], int n){
	int check = 1;
	for (int i = 0; i < n; i ++){
		for (int j = 0; j < n; j++){
			if ( i == j && a[i][j] != 1){
				return 0;
			} else if (i != j && a[i][j] != 0){
				return 0;
			}
		}
	}
	return 1;
} 

int isPrime (int x){
	if (x < 2){
		return 0;
	}
	int cnt = 0;
	for (int i = 2; i <= sqrt(x); i++){
		if (x % i == 0){
			cnt++;
		}
	}
	if(cnt == 0){
		return 1;
	} else {
		return 0;
	}
	
}

int arrIsPrime (int a[][100], int i, int n){
	for (int j = 0; j < n ; j++){
		if(isPrime(a[i - 1][j])) {
			return 1;
		}
	}
	return 0;
}
int main() {
    int n;
    printf("nhap kich thuoc cua ma tran vuong: ");
    scanf("%d", &n);
    int a[100][100];
    arrInput(a, n);
    arrOutput(a, n);
    //cau a ~ check ma tran don vi
    printf("Cau a: ");
	if(isMtDonvi(a,n)){
		printf("Ma tran tren la ma tran don vi\n");
	} else {
		printf("Ma tran tren khong la ma tran don vi\n");
	}
	printf("\n");
	//cau b ~ tinh tong cac phan tu nam tren hang thu i;
	printf("Cau b: ");
	int r, sum = 0;
	printf("Nhap hang muon tinh tong: ");
	scanf("%d", &r);
	for(int j = 0; j < n; j++){
		sum += a[r-1][j];	
	}
	printf("Tong cac phan tu nam tren hang thu %d la %d \n", r, sum);
	printf("\n");
    //cau c ~ tinh tich cac phan tu nam tren cot thu j;
    printf("Cau c: ");
    int c, pro = 1;
    printf("Nhap cot muon tinh tich: ");
	scanf("%d", &c);
	for(int j = 0; j < n; j++){
		pro *= a[j][c-1];	
	}
	printf("Tich cac phan tu nam tren cot thu %d la %d \n", c, pro);
	printf("\n");
	//cau d ~ tim so nguyen to tren hang thu i;
	printf("Cau d: ");
	int r2;
	printf("Nhap hang muon kiem tra co so nguyen to ");
	scanf("%d", &r2);
	if (arrIsPrime(a, r2, n)) {
		printf ("Hang thu %d cua ma tran CO so nguyen to ", r2);
	} else {
		printf ("Hang thu %d cua ma tran KHONG CO so nguyen to ", r2);
	}
	printf("\n");
	
	int checkPrime [n];
	for (int i = 0; i < n; i++){
		int cnt = 0;
		for (int j = 0; j < n; j++){
			if (isPrime(a[i][j])) {
				++cnt;
			} 
			checkPrime[i] = cnt;
		}
	}
	int max = 0,count1, count2;
		for (int i = 0; i < n; i++){
		printf("%d ", checkPrime[i]);
	}
	for (int i = 0; i < n; i++){
		if (checkPrime[i] > max){
			max = checkPrime[i];
			count1 = i;
		}
	}
	printf("Hang co nhieu so nguyen to nhat  la: hang %d", count1 + 1);
    return 0;
}