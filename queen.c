#include<stdio.h>
#include<stdbool.h>

void printSolution(char board[][10],int n)
{
    for(int i =0 ;i<n ;i++){
       for(int j =0;j<n;j++)
         {
          printf("%c",board[i][j]);
          }
        printf("\n");
   }
}
bool isSafe(char board[][10],int row,int column,int n )
{
     int i,j;
     for(i=0;i<column;i++)
     {
        if(board[row][i]=='Q')
        return false;
     }
     for(i=row,j=column;i>= 0 && j>=0;  i--,j-- )
    {
       if(board[i][j]=='Q')
       return false;
    }
    for(i=row ,j=column ;i<n  && j>=0;i++,j--)
   {
     if(board[i][j]=='Q')
     return false;
   }
      return true;
}
 bool solveNQueens(char board[][10],int column , int n)
{
    if(column >=n)
      return true;
    for(int i =0 ;i<n;i++)
   {
      if(isSafe(board ,i, column,n))
     {
       board[i][column] ='Q';
      
     if(solveNQueens(board,column+1,n))
       return true;
     board[i][column] ='-';
     }
   }
   return false;
}
  int main()
{
    int n;
    printf("Enter the value of n:");
   scanf("%d",&n);

   char board[10][10];
  for(int i =0;i<n;i++)
   {
   for(int j =0;j<n;j++)
  {
     board[i][j]='-';
  }
   }
  if(solveNQueens(board,0,n))
    printSolution(board,n);
 else
    printf("No Solution exits\n");
    return 0;
}
