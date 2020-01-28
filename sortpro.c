#include<stdio.h>
void selection_sort ();
int t[100];
int n; 
int main()
{ 
int m;
printf("enter the number of elements in an array\n");
scanf("%d",&n);
printf("enter the elements in an array\n");
for(m=0;m<n;m++)
{
scanf("%d",&t[m]);
}
selection_sort();
printf("the sorted elements are:\n ");
for(m=0;m<n;m++)
{
printf("%d\n ",t[m]);
}
printf("\n");
return 0;
}
void selection_sort() 
{ 
    int i, j, min; 
   
    for (i = 0; i < n; i++) 
    { 
        min= i; 
        for (j = i+1; j < n; j++) 
         {
          if (t[j] < t[i]) 
          {
            min = j;
           } 
       } 
    if(t[i]!=t[min])
    {
        int temp =t[i]; 
       t[i]= t[min]; 
       t[min] = temp; 
    }
     }
} 
  

