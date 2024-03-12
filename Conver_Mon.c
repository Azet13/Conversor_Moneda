#include <stdio.h>

#define dolar 7.75

int main () {
   
    float vdolar, vquet, v_d;
    vquet=0;
    vdolar=0;
    v_d=0;
   
        printf ("Introduzca la primera cantidad en dolares: \n");
        scanf ("%f", &vquet);
            v_d=vquet*dolar;
            printf ("%.2f \n", v_d);
            printf ("En Quetzales son %.2f \n", v_d);
      
}
