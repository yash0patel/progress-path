#include <stdio.h>
#include <string.h>
struct PlayerInfo
{
    int live;
    char symbol;
    int moves;
} pi;

struct GameInfo
{
    int length;
    char BombPosition[100];
    char BombPositionDisplay[100];
    char TreasurePosition[100];
    char TreasurePositionDisplay[100];
} gi;

void Player_Configuration()
{
    printf("Enter a single character to represent the player : ");
    scanf(" %c", &pi.symbol);

    while (1)
    {
        printf("set the number of lives: ");
        scanf("%d", &pi.live);

        if (pi.live >= 1 && pi.live <= 10)
        {
            printf("Player Configuration set-up is complete\n");
            break;
        }
        else
        {
            printf("\tMust be between 1 and 10!\n");
        }
    }
}

void Game_Configuration()
{
    while (1)
    {
        printf("set the path length (a multiple of 5 between 10-70) : ");
        scanf("%d", &gi.length);
        if (gi.length % 5 == 0 && gi.length >= 10 && gi.length <= 70)
        {
            break;
        }
        else
        {
            printf("Must be a multiple of 5 and between 10-70!!!\n");
        }
    }
    while (1)
    {
        printf("set the limit for number of moves allowed : ");
        scanf("%d", &pi.moves);
        if (pi.moves >= 3 && pi.moves <= 26)
        {
            break;
        }
        else
        {
            printf("Value must be between 3 and 26\n");
        }
    }
}

void Bomb_Placement()
{
    printf("Enter the bomb positions in sets of 5 where a value of 1=bomb, and 0=no bomb. space-delimit your input.\n");
    printf("(Example: 1 0 0 1 1) NOTE: there are %d to set!\n", gi.length);

    for (int i = 0; i < gi.length; i += 5)
    {
        printf("Positions [%d-%d]:\t", i + 1, i + 5);
        fflush(stdin);
        gets(gi.TreasurePosition);
        strcat(gi.BombPositionDisplay,gi.TreasurePosition);
        strcat(gi.BombPositionDisplay," ");
    }
    printf("BOMB placement set\n");
}

void Treasure_Placement()
{
    printf("Enter the treasure placements in sets of 5 where a value of 1=TREASURE, and 0=NO TREASURE. space-delimit your input.\n");
    printf("(Example: 1 0 0 1 1) NOTE: there are %d to set!\n", gi.length);

    for (int i = 0; i < gi.length; i += 5)
    {
        printf("Positions [%d-%d]:\t", i + 1, i + 5);
        fflush(stdin);
        gets(gi.TreasurePosition);
        strcat(gi.TreasurePositionDisplay,gi.TreasurePosition);
        strcat(gi.TreasurePositionDisplay," ");
    }
    
    printf("TREASURE placement set\n");
}

void Setting_Info()
{
    printf("\n-----------------------------------\n");
    printf("TREASURE HUNT Configuration Setting");
    printf("\n-----------------------------------\n");
    
    //Player
    printf("Player:\n");
    printf("Symbol  \t\t: %c\n",pi.symbol);
    printf("Lives   \t\t: %d\n",pi.live);
    printf("Treasure\t\t: [ready for gemeplay]\n");
    printf("History \t\t: [ready for gemeplay]\n");

    //Game
    printf("\nGame:\n");
    printf("Path Length\t: %d\n",gi.length);
    printf("Bombs      \t: ");
    puts(gi.BombPositionDisplay);
    printf("Treasure   \t: ");
    puts(gi.TreasurePositionDisplay);
}
int main()
{
    struct PlayerInfo pi;

    printf("==============================================\n");
    printf("\t\tTreasure Hunt !");
    printf("\n==============================================");

    printf("\n\nPLAYER Configuration");
    printf("\n--------------------\n");

    Player_Configuration();

    printf("\nGAME Configuration");
    printf("\n--------------------\n");

    Game_Configuration();

    printf("\nBOMB Placement");
    printf("\n--------------\n");

    Bomb_Placement();

    printf("\nTREASURE Placement");
    printf("\n--------------\n");

    Treasure_Placement();

    printf("GAME configuration set-up is complete...\n");

    Setting_Info();

    printf("\n====================================\n");
    printf("~ Get ready to play TREASURE HUNT! ~");
    printf("\n====================================\n");

return 0;
}