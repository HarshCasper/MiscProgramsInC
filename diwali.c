#include <stdio.h>

void lightPattern(int n) {

   int i,j,k,m;

   for(i=0; i<n; i++){

       for(j=0; j<n*2 + i; j++) {

           printf(" ");

       }

       for (k =0; k <i-1; k++){

           printf("* ");

       }

       printf("\n");

   }

   for (i=0; i<n-4;i++){

       for(j=0;j<n*3  -1;j++){

           printf(" ");

       }

       for(k=0;k<n-1;k++){

           printf("* ");

       }

       printf("\n");

   }

   for (i=0; i<n-4;i++){

       for(j=0;j<n*3 -1;j++){

           printf(" ");

       }

       for(k=0;k<n-1;k++){

           printf("* ");

       }

       printf("\n");

   }

   for(i=0; i<n-1; i++){

       for(j=0; j< n*3 + i - 1; j++) {

           printf(" ");

       }

       for (k =0; k < n - i -1; k++){

           printf("* ");

       }

       printf("\n");

   }

}

void basePattern(int i){

   int j,k , m;

   for (j =0;j<i;j++){

       for ( m = 0; m < j + 1 ; m++){

           printf("   ");

       }

       for ( k = 0 ; k < i - j; k++){

           printf(" * * *");

       }

       printf("\n");

   }

}

int main()

{

   int n = 0;

   printf("Enter the value of n [where n >= 5]: ");

   scanf("%d",&n);

   lightPattern(n);

   basePattern(n);

   return 0;

}
