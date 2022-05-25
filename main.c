
#include <stdio.h>
#include <stdbool.h>
#include "triangle.h"
#include <math.h> 
int main()
{ 
  struct Point Tablica[3];//tworzymy tablice struktur
  for(int i = 0; i<3;i++)//podajemy poszczegolne spółrzędne do tablicy struktur
  {
       printf("podaj wspolrzedne: %d\n", i);
       scanf("%lf%lf",&Tablica[i].x, &Tablica[i].y);//wczytujemy zmienne typu double

  }  
 
 if(isRightTriangle(Tablica)==true)
 {
   printf("trojkat jest prostokatny");
 }
    return 0;
}