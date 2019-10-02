#include<stdio.h>
int main()
{
    int x,y;
    printf("To find the perimeter press 1\n To find area press 2");// ask for operation
    scanf("%d",&x);//scan result store in x
    printf("For square press 1\n For circle press 2\n For triangle press 3");//ask for the shape
    scanf("%d",&y);//store shaper number store in y
    switch(x)
    {
    case 1://for perimeter write logic in this case for all the shapes
        {
            switch (y)
            {
            case 1:
                {
                  int a,perimeter;
                  printf("Emter the side");
                  scanf("%d",&a);
                  perimeter=4*a;
                  printf("The perimeter is %d",perimeter);
                  //code goes here
                    break;
                }
            case 2:
                {
                    float a,circumference;
                    printf("Enter the radius");
                    scanf("%f",&a);
                    circumference=2*3.14*a;
                    printf("The circumference is%f",circumference);
                    //code goes here
                    break;
                }
            case 3:
                {
                    int a,b,c,perimeter;
                    printf("Enter the sides");
                    scanf("%d%d%d",&a,&b,&c);
                    perimeter=a+b+c;
                    printf("The perimeter is%d",perimeter);

                    //code goes here
                    break;
                }
            }
            break;
        }
    case 2://for area write logic in this case for all the shapes
        {
            switch (y)
            {
            case 1:
                {
                   int a,area;
                  printf("Enter the side");
                  scanf("%d",&a);
                  area=a*a;
                  printf("The area is %d",area); //code goes here
                    break;
                }
            case 2:
                {
                   float a,area;
                    printf("Enter the radius");
                    scanf("%f",&a);
                    area=3.14*a*a;
                    printf("The area is%f",area);
                    //code goes here  //code goes here
                    break;
                }
            case 3:
                {
                    float a,b,area;
                    printf("Enter the base");
                    scanf("%f",&a);
                    printf("Enter the height");
                    scanf("%f",&b);
                    area=0.5*a*b;
                    printf("The area is%f",area);
                //code goes here
                    break;
                }
            break;
            }
        }
    }
}
