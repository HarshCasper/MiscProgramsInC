/* This is the solution to a problem given where the user enters a numeric code based upon the things he is buying and the bill 
is returned to him. For more information about the problem look up in the ReadMe Section. */

#include <stdio.h>
#include <conio.h>
void main() //main() starts
{
long int code;
printf("Enter the code: \n");
scanf("%li",&code);
int n;
float cost=0.0;
while(code!=0)
{
n=code%10; //Extracting the Last Digit from the Code
{          //Implementing an If-Else Ladder to assign the amount
if(n==1)
cost=cost+3.50;
else if(n==2)
cost=cost+2.50;
else if(n==3)
cost=cost+4.00;
else if(n==4)
cost=cost+3.50;
else if(n==5)
cost=cost+1.75;
else if(n==6)
cost=cost+1.50;
else if(n==7)
cost=cost+2.25;
else if(n==8)
cost=cost+3.75;
else if(n==9)
cost=cost+1.25;
else
cost=cost+0;
}
code=code/10; //Pushing out the Last Digit from the Code
}
printf("Amount is $ %f",cost);  //Printing the Final Amount
getch();
} //Program Ends

