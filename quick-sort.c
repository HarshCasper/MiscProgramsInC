  
/* Quick Sort is one of the most popular Sorting Algorithms out there in the field of Programming designed and implemented here in
the C Programming Language demonstrating a Time Complexity of O(nlog(n)) in its Best Case while O(n^2) in it's worst case making it
significantly faster than many popular Sorting Algorithms. It follows the "Divide and Conquer" paradigm where it divides the array into
two equal halves as it is easier to sort them, with a Pivot element near the middle of array allowing to elements to move to their apt
position. The primary disadvantage of such an array is the use of Recursion which leads to High Stack Consumption. */

#include <stdio.h>
void quicksort(int num[100],int a,int b) //We will Sort our Array here
{
    int i,j,piv,t;
    if(a<b)
    {
        i=a;
        piv=a;
        j=b;
        while(i<j)
        {
            while(num[i]<=num[piv] && i<b)
            {
                i++; //Incrementing the i variable
            }
            while(num[j]>num[piv])
            {
                j--; //Incrementing the j variable
            }
            if(i<j) //Checking the condition and further swapping
            {
                t=num[i];
                num[i]=num[j];
                num[j]=t;
            }
        }
        t=num[piv];
        num[piv]=num[j];
        num[j]=t;
        quicksort(num,a,j-1); //Implementing Recursion now
        quicksort(num,j+1,b);
        
    }
}
int main()
{
    int k,n,number[100];
    printf("Enter the number of elements you wish to enter \n");
    scanf("%d",&n);
    printf("Enter the elements \n");
    for(k=0;k<n;k++)
    {
        scanf("%d",&number[k]);
    }
    quicksort(number,0,k-1);
    printf("Sorted Elements are \n");
    for(k=0;k<n;k++)
    {
        printf("%d \n",number[k]);
    }
    return 0;
} //End of Program
