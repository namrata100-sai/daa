#include<stdio.h>
int quicksort(int[],int,int);
int partition(int[],int,int);

void main()
{
      int a[10],high,low,n,i,j;
      printf("How many elements:");
      scanf("%d",&n);

      printf("Enter the elements :");
      for(i=0;i<n;i++)
      {
          scanf("%d",&a[i]);
      }
      low =0;
      high = n-1;
    quicksort(a,low,high);
    printf("\n The sorted elements :\n");
   for(i=0;i<n;i++)
   {
       printf("\n %d",a[i]);
   }
}
int quicksort(int a[],int low,int high)
{
      int keypos;
      if(low>high)
          return 0;
     keypos = partition(a,low,high);
     quicksort(a,low,keypos-1);
     quicksort(a,keypos+1,high);
 
}
int partition(int a[],int low,int high)
{
      int i, j , key ,temp, flag;
      key =a[low];
      i=low+1;
     j=high ;
     flag=1;
     while(flag ==1)
     {
       while((a[i]<key )&&(i<j))
             i=i+1;
         while(a[j]>key)
           j=j-1;
          if(i<j)
           {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
           }
          else
              flag =0;
       }
     
     temp=a[low];
     a[low]=a[j];
    a[j]=temp;
       return j;
}
