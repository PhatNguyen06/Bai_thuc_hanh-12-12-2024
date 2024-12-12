#include <stdio.h>

int main()
{
    float tien_chuyen_doi, tien;
    float usd_to_vnd = 23500;
    float eur_to_vnd = 25000;
    float gbp_to_vnd = 28000;
    float jpy_to_vnd = 180;
    float vnd_to_usd = 1 / usd_to_vnd;
    float vnd_to_eur = 1 / eur_to_vnd;
    float vnd_to_gbp = 1 / gbp_to_vnd;
    float vnd_to_jpy = 1 / jpy_to_vnd;

    printf("============CHUONG TRINH CHUYEN DOI TIEN TE===========\n");
    printf("1. USD to VND\n");
    printf("2. EUR to VND\n");
    printf("3. GBP to VND\n");
    printf("4. JPY to VND\n");
    printf("5. VND to USD\n");
    printf("6. VND to EUR\n");
    printf("7. VND to GBP\n");
    printf("8. VND to JPY\n");
    printf("Nhap don vi tien ti ban muon chuyen doi (1-8): ");
    int chose;
    scanf("%d", &chose);

    printf("Nhap tien ban muon chuyen doi: ");
    scanf("%f", &tien_chuyen_doi);

    switch (chose)
    {
    case 1 :
        tien = tien_chuyen_doi * usd_to_vnd;
        printf("%.2f USD = %.2f VND\n", tien_chuyen_doi, tien_vnd);
        
        break;
    case 2 :
        tien = tien_chuyen_doi * eur_to_vnd;
        printf("%.2f EUR = %.2f VND\n", tien_chuyen_doi, tien_vnd);
        
        break;
    case 3 :
        tien = tien_chuyen_doi * gbp_to_vnd;
        printf("%.2f GBP = %.2f VND\n", tien_chuyen_doi, tien_vnd);
        
        break;
    case 4 :
        tien = tien_chuyen_doi * jpy_to_vnd;
        printf("%.2f JPY = %.2f VND\n", tien_chuyen_doi, tien_vnd);
        
        break;
    case 5 :
        tien = tien_chuyen_doi * vnd_to_usd;
        printf("%.2f VND = %.2f USD\n", tien_chuyen_doi, tien_vnd);
        
        break;
    case 6 :
        tien = tien_chuyen_doi * vnd_to_eur;
        printf("%.2f VND = %.2f EUR\n", tien_chuyen_doi, tien_vnd);
        
        break;
    case 7 :
        tien = tien_chuyen_doi * vnd_to_gbp;
        printf("%.2f VND = %.2f GBP\n", tien_chuyen_doi, tien_vnd);
        
        break;
    case 8 :
        tien = tien_chuyen_doi * vnd_to_jpy;
        printf("%.2f VND = %.2f JPY\n", tien_chuyen_doi, tien_vnd);
        
        break;
    default :
        printf("Du lieu khong hop le!!!\n");
    }

    return 0;
}
