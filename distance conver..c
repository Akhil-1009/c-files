#include<stdio.h>
#include<conio.h>
void main()
{float km,m,feet,inches,cm;
 printf ("enter the distance between 2 cities in km");
 scanf ("%f",&km);
 m=1000*km;
 printf ("\nthe distance in m is%f",m);
 feet=3280.84*km;
 printf ("\nthe distance in feet is%f",feet);
 inches=39370.1*km;
 printf (" \ndistance in inches is%f",inches);
 cm=100000*km;
 printf ("\ndistance in cm is %f",cm);
 getch();
}

