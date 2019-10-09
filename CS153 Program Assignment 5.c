/*Dice Game
2/28/19 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int maxOfThree(int a,int b,int c)
{
if(a>b && a>c)
return a;

else if(b>a && b>c)
return b;

else
return c;
}

int maxOfFour(int a, int b, int c, int d)
{
int max = a;

if(b>max)
max=b;
if(c>max)
max=c;
if(d>max)
max=d;

return max;
}

int main()
{
int userTwice = 0;

int hdice1, hdice2, hdice3;
int cdice1, cdice2, cdice3, cdice4;

int hMax, cMax;

int i;
int humanScore=0, computerScore=0;

char choice, temp;

srand(time(NULL));

for(i=1; i<=7; i++)
{
printf("\n\n\n Round %d \n\n Player's Turn: (hit enter) ", i);
scanf("%c", &temp);

hdice1 = (rand() % 6) + 1;
hdice2 = (rand() % 6) + 1;
hdice3 = (rand() % 6) + 1;

hMax = maxOfThree(hdice1, hdice2, hdice3);

printf("\n You throw: %d %d %d ", hdice1, hdice2, hdice3);
printf("\n The maximum is: %d ", hMax);

printf("\n\n Do you wish to throw again? [Y or N]: ");
scanf("%c", &choice);

if(choice == 'Y')
userTwice = 1;
else
userTwice = 0;

if(userTwice == 1)
{

hdice1 = (rand() % 6) + 1;
hdice2 = (rand() % 6) + 1;
hdice3 = (rand() % 6) + 1;

hMax = maxOfThree(hdice1, hdice2, hdice3);

printf("\n You throw: %d %d %d ", hdice1, hdice2, hdice3);
printf("\n The maximum is: %d ", hMax);

cdice1 = (rand() % 6) + 1;
cdice2 = (rand() % 6) + 1;
cdice3 = (rand() % 6) + 1;
cdice4 = (rand() % 6) + 1;

cMax = maxOfFour(cdice1, cdice2, cdice3, cdice4);

printf("\n\n Computer's Turn \n Computer throws: %d %d %d %d ", cdice1, cdice2, cdice3, cdice4);
printf("\n The maximum is: %d ", cMax);
}
else
{
cdice1 = (rand() % 6) + 1;
cdice2 = (rand() % 6) + 1;
cdice3 = (rand() % 6) + 1;

cMax = maxOfThree(cdice1, cdice2, cdice3);

printf("\n\n Computer's Turn \n Computer throws: %d %d %d ", cdice1, cdice2, cdice3);
printf("\n The maximum is: %d ", cMax);
}

if(hMax > cMax)
{
printf("\n\n Human Wins \n");
humanScore += 1;
}
else
{
printf("\n\n Computer Wins \n");
computerScore += 1;
}

printf("\n Human: %d \t Computer: %d \n", humanScore, computerScore);
}

if(humanScore > computerScore)
printf("\n\n WINNER!! The human wins the game \n\n");
else
printf("\n\n WINNER!! The computer wins the game \n\n");

return 0;
}
