
//Kullan�c�ya ad�n� ve do�um y�l�n� sorarak ekrana ad�n� ve ya��n� yazd�ran program
#include <stdio.h>
int main() {
printf("Adinizi giriniz:");
char ad[20];
scanf("%s",ad);
int dogumyili;
printf("Dogum yilinizi giriniz: ");
scanf("%d",&dogumyili);
int yas=2023-dogumyili;
printf("Merhaba %s, yasiniz: %d",ad,yas);
return 0;
}
