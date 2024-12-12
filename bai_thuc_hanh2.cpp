#include<stdio.h>

int main()
{
	int gio_lam_viec;
	printf("Nhap vao gio lam viec: ");
	scanf("%d", &gio_lam_viec);
	
	int muc_luong_time;
	printf("Nhap muc luong theo gio: ");
	scanf("%d", &muc_luong_time);
	
	int luong = gio_lam_viec * muc_luong_time;
	printf("Luong co ban: %d\n", luong);
	
	if(gio_lam_viec > 160)
	{
		float phu_cap = luong * 0.1;
		printf("Tien phu cap: %.2f\n", phu_cap);
	}
	else
	{
		printf("Khong co tien phu cap\n");
	}
	
	return 0;
}
