#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Batsmen
{
    char name[15];
    int total_run;
    int four,six;
};
Bat_view()
{
    system("CLS");
    struct Batsmen batsmen[2];
    printf("\n\n\t\t\t\t*********** BATSMEN VIEW **********");
    for(int i = 0 ; i<2 ; i++)
    {
        printf("\n\n\t# Batsmen Name :");
        fflush(stdin);
        gets(batsmen[i].name);
        printf("\n\t# Total run : ");
        scanf("%d",&batsmen[i].total_run);
        printf("\n\t# Total Four & Six : ");
        scanf("%d%d",&batsmen[i].four,&batsmen[i].six);
    }



    printf("\n\n\n\t\t\t\t       *********** BATSMEN VIEW **********");
    printf("\n\n\t\t\t ----------------------------------------------------------------");
    printf("\n\t\t\t    Batsman_Name \t Total_runs\t\t_4s\t  _6s");
    printf("\n\t\t\t ----------------------------------------------------------------\n");


    for(int i = 0 ; i<2 ; i++)
    {
        printf("\t\t\t     %s \t\t  %d \t\t\t %d \t   %d",batsmen[i].name,batsmen[i].total_run,batsmen[i].four,batsmen[i].six);
        printf("\n\t\t\t ----------------------------------------------------------------");
        printf("\n");

    }

    return 0;
}

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

    Bat_view();


    return 0;
}

view_score_sheet()
{
    printf("           \n\n");
    printf("\t\t\t\t       *******************************\n");
    printf("\t\t\t\t       * WELCOME TO VIEW SCORE BOARD *\n");
    printf("\t\t\t\t       ***************************** *\n");
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
    getch();
}


int main()
{
    main_menu();
    getch();
}
