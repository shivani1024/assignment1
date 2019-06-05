/*5. The area of a square is d. What is the area of the circle which has the diagonal of the square as its
diameter? Write a program that:
a) Reads from user: area of a square as d (an integer)
b) Check if area entered, d is valid
c) Find the area of the circle whose diameter is the same as the diagonal of the square
d) Find the circumference of the circle whose radius is the same as the diagonal of the
square*/
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define pi 3.14159
int main()
{
   float d,a,ar,r,cir;                                              //declare the variables

   printf("Enter the area of the square\n");
   scanf("%f",&d);                                                  //reads the area
   if(d>=0)                                                         //checks if area is valid
   {
       a= sqrt((d*2));                                             //area is (diagonal/root2)^2
    r = a/2;                                                       //given radius is half of diagonal
   ar = pi*r*r;
   printf("The area of the circle with diameter equal to diagonal is %f\n",ar);
   r=a;                                                            //radius is equal to diagonal
   cir = 2 * pi *r;                                                //calculates circumference
   printf("The circumference of the circle with radius equal to diagonal is %f\n",cir);
   }

   else
    printf("Area not valid\n");
return;
}
/*Sample output
Enter the area of the square
8
The area of the circle with diameter equal to diagonal is 12.566360
The circumference of the circle with radius equal to diagonal is 25.132721
*/
