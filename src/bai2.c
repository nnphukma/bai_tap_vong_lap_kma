#include <stdio.h>
//cau2  ~ NNP dz ~ DT070235
int main() {
    int n = 6;
   	for (int i = 1; i <= n; i++) {
   		
	    for (int j = 1; j <= n - i + 1; j++) {
	        printf("* ");
	    }
	
	    for (int j = 1; j < 2 * i - 2; j++) {
	        if (i == n ){
	            printf("* ");	
			} else {
				printf ("  ");
			}
	    }
	    if (i == 1){
	    	for (int j = 1; j < n - i + 1; j++) {
		    printf("* ");
		}
		} else {
		for (int j = 1; j <= n - i + 1; j++) {
		    printf("* ");
		}
			
		}
		
	    printf("\n \n");
	}
    return 0;
}
