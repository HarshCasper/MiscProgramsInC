/*Following Code is an implementation of the Rock, Papers and Scissors Game in C Programming Language played between the Player and
the Computer and is implemented by use of rand() to generate Random Numbers and then taking user input to check who has won. */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
void main()
{
int p,i,n,ch,player=0,computer=0;
clrscr();
printf("**********Welcome to the Rock, Papers & Scissors Game**********\n");
printf("How many rounds you wanna play? \n");
scanf("%d",&n);
printf("You will start the game now. Enter 0 for Rock, 1 for Papers and 2 for Scissors\n");
for(i=1;i<=n;i++)
{
printf("Enter your choice:\n");
scanf("%d",&ch);
switch(ch)
{
case 0:
srand(time(NULL));
p=rand()%3;
printf("Computer took out a %d \n",p);
if(p==1)
{
computer++;
printf("Computer won this round. Your score is %d while Computer's Score is %d \n",player,computer);
}
else if(p==2)
{
player++;
printf("You won this round. Your score is %d while Computer's Score is %d \n",player,computer);
}
else
{
printf("Its a Tie\n");
}
break;
case 1:
srand(time(NULL));
p=rand()%3;
printf("Computer took out a %d \n",p);
if(p==0)
{
player++;
printf("You won this round. Your score is %d while Computer's Score is %d \n",player,computer);
}
else if(p==2)
{
computer++;
printf("Computer won this round. Your score is %d while Computer's Score is %d \n",player,computer);
}
else
{
printf("Its a Tie\n");
}
break;
case 2:
srand(time(NULL));
p=rand()%3;
printf("Computer took out a %d \n",p);
if(p==0)
{
computer++;
printf("Computer won this round. Your score is %d while Computer's Score is %d \n",player,computer);
}
else if(p==1)
{
player++;
printf("Player won this round. Your score is %d while Computer's Score is %d \n",player,computer);
}
else
{
printf("Its a Tie\n");
}
break;
default:
printf("Invalid Option\n");
}
}
system("cls");
printf("**********Final Score**********\nYour Score: %d \nComputer's Score: %d\n",player,computer);
if(player>computer)
printf("******************You Won!\n");
else if(computer>player)
printf("******************Computer Won. Good Luck next time\n");
else
printf("******************WOAH! Its a Tie!!!\n");
getch();
}
