#include <stdio.h>

void Addition(){
    float x,y;
    printf("Enter the two numbers x and y for addition respectively : ");
    scanf("%f%f",&x,&y);
    printf("The addition is %f",x+y);
}
void Subtraction(){
    float x,y;
    printf("Enter the two numbers x and y for subtraction respectively : ");
    scanf("%f%f",&x,&y);
    printf("The subtraction %d-%d is %f",x,y,x-y);
}
void Multiplication(){
    float x,y;
    printf("Enter the two numbers x and y for multiplication respectively : ");
    scanf("%f%f",&x,&y);
    printf("The multiplication is %f",x*y);
}
void Division(){
    float x,y;
    printf("Enter the two numbers x and y for division respectively : ");
    scanf("%f%f",&x,&y);
    printf("The division %f/%f is %f",x,y,x/y);
}
void Remainder(){
    int x,y;
    printf("Enter the two integers x and y for remainder respectively : ");
    scanf("%d%d",&x,&y);
    printf("The remainder is %d",x%y);
}

int main()
{
    int option;
    printf("Enter the following among 1,2,3,4,5 for the following option \n");
    printf("1.Addition \n2.Subtraction\n3.Mutiplication\n4.Division\n5.Remainder\n");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        Addition();
        break;
    case 2:
        Subtraction();
        break;
    case 3:
        Multiplication();
        break;
    case 4:
        Division();
        break;
    case 5:
        Remainder();
        break;
    }

        return 0;
    }