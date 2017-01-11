#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,D;
    double x1,x2;

    printf("\t\t\t PROGRAM MENCARI PERSAMAAN AKAR KUADRAT\n\n");
    printf("Masukkan Nilai a=  ");
    scanf("%f",&a);
    printf("Masukkan Nilai b=  ");
    scanf("%f",&b);
    printf("Masukkan Nilai c=  ");
    scanf("%f",&c);

    D=(b*b)-(4*a*c);
    if(D<0)
    {
        printf("\nAkar-akar persamaan kuadrat imajiner\n");
    }
    if(D>0)
    {
        x1=(-b+(sqrt(D))/(2*a));
        x2=(-b-(sqrt(D))/(2*a));

        printf("\nAkar-akar persamaan kuadrat berbeda\n");
        printf("\nNilai x1=%.2f\n",x1);
        printf("Nilai x2=%.2f\n",x2);
    }
    if(D==0)
    {
        x1=(-b)/(2*a);
        x2=x1;

        printf("\nAkar-akar persamaan kuadrat kembar");
        printf("\nNilai x1=%.2f\n",x1);
        printf("Nilai x2=%.2f\n",x2);
    }
}
