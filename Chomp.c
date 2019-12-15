#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void end();

void main()
{

        printf("Enter the length of square grid\n");
        int n;
        scanf("%d",&n);
        int count = 0;


        int array[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                array[i][j] = count;
                count++;
            }
        }

        array[0][0] = 0;
        int pcount=0;
        int zerocount =0;


        label:

            system("cls");
            printf("\033[1;33m");
            printf("\n\t\t\t\t\t\t\t~ CHOMP ~");
            printf("\033[0m");
            printf("\n\n\n\n");
            for(int i=0;i<n;i++)
            {
                printf("\t\t\t\t");
                for(int j=0;j<n;j++)
                {
                    if(array[i][j] != 0)
                    printf("%d\t",array[i][j]);

                    else
                    {
                        printf("\033[1;32m"); //Set the text to the color red
                        printf(".\t",array[i][j]);
                        printf("\033[0m"); //Resets the text to default color
                    }

                }/*
                printf("\n\t\t\t\t");
                for(int i=0;i<n;i++)
                {
                    printf("_______\t");
                }*/
                printf("\n\n");
            }




         if(pcount%2==0)
         {
             int input;
             printf("Player 1: Enter your number\n");
             scanf("%d",&input);



             for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    if(array[i][j] == input && array[i][j] != 0)
                    {
                        for(int a=i;a<n;a++)
                        {
                            for(int b=j;b<n;b++)
                            {
                                array[a][b] = 0;
                            }
                        }


                        pcount++;
                    }
                }
            }



         }

         else if(pcount%2==1)
         {
             int input;
             printf("Player 2: Enter your number\n");
             scanf("%d",&input);

             for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    if(array[i][j] == input && array[i][j] != 0)
                    {
                        for(int a=i;a<n;a++)
                        {
                            for(int b=j;b<n;b++)
                            {
                                array[a][b] = 0;
                            }
                        }
                        pcount++;
                    }

                }
            }
         }

         for(int i=0;i<n;i++)
         {
             for(int j=0;j<n;j++)
             {
                 if(array[i][j]==0)
                 zerocount++;
             }
         }

         if(zerocount == n*n)
         {
             if(pcount%2==0)
             {
                system("cls");
                printf("\033[1;33m");
                printf("\n\t\t\t\t\t\t\t~ CHOMP ~");
                printf("\033[0m");
                printf("\n\n\n\n");
                for(int i=0;i<n;i++)
                {
                    printf("\t\t\t\t");
                    for(int j=0;j<n;j++)
                    {

                            printf("\033[1;32m"); //Set the text to the color red
                            printf(".\t",array[i][j]);
                            printf("\033[0m"); //Resets the text to default color


                    }
                    printf("\n\n");
                }
                printf("\aPlayer 1 has won!\n");
                end();
             }
             else if(pcount%2 == 1)
             {
                system("cls");
                printf("\033[1;33m");
                printf("\n\t\t\t\t\t\t\t~ CHOMP ~");
                printf("\033[0m");
                printf("\n\n\n\n");
                for(int i=0;i<n;i++)
                {
                    printf("\t\t\t\t");
                    for(int j=0;j<n;j++)
                    {

                            printf("\033[1;32m"); //Set the text to the color red
                            printf(".\t",array[i][j]);
                            printf("\033[0m"); //Resets the text to default color


                    }
                    printf("\n\n");
                }

                printf("\aPlayer 2 Has Won!\n");
                end();
             }
             return;
         }

         else if(zerocount!=n*n)
         {
             zerocount = 0;
         }

         goto label;
}

void end()
{
    printf("\n\nPress 1: New game\nPress 2: Exit\n\n");
    int input;
    scanf("%d",&input);
    switch(input)
    {
        case 1:
        {
            system("cls");
            return main();
            break;
        }

        case 2:
       {
            return;
            break;
        }

    }
}
