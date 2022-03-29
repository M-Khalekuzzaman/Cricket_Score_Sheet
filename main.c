#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int number;
struct Batsmen
{
    char name[15];
    int total_run;
    int four,six;
};

main_menu()
{
    printf("           \n\n");
    printf("\t\t\t\t       ****************************************\n");
    printf("\t\t\t\t       * WELCOME TO CRICKET SCORE SHEET BOARD *\n");
    printf("\t\t\t\t       ****************************************\n");
    printf("\n\t\t\t\t\t\t 1) New Score Sheet :");
    printf("\n\t\t\t\t\t\t 2) View Score Sheet :");
    printf("\n\t\t\t\t\t\t 3) Exit :");

    int opt;
    printf("\n\n\t\t\t\t\t\t Enter your choose number : ");
    scanf("%d",&opt);
    switch(opt)
    {
    case 1 :
        system("CLS");
        new_score_sheet();
        break;
    case 2 :
        system("CLS");
        view_score_sheet();
        break;
    case 3 :
        system("CLS");
        exit_score_board();
        break;
    default :
        printf("\nSorry !!! Your option is not correct");
    }
    return 0;

}

new_score_sheet()
{

    printf("           \n\n");
    printf("\t\t\t\t       ************************************\n");
    printf("\t\t\t\t       * WELCOME TO NEW SCORE SHEET BOARD *\n");
    printf("\t\t\t\t       ************************************\n");
    char competition[5];
    char competetor1[10];
    char competetor2[10];
    char venue[10];
    char toss_win[10];
    char elected[5];
    int inn;

    printf("\n\t# Competetition name :");
    scanf("%s",&competition);
    printf("\n\t# Match Between:");
    scanf("%s",&competetor1);
    printf("\n\t# Versus :");
    scanf("%s",&competetor2);
    printf("\n\t# Venue :");
    scanf("%s",&venue);
    printf("\n\t# Toss won by :");
    scanf("%s",&toss_win);
    printf("\n\t# Elected to :");
    scanf("%s",&elected);
    printf("\n\t# Inning of : ");
    scanf("%d",&inn);

    //time function working method
    time_t currentTime;
    time(&currentTime);
    //printf("\n\n%s",ctime(&currentTime));


    printf("\n\n\t\t\t\t*********** COMOPETITION VIEW **********");
    printf("\n\n\t\t\t ---------------------------------------------------------");
    printf("\n\t\t         Competition : %s",competition);
    printf("\t\t Venue : %s",venue);
    printf("\n\t\t\t ---------------------------------------------------------");
    printf("\n\t\t         Match Between : %s",competetor1);
    printf("\t    Versus : %s",competetor2);
    printf("\n\t\t\t ---------------------------------------------------------");
    printf("\n\t\t         Toss won by : %s",toss_win);
    printf("\t    Elected To : %s",elected);
    printf("\n\t\t\t ---------------------------------------------------------");
    printf("\n\t\t         Innings : %d",inn);
    printf("\t    Date & Time : %s",ctime(&currentTime));

    int num;
    printf("\n\n\n\t Do you want to Batsmen score view : ");
    printf("\n\t\t\t # Yes for Press 1 :");
    printf("\n\t\t\t # No for press 2 :");
    printf("\n\n\t\t\t Enter your press number :");
    scanf("%d",&num);
    switch(num)
    {
    case 1 :
        system("CLS");
        Bat_view();
        break;
    case 2 :
        system("CLS");
        main_menu();
        break;
    default :
        printf("\n\n\n\n\n\t\t\t\t\t Your press number incorrect !!!");

    }

    return 0;
}
Bat_view()
{
    system("CLS");
    printf("\n\n\t\t\t\t*********** BATSMEN SCORE **********");
    printf("\n\n\t\t Number of Batsmen :");
    scanf("%d",&number);
    struct Batsmen batsmen[number];
    for(int i = 0 ; i<number ; i++)
    {
        int sum = 0;
        int ball[5];
        printf("\n\n\t# Batsmen Name :");
        fflush(stdin);
        gets(batsmen[i].name);
        printf("\n\n\t %d)%s : ",i+1,batsmen[i].name);
        for(int j = 0 ; j<6 ; j++)
        {
            scanf("%d",&ball[j]);
            sum = sum + ball[j];
        }
        batsmen[i].total_run = sum ;
        printf("\n\t# Total Four & Six : ");
        scanf("%d%d",&batsmen[i].four,&batsmen[i].six);
    }

    int otp;
    printf("\n\n\n\t\t\t Are you see Batsmen Score View?");
    printf("\n\t\t\t # Yes for Press 1 :");
    printf("\n\t\t\t # No for press 2 :");
    printf("\n\n\t\t\t Enter your press number :");
    scanf("%d",&otp);
    switch(otp)
    {
    case 1 :
        system("CLS");
        for(int l = 0 ; l<number ; l++)
        {
            view_score_sheet(batsmen[l].name,batsmen[l].total_run,batsmen[l].four,batsmen[l].six);
        }

        break;
    case 2 :
        system("CLS");
        Bat_view();
        break;
    default :
        printf("\n\n\n\n\n\t\t\t\t\t Your press number incorrect !!!");

    }

    return 0;
}

view_score_sheet(char x[15],int r,int f,int s)
{
    system("CLS");
    printf("           \n\n");
    printf("\t\t\t\t       *******************************\n");
    printf("\t\t\t\t       * WELCOME TO VIEW SCORE BOARD *\n");
    printf("\t\t\t\t       ***************************** *\n");

    struct Batsmen batsmen[number];
    printf("\n\n\n\t\t\t\t     *********** BATSMEN VIEW **********");
    printf("\n\n\t\t\t ----------------------------------------------------------------");
    printf("\n\t\t\t    Batsman_Name \t Total_runs\t\t_4s\t  _6s");
    printf("\n\t\t\t ----------------------------------------------------------------\n");

    for(int k=0; k<number; k++)
    {
        printf("\t\t\t     %s \t\t  %d \t\t\t %d \t   %d",x,r,f,s);
        printf("\n\t\t\t ----------------------------------------------------------------");
        printf("\n");

    }
    int op;
    printf("\n\t\t\t # For Main_menu Press 1 :");
    printf("\n\t\t\t # Exit for press 2 :");
    printf("\n\n\t\t\t Enter your press number :");
    scanf("%d",&op);
    switch(op)
    {
    case 1 :
        system("CLS");
        main_menu();
        break;
    case 2 :
        system("CLS");
        exit_score_board();
        break;
    default :
        printf("\n\n\n\n\n\t\t\t\t\t Your press number incorrect !!!");

    }

    return 0;
}

exit_score_board()
{
    int n;
    printf("\n\n\n\t\t\t Are you sure to exit?\n\n");
    printf("\n\t\t\t # Yes for Press 1 :");
    printf("\n\t\t\t # No for press 2 :");
    printf("\n\n\t\t\t Enter your press number :");
    scanf("%d",&n);
    switch(n)
    {
    case 1 :
        system("CLS");
        printf("\n\n\t\t\t\t Thank you visit my cricket score board !!!!!");
        break;
    case 2 :
        system("CLS");
        main_menu();
        break;
    default :
        printf("\n\n\n\n\n\t\t\t\t\t Your press number incorrect !!!");

    }
    return 0;
}


int main()
{
    system("color f9");
    main_menu();
    getch();
}
