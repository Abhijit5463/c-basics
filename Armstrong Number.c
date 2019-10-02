#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y,noOfDigit=0,orignal,isarmstrong=0;
        printf("Enter a number");
        scanf("%d",&x);
        orignal=x;
        while(x>0)
        {
            //calculate the number of digits
            x=x/10;
            noOfDigit++;
        }
        x=orignal;
        while(x>0)
        {
            y=x%10;
            y=pow(y,noOfDigit);
            x=x/10;
            isarmstrong=isarmstrong+y;

        }
        x=orignal;
        if(isarmstrong==x)
            printf("%d is a armstrong number",x);
        else
            printf("%d is not an armstrong number",x);


}
