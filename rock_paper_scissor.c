#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int Generate_Random_Number(int n)
{
    srand(time(NULL)); //srand takes seed as an input and is define inside stdlib.h
    return rand()+1 & n;
}

int greater(char c1,char c2)
{
    //it returns 1 if c1>c2 and returns 0 if c1 < c2 . if c1==c2 it returns -1
    if (c1==c2)
    {
        return -1;
    }
    if ((c1=='r')&&(c2=='s'))
    {
        return 1;
    }
    else if ((c2=='r')&&(c1=='s'))
    {
        return 0;
    }

        if ((c1=='p')&&(c2=='r'))
    {
        return 1;
    }
    else if ((c2=='p')&&(c1=='r'))
    {
        return 0;
    }

        if ((c1=='s')&&(c2=='p'))
    {
        return 1;
    }
    else if ((c2=='s')&&(c1=='p'))
    {
        return 0;
    }

}

int main()
{
    int PlayerScore = 0, CompScore = 0, temp;
    char player_char,comp_char;
    char dict[]={ 'r' , 'p' , 's'};
    char name[44];
    printf("Enter your name \n");
    gets(name);
    printf("Welcome %s \n",name);
    printf("welcome to the rock paper scissor game \n");

    for(int i=0; i<3; i++)
    {
      //Take Player one's input
      printf("player's turn \n");
      printf(" Choose 1 for Rock \n Choose 2 for Paper \n Choose 3 for Scissor \n press any other number except 1,2,3 to go out this game\n");
      scanf("%d",&temp);
      if (temp>3)
          {
              break;
          }
      getchar();
      player_char = dict[temp-1];
      printf("you choose %c\n\n",player_char);

      //Generate computer's input
      printf("computer's turn \n");
      printf(" Choose 1 for Rock \n Choose 2 for Paper \n Choose 3 for Scissor \n ");
      temp = Generate_Random_Number(3) + 1;
      comp_char = dict[temp-1];
      printf("computer choose %c\n\n",comp_char);


      if(greater(comp_char,player_char)==1)
      {
          CompScore += 1;
          printf("computer win this round please play another round \n\n");
      }
      else if (greater(comp_char,player_char)== -1)
      {
          CompScore += 1;
          PlayerScore +=1;
          printf("this round was draw...... \n\n ");
      }
      else
      {
          PlayerScore += 1;
          printf("you win this round...... :) \n\n");
      }

     printf("You: %d\n\n Computer: %d\n\n",PlayerScore , CompScore);
    }

    if (PlayerScore > CompScore)
    {
        printf("you win .... :) ");
    }
    else if (PlayerScore<CompScore)
    {
        printf("you loose ..... :( ");
    }
    else if (PlayerScore=CompScore)
    {
        printf("its a draw ..... :| ");
    }

    return 0;
}
