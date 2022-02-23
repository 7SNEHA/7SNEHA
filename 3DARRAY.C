/*wap to enter to 3 by 3 matrics and print the sum of it
date:21-2-22
name:sneha*/

#include<stdio.h>
#include<conio.h>
void main()
{
      int  m1[3][3],m2[3][3],m3[3][3],i,j,s;
      clrscr();
      //logic input value into 2d array//
      for(i=0;i<3;i++) //row//
      {
	   for(j=0;j<3;j++) //colum//
	   {
		  printf("\n Enter value A[%d][%d]:",i,j);
		  scanf("%d",&m1[i][j]);
	   }
      }
      for(i=0;i<3;i++) //row//
      {
	   for(j=0;j<3;j++) //colum//
	   {
		  printf("\n Enter value A[%d][%d]:",i,j);
		  scanf("%d",&m2[i][j]);
	   }
      }
      //print 2d array//
      for(i=0;i<3;i++)//row//
      {
	   for(j=0;j<3;j++)//colum//
	   {
		  printf("%d\t",m1[i][j]);

	   }
	   printf("\n");
      }
//      printf("Enter the addition of value");
      for(i=1;i<3;i++) //row//
      {
	   for(j=0;j<3;j++) //colum//
	   {
		  if(i==j)
		//  printf("\n Enter value m3[%d][%d]:",i,j);
		  s=s+m1[i][j]);
	   }
	   printf("\n");
      }
      getch();
}
