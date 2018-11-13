#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<conio.h>


void sleep(unsigned long int n) {
        /* boucle vide parcourue (n * 100000) fois*/
        int i = 0;
        unsigned long int max = n * 100000;
        do {

                i++;
        }
        while(i <= max);
}


void init_tab_alea(char tab[][50])
{

    for(int i=0; i<20; i++)
    {
        for(int j=0; j<50; j++)
        {
            tab[i][j] = 'b';
        }
    }
    system("PAUSE");
}

///

void position_alea(int* pos_x, int* pos_y)
{

    *pos_x = rand()%20;
     printf("pos x : %d \n", *pos_x);
    ///system("PAUSE");
    *pos_y = rand()%50;
     printf("pos y : %d \n", *pos_y);
}

int position_alea_diam(int tab[10])
{

    for(int i =0; i<10; i=i+2)
    {

        tab[i] = rand()%15+2;
        tab[i+1] = rand()%45+2;
    }
     return(tab);
}

///


void displaytab(char tab[][50], int pos_xpcman, int pos_ypcman,int tab_diam[], int viejoueur, int score)
{
    printf("Partie en cours \n \n");


    for(int i=0; i<=22; i++)
    {
        for(int j=0; j<50; j++)
        {
            if((i==pos_xpcman)&&(j==pos_ypcman)){printf("X", tab[i][j]);}
            if((i==tab_diam[0])&&(j==tab_diam[1])){printf("*", tab[i][j]);}
            if((i==tab_diam[2])&&(j==tab_diam[3])){printf("*", tab[i][j]);}
            if((i==tab_diam[4])&&(j==tab_diam[5])){printf("*", tab[i][j]);}
            if((i==tab_diam[6])&&(j==tab_diam[7])){printf("*", tab[i][j]);}
            if((i==tab_diam[8])&&(j==tab_diam[9])){printf("*", tab[i][j]);}
            if(i==0){printf("__");}
            if(i==22){printf("__");}
            if((j==1)&&(i>0)&&(i<22)){printf(" | ");}
            ///if((j==49)&&(i>0)&&(i<22)){printf(" | ");}
            else if ((i>0)&&(i<22)&&(j>1)&&(j<49)){printf("  ");}
        }
        printf("\n");
    }
    printf("\n  Vie restante : %d        Score : %d       ", viejoueur, score);

}




void deplacement (char tab[][50], int pos_xpcman, int pos_ypcman, int tab_diam[], int viejoueur, int score)

{
  int d = rand()%4;
  int c;
  if(d==0){while(!kbhit()){
				printf("haut et %d et %d",pos_xpcman, pos_ypcman);
				if((pos_xpcman<20)||(pos_xpcman>1)){pos_xpcman=pos_xpcman-1;}
                sleep(900);
				system("cls");
				displaytab(tab, pos_xpcman, pos_ypcman, tab_diam, viejoueur, score);}}
  if(d==1){while(!kbhit()){
				printf("droite");
				pos_ypcman=pos_ypcman+1;
				sleep(900);
				system("cls");
				displaytab(tab, pos_xpcman, pos_ypcman, tab_diam, viejoueur, score);}}
  if(d==2){ while(!kbhit()){
				printf("bas");
				pos_xpcman=pos_xpcman+1;
				sleep(900);
				system("cls");
				displaytab(tab, pos_xpcman, pos_ypcman, tab_diam, viejoueur, score);}}
  if(d==3){ while(!kbhit()){
				printf("gauche");
				pos_ypcman=pos_ypcman-1;
				sleep(900);
				system("cls");
				displaytab(tab, pos_xpcman, pos_ypcman, tab_diam, viejoueur, score);}}

printf("d = %d", d);
  while(1)
  {


    if((c=getch())==72){///HAUT
                while(!kbhit()){
				printf("haut");
				pos_xpcman=pos_xpcman-1;
                sleep(500);
				system("cls");
				displaytab(tab, pos_xpcman, pos_ypcman, tab_diam, viejoueur, score);}

    }

    else if(c==77){///DROITE
                while(!kbhit()){
				printf("droite");
				pos_ypcman=pos_ypcman+1;
				sleep(500);
				system("cls");
				displaytab(tab, pos_xpcman, pos_ypcman, tab_diam, viejoueur, score);}
    }


    else if(c==80){///BAS
                while(!kbhit()){
				printf("bas");
				pos_xpcman=pos_xpcman+1;
				sleep(500);
				system("cls");
				displaytab(tab, pos_xpcman, pos_ypcman, tab_diam, viejoueur, score);}
    }

     else if(c==75){///GAUCHE
                while(!kbhit()){
				printf("gauche");
				pos_ypcman=pos_ypcman-1;
				sleep(500);
				system("cls");
				displaytab(tab, pos_xpcman, pos_ypcman, tab_diam, viejoueur, score);}
    }

  }

}


int main()
{
    srand(time(NULL));

    int pos_xpcman=0;
    int pos_ypcman=0;
    int posx=2;
    int posy=2;
    int* pos_x= NULL;
    pos_x = &posx;
    int* pos_y=NULL;
    pos_y = &posy;
    int viejoueur =5;
    int score =0;


    char tab[20][50]; ///crea tab

    init_tab_alea(tab);
    position_alea(pos_x,pos_y);
    int tab_diam[10];
    position_alea_diam(tab_diam);
    displaytab(tab, posx, posy, tab_diam, viejoueur, score);
    printf("Pos x : %d et Pos y : %d\n", *pos_x, *pos_y);

    for(int i = 0; i<10; i=i+2)
    {
        printf("Pos diam : %d et %d \n", tab_diam[i], tab_diam[i+1]);
    }
   deplacement(tab, posx, posy, tab_diam, viejoueur, score);


    return 0;
}
