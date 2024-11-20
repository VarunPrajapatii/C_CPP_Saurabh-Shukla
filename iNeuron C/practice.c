/*75(left arrow)
72(up arrow)
77(right arrow)
80(down arrow)*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    label:
        printf(" ");
    char name[20];
    int i,j,k=1,move=10,a[4][4]={1,2,3,4,5,6,7,8,9,10,12,15,13,14,11,0},x=3,y=3,*p,choose,temp,n=0,t=0,ch1;
    int b[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,0},c,d;
    char replay;
    printf("Enter your Name : ");
    fgets(name,20,stdin);
    system("cls");
    printf("                                                  NUMBER SHIFTING GAME");
    printf("\n");
    printf("          #RULES OF THIS GAME\n\n");
    printf("Rule 1:- You can move only 1 step at a time with the arrow key.\n");
    printf("     Move up    : By up arrow key \n");
    printf("     Move down  : By down arrow key \n");
    printf("     Move left  : By left arrow key \n");
    printf("     Move right : By right arrow key \n\n");
    printf("Rule 2:- You can move numbers at an empty position only.\n\n");
    printf("Rule 3:- For each valid move : your total number of moves will decrease by 1.\n\n");
    printf("Rule 4:- \n");
    printf("           WINNING SITUATION : \n\n");
    printf("Number in a 4*4 matrix should be in order from 1 to 15 \n\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(i<2)
            {
              printf(" %d    ",b[i][j]);
            }
            else if(i==2)
            {
                printf(" %d   ",b[i][j]);
            }
            else
            {
                printf("%d    ",b[i][j]);
            }

        }
        printf("\n");
    }
    printf("\n\n");
    printf("Rule 5:- you can Exit this Game at any time by press E or e \n");
    printf("so try to win in minimum no. of moves \n\n");
    printf("       Happy Gaming , Good Luck \n\n");
    printf("Enter 1 to start........."); //and then press enter to continue.
    int m;
    scanf("%d",&m);
    fflush(stdin);
    system("cls");
    printf(" Player name : %s",name);
    for(i=1;i<=move;i++)
    {
      //p=&a[y];
      printf(" Move Remaining : %d ",move-i+1);
      printf("                      ||NOTE :- Here empty space represented by 0 ||\n\n");
      for(j=0;j<4;j++)
     {
        for(k=0;k<4;k++)
        {
             if(j<2)
             {
                 printf("  %d    ",a[j][k]);
             }
             else if(j==2)
             {
                 printf("  %d   ",a[j][k]);
             }
             else
             {
                 printf(" %d    ",a[j][k]);
             }

        }
        printf("\n");
     }
     j=0; k=0;
     for(c=0;c<4;c++)
     {
         for(d=0;d<4;d++)
         {
             if(a[c][d]==b[c][d])
             {
                 if(c==3&&d==3)
                 {
                     t=1;
                 }
                 else
                   continue;
             }
             else
             {
                 n=1;
                break;
             }
         }
         if(n)
         {
             n=0;
            break;
         }
     }
     if(t)
     {
         printf("YOU WIN");
         break;
     }
     ch1 = getch();
     if(ch1=0||ch1 == 0xE0)
         ch1= getch();
     if(ch1==69||ch1==101)
      {
          break;
      }                                                  //69 or 101
     switch(ch1)
     {
     case 69:
        exit(0);
     case 72:
        //swap(a[y],a[y-4]);
        temp=a[x][y];
        a[x][y]=a[x-1][y];
        a[x-1][y]=temp;
         x=x-1;
         break;
     case 75:
        //swap(a[y],a[y-1]);

        temp=a[x][y];
        a[x][y]=a[x][y-1];
        a[x][y-1]=temp;
        y--;
        break;
     case 77:
        //swap(a[y],a[y+1]);

         temp=a[x][y];
        a[x][y]=a[x][y+1];
        a[x][y+1]=temp;
         y++;
         break;
     case 80:
        //swap(a[y],a[y+4]);

        temp=a[x][y];
        a[x][y]=a[x+1][y];
        a[x+1][y]=temp;
         x=x+1;
         break;
     case 101:
        exit(0);
     }
     system("cls");
    }
    if(i==move+1)
    {
        printf("YOU LOSE!!\n\n");
        printf("Want to play Game again ?\n");
        printf("Enter y for replay else e or E for exit ");
        scanf("%c",&replay);
        if(replay=='e'||replay=='E')
            exit(0);
        else if(replay=='y')
            goto label;
    }
}