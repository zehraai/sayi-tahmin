#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void oyunBaslat()
{
    int zorluk, maxsayi, hak, gizlisayi;
    int tahmin;
    int denemesayisi=0;

    printf("\n====================\n");
    printf(" \nSAYI TAHMIN OYUNUNA HOSGELDINIZ\n");
    printf("\n=======================\n");



    printf("\nZorluk seciyesi sec:\n");
    printf("1 - kolay (1-50 arasi 10 hak)\n");
    printf("2 - orta (1-100 arasi 6 hak)\n");
    printf("3 - zor (1-200 arasi 4 hak)\n");
    scanf("%d" , &zorluk);


switch(zorluk)
{
    case 1 :
    maxsayi = 50;
    hak= 10;
    break;
    
    case 2 :
    maxsayi=100;
    hak = 6;
    break;
    
    case 3 :
    maxsayi = 200;
    hak =4;
    break;

    default:
    printf("\nGecersiz secim orta mod secildi.\n");
    maxsayi = 100;
    hak = 6;
    break;
}
gizlisayi = (rand() % maxsayi) + 1;

printf("\n1 ile %d arasinda bir sayi sectim. toplam %d hakkiniz var.\n", maxsayi, hak);
printf("=========================\n");


while (hak>0)
{
    printf("\nKalan hak %d Tahmininiz:  " , hak);

    if(scanf("%d" , &tahmin) !=1)
    {
        printf("\nsadece tam sayi gir.\n");
        while (getchar() != '\n');
        continue;
    }
       denemesayisi++;
       if (tahmin== gizlisayi)
       {
        printf("\nHelal, %d sayisini %d. denemede dogru bildin.\n", gizlisayi, denemesayisi);
        break;
       }

       else if (tahmin < gizlisayi)
       
      {
        printf(" \n-> yukari\n");
        hak--;
       }

       else
       {
        printf("\n-> asagi\n");
        hak--;
       }


}
  if (hak==0)
{
    printf("\nHak bitti, sayi %d idi.\n", gizlisayi);
}
}
int main()
{
    char tekrar;
    srand(time(0));
    do 
    {
        oyunBaslat();
        printf("\ntekrar oyna ( e/h):");
        scanf(" %c" , &tekrar);
    } while (tekrar=='e' || tekrar=='E');
    printf("\nes kral yine gel\n");
    
    return 0;
}
























