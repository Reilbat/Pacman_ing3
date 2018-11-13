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
     return(tab[10]);
}

///


void displaytab(char tab[][50], int pos_xpcman, int pos_ypcman,int tab_diam[], int viejoueur, int score)
void displaytab(char tab[][50], int pos_xpcman, int pos_ypcman,int tab_diam[], int viejoueur)
{
    printf("Partie en cours \n \n");


    if((pos_xpcman==tab_diam[0])&&(pos_ypcman==tab_diam[1])){ tab_diam[0]=100; tab_diam[1]=100; tab_diam[10]=tab_diam[10]+10;}
    if((pos_xpcman==tab_diam[2])&&(pos_ypcman==tab_diam[3])){ tab_diam[2]=100; tab_diam[3]=100;tab_diam[10]=tab_diam[10]+10;}
    if((pos_xpcman==tab_diam[4])&&(pos_ypcman==tab_diam[5])){ tab_diam[4]=100; tab_diam[5]=100;tab_diam[10]=tab_diam[10]+10;}
    if((pos_xpcman==tab_diam[6])&&(pos_ypcman==tab_diam[7])){ tab_diam[6]=100; tab_diam[7]=100;tab_diam[10]=tab_diam[10]+10;}
    if((pos_xpcman==tab_diam[8])&&(pos_ypcman==tab_diam[9])){ tab_diam[8]=100; tab_diam[9]=100;tab_diam[10]=tab_diam[10]+10;}

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
    printf("\n  Vie restante : %d        Score : %d       ", viejoueur, tab_diam[10]);

}




void deplacement (char tab[][50], int pos_xpcman, int pos_ypcman, int tab_diam[], int viejoueur, int score)
void deplacement (char tab[][50], int pos_xpcman, int pos_ypcman, int tab_diam[], int viejoueur)

{
  int d = rand()%4;
  int c;
  //HAUT
  if(d==0){while(!kbhit()){
				printf("haut");
                if(pos_xpcman==1)
                {
                    pos_xpcman=20;
                }
                if((pos_xpcman=21)&&(pos_xpcman>0))
				{pos_xpcman=pos_xpcman-1;}
                sleep(500);
				system("cls");
<<<<<<< HEAD
				displaytab(tab, pos_xpcman, pos_ypcman, tab_diam, viejoueur, score);}
				}
  //DROITE
=======
				displaytab(tab, pos_xpcman, pos_ypcman, tab_diam, viejoueur);}}
>>>>>>> e1cf73da5473777cb577c8890274d9d8e68e17f9
  if(d==1){while(!kbhit()){
				printf("droite");
				if(pos_ypcman==50)
                {
                    pos_ypcman=1;
                }
                if((pos_xpcman<51)&&(pos_xpcman>0))
				{pos_ypcman=pos_ypcman+1;}
				sleep(500);
				system("cls");
<<<<<<< HEAD
				displaytab(tab, pos_xpcman, pos_ypcman, tab_diam, viejoueur, score);}}
  //BAS
=======
				displaytab(tab, pos_xpcman, pos_ypcman, tab_diam, viejoueur);}}
>>>>>>> e1cf73da5473777cb577c8890274d9d8e68e17f9
  if(d==2){ while(!kbhit()){
				printf("bas");
				if(pos_xpcman==20)
                {
                    pos_xpcman=1;
                }
                if((pos_xpcman<21)&&(pos_xpcman>0))
				{pos_xpcman=pos_xpcman+1;}
				sleep(500);
				system("cls");
<<<<<<< HEAD
				displaytab(tab, pos_xpcman, pos_ypcman, tab_diam, viejoueur, score);}}
  //GAUCHE
  if(d==3){while(!kbhit()){
=======
				displaytab(tab, pos_xpcman, pos_ypcman, tab_diam, viejoueur);}}
  if(d==3){ while(!kbhit()){
>>>>>>> e1cf73da5473777cb577c8890274d9d8e68e17f9
				printf("gauche");
                if(pos_ypcman==1)
                {
                    pos_ypcman=50;
                }
                if((pos_ypcman<51)&&(pos_ypcman>0))
				{pos_ypcman=pos_ypcman-1;}
				sleep(500);
				system("cls");
				displaytab(tab, pos_xpcman, pos_ypcman, tab_diam, viejoueur, score);}}
				displaytab(tab, pos_xpcman, pos_ypcman, tab_diam, viejoueur);}}

printf("d = %d", d);
  while(1)
  {

    if((c=getch())==72){///HAUT
                while(!kbhit()){
				printf("haut");
                if(pos_xpcman==1)
                {
                    pos_xpcman=20;
                }
                if((pos_xpcman=21)&&(pos_xpcman>0))
				{pos_xpcman=pos_xpcman-1;}
                sleep(500);
				system("cls");
				displaytab(tab, pos_xpcman, pos_ypcman, tab_diam, viejoueur, score);}
				displaytab(tab, pos_xpcman, pos_ypcman, tab_diam, viejoueur);}

    }

    else if(c==77){///DROITE
                while(!kbhit()){
				printf("droite");
				if(pos_ypcman==50)
                {
                    pos_ypcman=1;
                }
                if((pos_xpcman<51)&&(pos_xpcman>0))
				{pos_ypcman=pos_ypcman+1;}
				sleep(500);
				system("cls");
				displaytab(tab, pos_xpcman, pos_ypcman, tab_diam, viejoueur, score);}
				displaytab(tab, pos_xpcman, pos_ypcman, tab_diam, viejoueur);}
    }


    else if(c==80){///BAS
                while(!kbhit()){
				printf("bas");
				if(pos_xpcman==20)
                {
                    pos_xpcman=1;
                }
                if((pos_xpcman<21)&&(pos_xpcman>0))
				{pos_xpcman=pos_xpcman+1;}
				sleep(500);
				system("cls");
				displaytab(tab, pos_xpcman, pos_ypcman, tab_diam, viejoueur, score);}
				displaytab(tab, pos_xpcman, pos_ypcman, tab_diam, viejoueur);}
    }

     else if(c==75){///GAUCHE
                while(!kbhit()){
				printf("gauche");
                if(pos_ypcman==1)
                {
                    pos_ypcman=50;
                }
                if((pos_ypcman<51)&&(pos_ypcman>0))
				{pos_ypcman=pos_ypcman-1;}
				sleep(500);
				system("cls");
				displaytab(tab, pos_xpcman, pos_ypcman, tab_diam, viejoueur, score);}
				displaytab(tab, pos_xpcman, pos_ypcman, tab_diam, viejoueur);}
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
    int tab_diam[10]; ///position 0->9 X et Y des diam1,2,3,4,5 // Position 10 : score
    tab_diam[10] = 0;
    position_alea_diam(tab_diam);
    displaytab(tab, posx, posy, tab_diam, viejoueur, score);
    displaytab(tab, posx, posy, tab_diam, viejoueur);
    printf("Pos x : %d et Pos y : %d\n", *pos_x, *pos_y);

    for(int i = 0; i<10; i=i+2)
    {
        printf("Pos diam : %d et %d \n", tab_diam[i], tab_diam[i+1]);
    }
   deplacement(tab, posx, posy, tab_diam, viejoueur, score);
   deplacement(tab, posx, posy, tab_diam, viejoueur);


    return 0;
}
