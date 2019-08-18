#This is the code for inserting elemnt to array using C


#include<stdio.h>
int main()
{
 int a[10],i,pos,num,add;
 printf("Enter the number of elements\t");            #Inputing number of elements in to an array
 scanf("%d",&num);
 printf("Enter the elements in to array");
 for(i=0;i<num;i++)
 {
  scanf("%d",&a[i]);                  #Inputing elements in to an array
 }
 printf("Enter the position to which the element to be entered\t");           #Inputing position 
 scanf("%d",&pos);
 printf("Enter the element for adding\t");      #Inputing element for adding
 scanf("%d",&add);
 for(i=num;i>=pos-1;i--)
 {
  a[i+1] = a[i];              #Replacing the elemnts of i'th position to i+1'th position 
 }
 a[i+1]=add;
 printf("The required array is");
 for(i=0;i<num+1;i++)
 {
  printf(" %d",a[i]);           #Displaying array
 }
}
