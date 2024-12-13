#include <stdio.h>
#include <math.h>


int main() {
    int a;
    printf("nhap so nguyen: ");
    scanf("%d", &a);

	bool is_prime = true;

	for (int i = 2; i <= sqrt(a); i++) {
        if (a % i == 0) {
            is_prime = false;
        }
    }

	if(is_prime)
	{
		printf("%d la so nguyen to", a);
	}else {
       printf("%d khong phai la so nguyen to!\n", a);
    }

    return 0;
}
