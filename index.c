#include<stdio.h>
#include<math.h>
int main(){
// C Hello World Program
printf("hello world \n");
// C Program to Print Your Own Name 
printf ("deepa singh \n");
// C Program to Print an Integer Entered By the User
int a;
printf("enter a number");
scanf("%d",&a);
printf("%d \n",a);
// C Program to Add Two Numbers
int x=5,y=6;
printf("%d \n",x+y);
// C Program to Multiply two Floating-Point Numbers
float c=12.0, d=2.0;
printf("%f \n",c*d);
// C Program to Print the ASCII Value of a Character
char ch='a';
printf("%c=%d \n",ch,ch);
// C Program to Swap Two Numbers
int p=4,q=6,temp;
temp=p;
p=q;
q=temp;
printf("%d=p, %d=q \n",p,q);
// C Program to Calculate Fahrenheit to Celsius
float f=40,cel;
cel=(f-32)*5/9;
printf("%f \n",cel);
// C Program to Find the Size of int, float, double, and char
printf("%u \n",sizeof(int));
printf("%u \n",sizeof(float));
printf("%u \n",sizeof(char));
printf("%u \n",sizeof(double));
// C Program to Find Simple Interest
int pr=1000,r=5,t=2,si;
si=(pr*r*t)/100;
printf("%d \n",si);
// C Program to Find Compound Interest
int principal= 1200,rate=5,time=2;
int amount= principal*(1+rate/100)^time;
printf("%d \n",amount);
// C Program for Area And Perimeter Of Rectangle
int l=12,b=8,area=l*b,perimeter=2*(l+b);
printf("%d \n",area);
printf("%d \n",perimeter);

    return 0;
}



