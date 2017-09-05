#include <stdlib.h> //Standard
#include <stdio.h>  //Standard
#include <string.h> // To make it easier to deal with strings.
#include <time.h> //Random
#include <conio.h>//Clear screen
//A simple rpg combat system.
//To do:(Give it a "OK" in case it's ready)
//  -Agility
//  -Maximum and minumum damage
//  -Critical Hits.
//  -Defense(Blocking system):
//      -Passive or Active?
//  -Miss.
//  -Classes:
//      -Defined (i.e: Warrior, mage,etc..)
//      -Undefined(It changes along the leveling up)
//  -Mana.
//  -Diffent types of enemies based on Area and Level.
//  -Equips(No clue how to make it work, sorry!(ASS:Gustavo Villar))
//  -Gold and Shops:
//      -Gold == XP?
//      -Gold != XP?
//   -Experience Points and Levels:
//      -Auto level up?
//      -The player decides?
//    -Areas:
//       -How will they differ and what to do ?

//Starting the main function.
int main(int argc, char const *argv[]) {
    //Starting the random factor.
    srand(time(NULL));
    //Creating the variables.
    char name_player[50][50]; //Player name, being 50 characters and maximum of 50 names.
    FILE *save; // save/load file
    int load_menu,NG;
    //Main Menu
    do{
      puts("Welcome to:");
      puts("******************\nTextSouls\n******************");
      puts("");
      puts("1-New Game\n2-Load Game");
      scanf("%d",&load_menu);
    }while(load_menu != 1 && load_menu !=2 );
    system("cls");//Clear screen command, pretty basic.
    //New game
    if(load_menu==1)
    {
        NG=0;
        puts("Starting a new game...");
        puts("Please, type your name:");
        getchar();//this will allow my next trick, if you know a better way plase tell.
        scanf("%[^\n]",&name_player[NG]);
        puts("");
        system("cls");
        printf("The name you entered is : %s\n",name_player[NG]);
    }
    //Load game (gonna take some time go get here).


  return 0;
}
