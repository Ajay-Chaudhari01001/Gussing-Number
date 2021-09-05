#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<process.h>
void menu();
void easylevel();
void mediumlevel();
void hardlevel();

int no,choice,numguesses=1,guess; //Global Variable declared
int permission=1;

int main()
{
    menu();  
    return 0;
}
void menu()
{
    system("cls");.  //Clear screen
    system("COLOR 70");. //change foreground and background color
    printf("\t\t\tCHOOSE LEVEL AND START THE GAME\n\n");
    printf("\n\t\t\t1.  Easy Level Between 1 to 100\n");
    printf("\n\t\t\t2.  Medium Level Between 1 to 300\n");
    printf("\n\t\t\t3.  Hard Level Between 1 to 500\n");
    printf("\n\t\t\t4.  EXIT ");
    printf("\n\n\n\t\t\t\tCHOOSE GAME LAVEL :");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        easylevel();
        break;
    case 2:
        mediumlevel();
        break;
    case 3:
        hardlevel();
        break;
    case 4:
        exit(1);
    default:
        printf("\n PLEASE ENTER VALID CHOICE NUMBER ");
        break;
    }
}
void easylevel()
    {
        system("cls");.        // Clear screen
        system("COLOR 0b");   //change foreground and background color
        printf("\t\t\t*****************");
        printf("\n\t\t\tP L A Y G A M E ");
        printf("\n\t\t\t*****************");
        no=rand()%100;         // Call random function to generate random number for play game
        srand(time(0));
        do{
     printf("\n\n\n\t\tGuess Number Between 1 to 100\n");
     scanf("\t\t\t%d",&guess);
            if(guess>no)
            {
                printf("\n\n\t\tLOW NUMBER PLEASE\n");
            }
            else if(guess<no)
            {
                printf("\n\n\t\tHIGH NUMBER PLEASE\n");
            }
            else{
                    // when you guess correct number then print this line and you game win
                printf("************ You Win In %d GUESS  *************",numguesses);
            }
            if(guess==no)
            {
              printf("\n\n PRESS 1 FOR CONTINUE AND PRESS ANY NUMBER FOR GO BACK MENU :");
              scanf("%d",&permission);
             if(permission==1)
             {
                 easylevel();
             }
             else
             {
                 menu();
             }
            }
             numguesses++;
        }while(guess!=no);
    }
void mediumlevel()
    {
        system("cls");
        system("COLOR 0e");
        printf("\t\t\t*****************");
        printf("\n\t\t\tP L A Y G A M E ");
        printf("\n\t\t\t*****************");
        no=rand()%300;
        srand(time(0));
        do{
     printf("\n\n\t\tGuess Number Between 1 to 300\n");
     scanf("%d",&guess);
            if(guess>no)
            {
                printf("\n\n\t\tLOW NUMBER PLEASE\n");
            }
            else if(guess<no)
            {
                printf("\n\n\t\tHIGH NUMBER PLEASE\n");
            }
            else{
                printf("********  You Win In %d GUESS  **************",numguesses);
            }
            if(guess==no)
            {
              printf("\n\n PRESS 1 FOR CONTINUE AND PRESS ANY NUMBER FOR GO BACK MENU :");
              scanf("%d",&permission);
             if(permission==1)
             {
                 mediumlevel();
             }
             else
             {
                 menu();
             }
            }
             numguesses++;
        }while(guess!=no);
    }
void hardlevel()
    {
        system("cls");
        system("COLOR 0c");
        printf("\t\t\t*****************");
        printf("\n\t\t\tP L A Y G A M E ");
        printf("\n\t\t\t*****************");
        no=rand()%500;
        srand(time(0));

               do{
     printf("\n\n\t\tGuess Number Between 1 to 500\n");
     scanf("%d",&guess);
            if(guess>no)
            {
                printf("\n\n\t\tLOW NUMBER PLEASE\n");
            }
            else if(guess<no)
            {
                printf("\n\n\t\tHIGH NUMBER PLEASE\n");
            }
            else{
                printf("*************** You Win In %d GUESS ***************",numguesses);
            }
            if(guess==no)
            {
              printf("\n\n PRESS 1 FOR CONTINUE AND PRESS ANY NUMBER FOR GO BACK MENU :");
              scanf("%d",&permission);
             if(permission==1)
             {
                 hardlevel();
             }
             else
             {
                 menu();
             }
            }
             numguesses++;
        }while(guess!=0);
    }

