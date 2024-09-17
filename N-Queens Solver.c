
#include<stdio.h>
#include<math.h>
int number,shingle[];
int main()
{
int x,y,z;
int QUEEN(int row,int x);
printf("Enter number of Queens:");
scanf("%d",&x);
QUEEN(1,x);
return 0;
}
//function to check for sutable positioning of queen
int QUEEN (int row,int x)
{
int column;
for(column=1;column<=x;++column)
{
  if(AREA(row,column))
  {
   shingle[row]=column;
   if(row==x)
   PR (x);
   else
    QUEEN(row+1,x);
  }
}
}
//function to check inconsistency
int AREA (int row,int column)
{
int y;
for(y=1;y<=row-1;++y)
{
  if(shingle[y]==column)
   return 0;
  else
   if(abs(shingle[y]-column)==abs(y-row))
    return 0;
}
return 1;
}

//function print solution
void PR (int x)
{
int y,z;
printf("\nSolution %d:\n",++number);

for(y=1;y<=x;++y)
  printf("\t%d",y);

for(y=1;y<=x;++y)
{
  printf("\n\n%d",y);
  for(z=1;z<=x;++z)
  {
   if(shingle[y]==z)
    printf("\tQ");
   else
    printf("\t~");
  }
}
}


