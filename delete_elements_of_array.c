//This code is to deleting element in an array 


#include<stdio.h>
int main()
{
 int a[10],i,pos,num;
 printf("Enter the number of elements\t");
 scanf("%d",&num);                                      //Inputng number of elements 
 printf("Enter the elements in to array");
 for(i=0;i<num;i++)
 {
  scanf("%d",&a[i]);              //Inputing elements of array
 }
 printf("Enter the position for deleting\t");
 scanf("%d",&pos);                          //Inputing the position of element for deleting
 for(i=pos-1;i<=num;i++)
 {
  a[i] = a[i+1];                   //Replacing i+1'th element by i'th element
 }
 printf("The required array is");
 for(i=0;i<num-1;i++)
 {
  printf(" %d",a[i]);                   //displaying array
 }
}
