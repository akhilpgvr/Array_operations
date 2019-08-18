#include<stdio.h>
int main()
{
 int a[10],i,pos,num,add;
 printf("Enter the number of elements\t");
 scanf("%d",&num);
 printf("Enter the elements in to array");           #Inputing number of elements in to anarray
 for(i=0;i<num;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("Enter the position to which the element to be entered\t");           #Inputing the position of element for adding 
 scanf("%d",&pos);
 printf("Enter the element for adding\t");            #Inputing the element for adding to the respective positions
 scanf("%d",&add);
 for(i=num;i>=pos-1;i--)              
 {
  a[i+1] = a[i];                          #replacing the elements inthe array by adding their positions by 1
 }
 a[i+1]=add;                        #If the position is reached the number is added to the respective positions
 printf("The required array is");
 for(i=0;i<num+1;i++)
 {
  printf(" %d",a[i]);
 }
}
