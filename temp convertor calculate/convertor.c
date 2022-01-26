#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(int argc, char const *argv[])
{   float c,f,k;
int x;
    printf("\n\nSelect your temperature scale.\n\n for centigrade to farenhite press 1\n for farenhite to centigrade press 2\n for kelvin to centigrade press 3\n for centigrade to kelvin press 4\n for kelvin to farenhite press 5\n for farenhite to kelvin press 6\n\n");
    printf("Type your option: ");
    scanf("%d",&x);
    switch (x)
    {
    case 1:
            printf("\nEnter the value of centigrade: ");
            scanf("%f",&c);
            f=(((9*c)/5)+32);
            printf("\nThe farenhite value is %f",f);
        break;
    case 2:
            printf("\nEnter the value of farenhite: ");
            scanf("%f",&f);
            c=((5*(f-32))/9);
            printf("\nThe centigrade value is %f",c);
        break;
    case 3:
            printf("\nEnter the value of Kelvin: ");
            scanf("%f",&k);
            c=(k+273);
            printf("\nThe centigrade value is %f",c);
        break;
    case 4:
            printf("\nEnter the value of centigrade: ");
            scanf("%f",&c);
            k=(c-273);
            printf("\nThe Kelvin value is %f",k);
        break;
    case 5:
            printf("\nEnter the value of Kelvin: ");
            scanf("%f",&k);
            f=(((9*(k-273))/5)+32);
            printf("\nThe farenhite value is %f",f);
        break;
    case 6:
            printf("\nEnter the value of farenhite: ");
            scanf("%f",&f);
            k=(((5*(f-32))/9)+273);
            printf("\nThe kelvin value is %f",k);
        break;
    default:
            printf("\ndon't match any values above of them\n\n Please try again letter");
        break;
    }
    return 0;
}
