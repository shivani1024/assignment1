/*4. Write a program that:
a) Reads from end user using suitable messages a integer k , where k represents count
of digits in a integer
b) Find the probability p1, that the k-digit number does NOT contain the digits 0 , 5 , 9
c) Print with suitable message the probability p1
d) Now consider digit set as only d = { 0 , 1 , 3 , 4 , 5 , 7 , 9 }
e) Find the probability p2, that the a k-digit number does NOT contain the digits 0 , 5 , 9
f) Print with suitable message the probability p2
g) Print what conclusion can be drawn with respect to p1 and p2 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int k;
    float p1,p2;                                                   //declare variables
    int d = {0,1,3,4,5,7,9};
    printf("Enter the number of digits k:\t");
    scanf("%d",&k);
    p1 =  pow(0.7,k);                                          //out of 10 digits 0 to 9...0,5,9 (3) are to be excluded
    printf("The probability p1=%f\n",p1);
    p2 = pow(0.57142,k);                                            //it contains only 7 numbers out of those, 3 are excluded
    printf("The probability p2=%f\n",p2);                           // 0.57142 = 4/7
    printf("p1>p2");
}

/*Sample output
Enter the number of digits k: 5
The probability p1=0.168070
The probability p2=0.060922
p1>p2
*/
