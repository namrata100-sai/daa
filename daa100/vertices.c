#include<stdio.h>
int n;
void printGraph(int adj[n][n])
{
       for(int i=0;i<n;i++)
       {
          for(int j=0; j<n;j++)
          {
           printf("%d",adj[i][j]);
          }
          printf("\n"); 
       }
}
int main()
{
       int s,d;
       printf("No of Vertices");
       scanf("%d",&n);
       int adj[n][n];
       for(int i=0;i<n;i++)
           for(int j=0;j<n;j++)
               adj[i][j]=0;
       while(s!=-1 && d!=-1)
       {
              printf("Enter an edge from node (0 to %d) to node(0 to %d):",n,n);
              scanf("%d \n %d",&s,&d);
              adj[s][d]=1;
              adj[d][s]=1;
       }
       printGraph(adj);
       return 0;
}
