#include<stdio.h>

int main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++)
	{
		if(n % i == 0)
		{
			printf("Uoc cua %d la %d\n", n, i);
		}
	}
	
	
	return 0;
}
