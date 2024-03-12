#include <stdio.h>

#define euro 1
#define dolar 1.26

int main () {
   
    float vdolar, veuro, v_e, v_d;
    veuro=0;
    vdolar=0;
    v_d=0;
    v_e=0;
   
        printf ("Introduzca la primera cantidad en euros: \n");
        scanf ("%f", &veuro);
            v_d=veuro*dolar;
            printf ("%.2f \n", v_d);
            printf ("En dólares son %.2f \n", v_d);
       
        printf ("Introduzca la segunda cantidad en dólares: \n");
        scanf ("%f", &vdolar);
            v_e=euro*vdolar/dolar;
            printf ("%.2f \n", v_e);   
            printf ("En euros son son %.2f \n", v_e);
}