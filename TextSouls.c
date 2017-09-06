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

//  -Experience Points and Levels:
//      -Auto level up?
//      -The player decides?

//   -Areas:
//       -How will they differ and what to do ?

// Function to calculate the XP and Check de LvL
int Exp_Checker(int * xp_player, int * lvl_player){

    //Level 2
    if(*xp_player >= 100 && *xp_player < 200) {
      *lvl_player=2; printf("\nYou've gone up to level 2!");
      //All Stats of the class that will be incresed all levels
      }

    //Level 3
    if(*xp_player >= 200 && *xp_player < 350) {
      *lvl_player=3; printf("\nYou've gone up to level 3!");
      //All Stats of the class that will be incresed all levels
    }

    //Level 4
    if(*xp_player >= 350 && *xp_player < 500) {
      *lvl_player=4; printf("\nYou've gone up to level 4!");
      //All Stats of the class that will be incresed all levels
    }
  }
//Starting the main function.
int main(int argc, char const *argv[]) {
    //Starting the random factor.
    srand(time(NULL));

    //Creating the struct of the classes.
    typedef struct{
      char name[25];
      int Hp,MaxHp,Mana,MaxMana,Atk,Def,SpAtk,Agi,Acc;
    }CLASSES;
    CLASSES classes[5];

    //Getting the classes Defined.

    //Classe 1(0) - Neutron Mage.
    strcpy(classes[0].name,"Neutron Mage");
    classes[0].Hp = 100;
    classes[0].MaxHp = 100;
    classes[0].Mana = 500;
    classes[0].MaxMana = 500;
    classes[0].Atk = 40;
    classes[0].Def = 80;
    classes[0].Acc = 95;
    classes[0].SpAtk = 150;
    classes[0].Agi = 60;
    /*Skills:
        - Pulsar storm: 2x the special atk damage. Mana required: High.
        - Krypton reborn: feeds on the enemie's mana(small quantity) while inflicting medium damage. Mana required: Low.
        - Firewood: Heals half the damage inflicted upon himself. Mana required: Medium.
        -Obs: If inflicted with two special atk, this character will regain it's full Mana.
    */

    //Creating the struct of the enemies.
    typedef struct{
      char name[25];
      int Hp,MaxHp,Acc,Atk,Def,SpAtk,Agi;
    }ENEMIES;
    ENEMIES enemies[100];
    //Getting enemies defined.
    //Enemy 1
    strcpy(enemies[0].name,"Enchanted Raven");
    enemies[0].Hp = 99;
    enemies[0].MaxHp = 99;
    enemies[0].Atk = 10;
    enemies[0].Def = 15;
    enemies[0].Acc = 70;
    enemies[0].SpAtk = 30;

    //Creating the variables.
    char name_player[50][50]; //Player name, being 50 characters and maximum of 50 names.

    FILE * save; // save/load file

    int load_menu,NG,class_select;

    //Main Menu
    do{

      puts("Welcome to:");
      puts("******************\nTextSouls\n******************");
      puts("");
      puts("1-New Game\n2-Load Game");
      scanf("%d",&load_menu);
      system("cls");//Clear screen command, pretty basic.

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
        system("cls");
        printf("0-\n**************\nNeutron Mage\n**************\n\nMaxHP: %i\nMana: %i\nBase Atk: %i\nBase Def: %i\nAcc: %i\nSpAtk: %i\nAgi: %i\n\n",classes[0].MaxHp,classes[0].Mana,classes[0].Atk,classes[0].Def,classes[0].Acc,classes[0].SpAtk,classes[0].Agi);
        puts("Skills:\nA-Pulsar Storm: 2x the SPatk damage. Costs 50 mana.\nB-Krypton Reborn: feeds on the enemie's fear inflicting damage. Costs 20 mana.\nC-Firewood: Heals half the damage inflicted upon himself.Costs 200 mana.\nPassive: If inflicted by two special atks, this character will regain full mana.\n\n");
        scanf("%i",&class_select);
        //Game Mechanics as a Mage.

    }
    //Load game (gonna take some time go get here).
  return 0;
}
