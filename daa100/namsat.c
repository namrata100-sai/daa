#include<stdio.h>
int main()
{
     float weight[50], profit[50], ratio[50],
     totalValue, temp , capacity , amount ;
     int n , i,j ;
    printf("Enter the number of items :");
    scanf("%d",&n);
   
    for(i=0;i<n;i++)
    {
        printf("Enter Weight and profit for item[%d] :\n",i);
        scanf("%f %f", &weight[i], &profit[i]);
    }
    printf("Enter the capacity of knapsack : \n");
    scanf("%f", &capacity);

    for(i=0;i<n;i++)
       ratio[i]= profit[i]/ weight[i];

   for(i=0 ; i<n ; i++)
       for(j= i+1 ; j<n ; j++)
          if(ratio[i]< ratio[j])
          {
              temp = ratio[j];
              ratio[j] = ratio[i];
              ratio[i]= temp;


              temp = weight[j];
              weight[j]= weight[i];
              weight[i] = temp;

              
          }    
             printf("Knapsack probles using Greedy Algorithm: \n");
              printf("\n\n p[i]\t\t w[i]\t\t ratio[i]\n");
              for(i=0;i<n;i++)
                  printf("%f\t %f\t %f\t\n",weight[i], profit[i],ratio[i]);
              for(i=0;i<n ;i++)
             {
                    if(weight[i]>= capacity)
                    break;
                    else
                   {
                     totalValue = totalValue + profit[i];
                     capacity = capacity - weight[i]; 
                   }
             }
             if(i<n)
                 totalValue = totalValue+(ratio[i]* capacity);
                 printf("\n The Maximum value is : %f\n", totalValue);
                return 0;
                  
          }

