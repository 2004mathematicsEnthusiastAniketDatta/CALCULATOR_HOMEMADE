#include<stdio.h>
#include <stdlib.h>
#include <math.h>
#define note "Enter the Valid operation"
void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void squareroot();
void mean();
void variance();
void cube();
void power();
void factorial();
void square();
int main(){
   printf("\t\t Welcome to the scientific calculator!!\n\n");
   int choice;
   printf("Enter 0 to quit the program \n");

   printf("Enter 1 for addition \n");
   printf("Enter 2 for subtraction \n");
   printf("Enter 3 for Mutilplication \n");
   printf("Enter 4 for Division \n");
   printf("Enter 5 for  square \n");
   printf("Enter 6 for   cube \n");
   printf("Enter 7 for    Power \n");
   printf("Enter 8 for   square root \n");
   printf("Enter 9 for   factorial \n");
   printf("Enter 10 for   modulus\n");
   printf("Enter 11 for  mean \n");
   printf("Enter 12 for  Variance \n");
   while(1)
   
   {
     printf("\n\nEnter the operation to be performed:");
     scanf ("%d",&choice);
     switch (choice)
     {
        case 1:
        addition();
        break;
        case 2:
        subtraction();
        break;
        case 3:
        multiplication();
        break;
        case 4:
        division();
        break;
        case 5:
        square();
        break;
        case 6:
        cube();
        break;
        case 7:
        power();
        break;
        case 8:
        squareroot();
        break;
        case 9:
        factorial();
        break;
        case 10:
        modulus();
        break;
        case 11:
        mean();
        case 12:
        variance();
        break;
        default:
         printf("More operations to be added!Retry with the operations mentioned");
     }
       void addition(){
        printf("Enter the numbers you want to add:");
        int a,b;
        scanf("%d%d",&a,&b);
        printf("The sum of a and b is %d\n",a+b);

       }
       void subtraction(){
        printf("Enter the numbers you want to subtract:");
        int a,b;
        scanf("%d%d",&a,&b);
        printf("The difference to a from b is %d\n",a-b);
       }
       void multiplication(){
        printf("Enter the numbers you want to multiply:");
        int a,b;
        scanf("%d%d",&a,&b);
        printf("The product of a and b is %d\n",a*b);
       }
       

void division(){
    printf("Enter the numbers you want to divide: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The division of a and b is %f\n",(float)a/(float)b);
}
void modulus(){
    printf("Enter the numbers you want to find modulus of: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The modulus of a and b is %d\n",a%b);
}
void factorial(){
    int n,factorial;
    printf("Enter the number you want the factorial of: ");
    scanf("%d",&n);
    factorial=1;
    for(int i=1;i<=n;i++){
        factorial=factorial*i; // factorial*=i;
    }
    printf("\nFactorial of %d is %d",n,factorial);
}
void power(){
    double b;
    double p;
    printf("Enter the base and the power: ");
    scanf("%lf%lf",&b,&p);
    double e=pow(b,p);
    printf("The power is %lf",e);
}
void square(){
    double b;
    printf("Enter the number you want the square of: ");
    scanf("%lf",&b);
    double p=pow(b,2);
    printf("The square of %lf is %lf",b,p);
}
void cube(){
    double b;
    printf("Enter the number you want the cube of: ");
    scanf("%lf",&b);
    double p=pow(b,3);
    printf("The cube of %lf is %lf",b,p);
}
void squareroot(){
    double b;
    printf("Enter the number you want the square root of : ");
    scanf("%lf",&b);


       }
       void mean()
{
    float x[MAXSIZE];
    int  i, n;
    float average, variance, std_deviation, sum = 0, sum1 = 0;
 
    printf("Enter the value of N \n");
    scanf("%d", &n);
    printf("Enter %d real numbers \n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%f", &x[i]);
    }
    /*  Compute the sum of all elements */
    for (i = 0; i < n; i++)
    {
        sum = sum + x[i];
    }
    average = sum / (float)n;
    /*  Compute  variance  and standard deviation  */
    for (i = 0; i < n; i++)
    {
        sum1 = sum1 + pow((x[i] - average), 2);
    }
    variance = sum1 / (float)n;
    std_deviation = sqrt(variance);
    printf("Average of all elements = %.2f\n", average);
    printf("variance of all elements = %.2f\n", variance);
    printf("Standard deviation = %.2f\n", std_deviation);
}
void variance(){
    void stand_devi(float, float, float, float, float,  
                float*, float*, float*, float*);  
  
int main()  
{  
    float a, b, c, d, e;  
    float sum = 0, avg = 0, sd = 0, vari = 0;  
  
    printf("Enter 5 numbers\n");  
    scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);  
  
    stand_devi(a, b, c, d, e, &sum, &avg, &vari, &sd);  
  
    printf("\nSum = %0.2f\n", sum);  
    printf("Mean / Average = %0.2f\n", avg);  
    printf("Variance = %0.2f\n", vari);  
    printf("Standard Deviation = %0.2f\n", sd);  
  
    return 0;  
}  
  
void variance()  
{  float a, float b, float c, float d, float e,  
                float *sum, float *avg, float *v, float *sd;
                
    *sum = a + b + c + d + e;  
    *avg = *sum / 5.0;  
  
    *v   += pow( (a - *avg), 2 );  
    *v   += pow( (b - *avg), 2 );  
    *v   += pow( (c - *avg), 2 );  
    *v   += pow( (d - *avg), 2 );  
    *v   += pow( (e - *avg), 2 );  
  
    *v   = *v / 5.0;  
    *sd  = sqrt(*v);  
}
}
     }

   }
