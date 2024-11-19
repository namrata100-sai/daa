#include<stdio.h>
int main()
{
     int m[10][10]={0};
     int r,c,sumIn,sumOut,n,v,i;
     
     printf("how many vertices");
    scanf("%d",&n);
  
    for(r=0;r<n;r++)
    {
       for(c=0;c<n;c++)
      {
       if(r!=c)
      {
         printf("Is there an edge between vertex %d and %d(1/0):",r,c);
         scanf("%d",&m[r][c]);
      }
      else
      {
         m[r][c]=0;
      }
      }
     }     
     printf("--------------Adjacency Matrix--------------\n");
    for(r=0;r<n;r++)
    {
      for(c=0;c<n;c++)
      {
       printf("%d\t ",m[r][c]);
      }
      printf("\n");
    }
      printf("\n\n Vertex \t InDegree \t OutDegree\n");
      for(v=0;v<n;v++)
      {
        sumIn = sumOut =0;
        for(i=0;i<n;i++)
        {
            sumIn +=m[i][v];
            sumOut += m[v][i];
        }
            printf("%d\t\t%d\t\t%d\n",v,sumIn,sumOut);
      }
      return 0;
}
