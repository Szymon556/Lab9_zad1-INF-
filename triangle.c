#include "triangle.h"
#include <stdio.h>
#include <stdbool.h>
#include <math.h>


double calculateDistance ( Point_t first , Point_t second);
bool isRightTriangle(Point_t Tablica[])
{   
    bool result = false; //stan początkowy
  double tab[3];
    tab[0] =  calculateDistance (Tablica[0] ,Tablica[1]);//dlaczego nie można dać bezposrednio komórki tablicy ?
 
  tab[1] =  calculateDistance (Tablica[1] ,Tablica[2]);
 
  tab[2] =  calculateDistance (Tablica[0] ,Tablica[2]);

 if( (sqrt(tab[0])+sqrt(tab[1])>sqrt(tab[2])) && (sqrt(tab[0])+sqrt(tab[2])>sqrt(tab[1])) && (sqrt(tab[2])+sqrt(tab[1])>sqrt(tab[0])))
 {

 
   
 


int n = 3;
for(int i=1; i<n; i++)
    {
        for(int j=n-1; j>=1; j--)
        {
            if(tab[j]>tab[j-1])
            {
                double bufor;
                bufor=tab[j-1];
                tab[j-1]=tab[j];
                tab[j]=bufor;
            }
        }
    } //algorytm sortujący żeby podstawić pod pitagorasa czyli znaleźć przekątną
    
    
    printf("%lf\t%lf\t%lf\n",tab[0] ,tab[1] , tab[2]);

  if(tab[0]==tab[1] +tab[2])//pitagoras
  {
    result = true;
  }
  
 }else
 { printf("Nie da sie zbudowac trojkata\n");
  
 } 
 return result;
    
}

 double calculateDistance ( Point_t first , Point_t second) {
  const double xDist = second.x - first.x ;
  const double yDist = second.y - first.y ;
 return ( xDist * xDist + yDist * yDist );
 }
