#include <stdio.h>
#include <conio.h>

void fire(int n)

{

   int i,j,k,l,m;

   for(i = 0; i < n ; i++){

       for(j = 0 ; j < i; j++){

           printf(" ");

       }

       for(k = 0; k < n - i ; k++)

       {

           if(k == 0 ||k == n-i-1)

               printf("* ");

           else

               printf("  ");

       }

       printf("\n");

   }

}

void triangle(int n)

{

   int i,j,k;

   for(i = 0; i <= n ; i++){

       for(j = 0 ; j < n - i; j++){

           printf(" ");

       }

       for(k = 0 ; k < i; k++){

           printf("* ");

       }

       printf("\n");

   }

}

void main()

{

   int n;

   printf("Enter the value of n: ");

   scanf("%d",&n);

	printf("\n");   fire(n);

   triangle(n);

   getch();

}
