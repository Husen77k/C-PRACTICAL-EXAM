#include<stdio.h>

main(){

    int a,b;

    printf("Enter The Value of A :");
    scanf("%d",&a);
    
    printf("Enter The Value of B :");
    scanf("%d",&b);

    printf("Addition of A and B is : %d\n",a+b);
    printf("Subtraction of A and B is : %d\n",a-b);
    printf("Multiplication of A and B is : %d\n",a*b);
    printf("Division of A and B is : %d\n",a/b);

        if (b == 0) {
        printf("Division of A and B is : Error! Division by zero.\n");
    } else {
        
        printf("Division of A and B is : %.2f\n", (float)a / b);
    }

}