/*3. Consider three dimension system. A point in three dimension system is represented as ( x , y , z ) ,
where x , y and z are the x , y and z coordinates of the point in three dimension space respectively.
Write a program that:
a) Reads from end user using suitable messages :
i. Point p1 ( x1 , y1 , z1 ) , and
ii. Point p2 ( x2 , y2 , z2 )
b) Prints with suitable message all partial derivatives between the points ( p1 , p2 )*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x1,x2,y1,y2,z1,z2,dx,dy,dz,dxy,dyz,dxz,dxyz;                                      //declare the variables

    printf("Enter the co-ordinates of point as x1,y1,z1\n");
    scanf("%d,%d,%d",&x1,&y1,&z1);                              //read the point p1
    printf("Enter the co-ordinates of point as x2,y2,z2\n");
    scanf("%d,%d,%d",&x2,&y2,&z2);                              //read point p2
    dx = x2-x1;                                                 //difference between two x co-ordinates
    dy= y2-y1;
    dz = z2-z1;
    dxy = dy-dx;
    dyz = dz-dy;
    dxz = dz-dx;
    dxyz = dxy-dyz;
    printf("The partial derivatives between (p1,p2) are \ndx= %d\ndy= %d\ndz= %d\ndxy= %d\ndyz= %d\ndxz= %d\ndxyz= %d\n",dx,dy,dz,dxy,dyz,dxz,dxyz);
}

/*Sample output
Enter the co-ordinates of point as x1,y1,z1
2,4,5
Enter the co-ordinates of point as x2,y2,z2
3,6,8
The partial derivatives between (p1,p2) are
dx= 1
dy= 2
dz= 3
dxy= 1
dyz= 1
dxz= 2
dxyz= 0 */
