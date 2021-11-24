/*********************************************************/
/** Author  : Mustafa Muhammed                           */
/** Date    : 24 Novembre 2021                           */
/** version : V01                                        */
/*********************************************************/

#include<stdio.h>
#include<string.h>

/** MACROS FOR MORE READABILITY */
#define Vote             1
#define Display_Results  2
#define Display_Winner   3
#define Exit             0


int main()
{
    char choice = 0 ; /** VARIABLE TO HOLD USER'S CHOICE */
    int Omar_Counter = 0, Ali_Counter = 0, Mustafa_Counter = 0; /** COUNTERS TO COUT EACH CANDIDATE VOTES */
    char Candidate[10]; /** STRING TO RECEIVE CANDIDATE NAME FROM USER */

    do
    {
        /** DISPLAY DIFFERENT CHOICES FOR THE USER */
        printf("Please Select What To Do\n1- Vote\n2- Display Results\n3- Display Winner\n0- Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case Exit:
            /** EXIT WITHOUT DOING ANYTHING */
            break;

        /** CASE 1 TO VOTE FOR CANDIDATE */
        case Vote:
            printf("Select One Candidate\n");
            printf("1 - Ali\n2 - Omar\n3 - Mustafa\n");
            scanf("%s",&Candidate);
            if (strcmp(Candidate, "Ali") == 0)
            {
                Ali_Counter++;
            }
            else if (strcmp(Candidate, "Omar") == 0)
            {
                Omar_Counter++;
            }
            else if (strcmp(Candidate, "Mustafa") == 0)
            {
                Mustafa_Counter++;
            }
            else
            {
                printf("Your Choice Is Invalid\n");
            }
            break;

        /** CASE 2 TO DISPLAY VOTING RESULTS */
        case Display_Results :
            printf("The Current Voting Results is\n");
            printf("1 - Ali has %d votes\n",Ali_Counter);
            printf("2 - Omar has %d votes\n",Omar_Counter);
            printf("3 - Mustafa has %d votes\n",Mustafa_Counter);
            break;

        /** CASE 3 TO DISPLAY THE WINNER */
        case Display_Winner :
            if((Ali_Counter > Omar_Counter) && (Ali_Counter > Mustafa_Counter))
            {
                printf("The Winner Is Ali With %d Votes",Ali_Counter);
            }

            else if((Omar_Counter > Ali_Counter) && (Omar_Counter > Mustafa_Counter))
            {
                printf("The Winner Is Omar With %d Votes\n",Omar_Counter);
            }
            else if((Mustafa_Counter > Ali_Counter) && (Mustafa_Counter > Omar_Counter))
            {
                printf("The Winner Is Mustafa With %d Votes\n",Mustafa_Counter);
            }
            else
            {
                printf("No Winner Until Now\n");
            }
            break;

        /** DEFAULT CASE */
        default:
            printf("Invalid Choice\n");
            break;
        }
    }
    while(choice); /** REPEAT WHILE THE CHOICE NOT EXIT */

    return 0 ;
}
