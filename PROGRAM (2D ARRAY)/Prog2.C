/* Wap to create 3X3 Matrix And Check it Is Diagonal matrix or Not
   Date:21st February 2022*/

#include<stdio.h>
#include<conio.h>
void main()
{
     int m1[3][3],i,j;
     clrscr();
     for(i=0;i<3;i++)
     {
       for(j=0;j<3;j++)
	{
	printf("\n Enter Value for m1[%d][%d]:",i,j);
	scanf("%d",&m1[i][j]);
	}
     }
     clrscr();
       for(i=0;i<3;i++)
       {
	for(j=0;j<3;j++)
	 printf("%d\t",m1[i][j]);
	 printf("\n");
	}
	if(m1[1][0]==0 || m1[2][0]==0 || m1[2][1]==0 || m1[0][1]==0 || m1[0][2]==0 || m1[1][2]==0)
	{
	printf("\n It is a Diagonal Matrix");
	}
	else
	{
	printf("\n It is Not a Diagonal Matrix");
	}
	getch();
}