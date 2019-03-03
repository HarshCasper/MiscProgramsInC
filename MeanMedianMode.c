/*This is a simple implementation of the concept of Mean, Median and Mode using Arrays to store the elements. Note that Multimodal
Elements are not supported and in case of lack of any mode, the smallest element in the array is displayed. */


#include <stdio.h>
#include <conio.h>
void quicksort(int arr[100],int lower,int upper); //Implementing the Quick Sort Algorithm
void main() //main() function starts
{
int mid; //To Calculate the Middle Element
int a[100],sum=0;
int n;
int i,j;
float result;
printf("Enter the number of elements \n");
scanf("%d",&n);
printf("Enter the elements \n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i]; //Calculating the Sum
}
result=(float)sum/n; //Calculating the Mean
printf("The mean is %f \n",result);
/////////////////////////////////////////////////
quicksort(a,0,n-1); //Sorting the Array to calculate the Median
if(n%2!=0) //Odd Numbers have only one median while Even Numbers have two medians for whom we need to display the average
{
mid=(int)n/2;
printf("Median is %d \n",a[mid]); //Printing the Middle Element
}
else
{
mid=(int)n/2;
float med=(float)(a[(n-1)/2]+a[mid])/2; //Calculating the average of two Median elements
printf("The two medians are %d and %d . Their average is %f",a[(n-1)/2],a[mid],med); //Printing the Two Medians and their average
}
/////////////////////////////////////////////////
int max1=0,max2=0;
for(i=0;i<n;i++)
{
int count=0; //Calculating the number of instances of the particular element
for(j=0;j<n;j++)
{
if(a[i]==a[j])
++count; //Incrementing the Count Variable
}
if(count>max2) //Checking for the element which has maximum number of instances
{
max2=count; //Assigning it to a new variable
max1=a[i];  //Assigning the Variable
}
}
printf("\nMode is %d",max1);
getch();
}
void quicksort(int arr[25],int lower,int upper) //Implementing the Quicksort Algorithm. 
{
int i,j,pivot,temp;
if(lower<upper){
pivot=lower;
i=lower;
j=upper;
while(i<j)
{
while(arr[i]<=arr[pivot]&&i<upper)
{
i++;
}
while(arr[j]>arr[pivot])
{
j--;
}
if(i<j)
{
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
temp=arr[pivot];
arr[pivot]=arr[j];
arr[j]=temp;
quicksort(arr,lower,j-1);
quicksort(arr,j+1,upper);
}
}//Program Ends
