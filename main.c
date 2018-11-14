#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<conio.h>


void sleep(unsigned long int n) {
        //boucle vide parcourue (n * 100000) fois
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

    *pos_x = rand()%17+2;
     printf("pos x : %d \n", *pos_x);
    *pos_y = rand()%47+2;
     printf("pos y : %d \n", *pos_y);
}
int position_alea2(int tab[12])
{

    tab[11] = rand()%17+2;

    tab[12] = rand()%47+2;

    return(tab);

}

int position_alea_diam(int tab[10])
{

    for(int i =0; i<10; i=i+2)
    {

        tab[i] = rand()%17+2;
        tab[i+1] = rand()%47+2;
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

    printf("--------------------------------------------------");
    for(int i=0; i<21; i++)
    {
        for(int j=0; j<51; j++)
        {
            if((i==pos_xpcman)&&(j==pos_ypcman)){printf("X", tab[i][j]);}
            if((i==tab_diam[0])&&(j==tab_diam[1])){printf("*", tab[i][j]);}
            if((i==tab_diam[2])&&(j==tab_diam[3])){printf("*", tab[i][j]);}
            if((i==tab_diam[4])&&(j==tab_diam[5])){printf("*", tab[i][j]);}
            if((i==tab_diam[6])&&(j==tab_diam[7])){printf("*", tab[i][j]);}
            if((i==tab_diam[8])&&(j==tab_diam[9])){printf("*", tab[i][j]);}
            if((j==0)&&(i>0)&&(i<21)){printf("|");}
            //if((j==50)&&(i>0)&&(i<21)&&(i!=pos_xpcman)&&(j!=pos_ypcman)&&(i!=tab_diam[0])&&(j!=tab_diam[1])&&(i!=tab_diam[2])&&(j!=tab_diam[3])&&(i!=tab_diam[4])&&(j!=tab_diam[5])&&(i!=tab_diam[6])&&(j!=tab_diam[7])&&(i!=tab_diam[8])&&(j!=tab_diam[9])){printf(" |");}
            if((j==50)&&(i>0)&&(i<21)&&(i!=pos_xpcman)&&(j!=pos_ypcman)&&(i!=tab_diam[0])&&(j!=tab_diam[1])&&(i!=tab_diam[2])&&(j!=tab_diam[3])){printf(" |");}
            else if((j==50)&&(i>0)&&(i<21)){printf("|");}
            else if ((i>0)&&(i<21)&&(j>1)&&(j<50)){printf(" ");}
        }
        printf("\n");
    }
<<<<<<< HEAD
    printf("--------------------------------------------------\n\n");
=======
    printf("\n  Vie restante : %d        Score : %d       ", viejoueur, score);
>>>>>>> b0fb3c1da86f05990594f79093e3479eb534e3de
    printf("\n  Vie restante : %d        Score : %d       ", viejoueur, tab_diam[10]);

}



<<<<<<< HEAD
void deplacement (char tab[][50], int pos_xpcman, int pos_ypcman, int tab_diam[], int viejoueur, int bord, int vitesse)
=======

void deplacement (char tab[][50], int pos_xpcman, int pos_ypcman, int tab_diam[], int viejoueur, int score)
void deplacement (char tab[][50], int pos_xpcman, int pos_ypcman, int tab_diam[], int viejoueur)
>>>>>>> b0fb3c1da86f05990594f79093e3479eb534e3de

{
  int d = rand()%4;
  int c;
<<<<<<< HEAD
  int posx = pos_xpcman;
  int posy = pos_ypcman;
  //HAUT
  if(d==0){while(!kbhit()){ ///HAUT
=======
  //HAUT
  if(d==0){while(!kbhit()){
>>>>>>> b0fb3c1da86f05990594f79093e3479eb534e3de
				printf("haut");
                if(pos_xpcman==1)
                {
                    pos_xpcman=20;
                }
<<<<<<< HEAD
                if((pos_xpcman<20)&&(pos_xpcman>1))
				{pos_xpcman=pos_xpcman-1;}
                sleep(500*vitesse);
				system("cls");

				displaytab(tab, pos_xpcman, pos_ypcman, tab_diam, viejoueur);}
				}
  //DROITE
  if(d==1){while(!kbhit()){ ///DROITE
=======
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
>>>>>>> b0fb3c1da86f05990594f79093e3479eb534e3de
				printf("droite");
				if(pos_ypcman==50)
                {
                    pos_ypcman=1;
                }
                if((pos_xpcman<51)&&(pos_xpcman>0))
				{pos_ypcman=pos_ypcman+1;}
<<<<<<< HEAD
				sleep(400*vitesse);
				system("cls");

				displaytab(tab, pos_xpcman, pos_ypcman, tab_diam, viejoueur);}}
  //BAS
  if(d==2){ while(!kbhit()){ ///BAS
=======
				sleep(500);
				system("cls");
<<<<<<< HEAD
				displaytab(tab, pos_xpcman, pos_ypcman, tab_diam, viejoueur, score);}}
  //BAS
=======
				displaytab(tab, pos_xpcman, pos_ypcman, tab_diam, viejoueur);}}
>>>>>>> e1cf73da5473777cb577c8890274d9d8e68e17f9
  if(d==2){ while(!kbhit()){
>>>>>>> b0fb3c1da86f05990594f79093e3479eb534e3de
				printf("bas");
				if(pos_xpcman==20)
                {
                    pos_xpcman=1;
                }
                if((pos_xpcman<21)&&(pos_xpcman>0))
				{pos_xpcman=pos_xpcman+1;}
<<<<<<< HEAD
				sleep(500*vitesse);
				system("cls");

				displaytab(tab, pos_xpcman, pos_ypcman, tab_diam, viejoueur);}}
  //GAUCHE
  if(d==3){while(!kbhit()){

				displaytab(tab, pos_xpcman, pos_ypcman, tab_diam, viejoueur);}}
  if(d==3){ while(!kbhit()){

=======
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
>>>>>>> b0fb3c1da86f05990594f79093e3479eb534e3de
				printf("gauche");
                if(pos_ypcman==1)
                {
                    pos_ypcman=50;
                }
                if((pos_ypcman<51)&&(pos_ypcman>0))
				{pos_ypcman=pos_ypcman-1;}
<<<<<<< HEAD
				sleep(400*vitesse);
=======
				sleep(500);
>>>>>>> b0fb3c1da86f05990594f79093e3479eb534e3de
				system("cls");
				displaytab(tab, pos_xpcman, pos_ypcman, tab_diam, viejoueur, score);}}
				displaytab(tab, pos_xpcman, pos_ypcman, tab_diam, viejoueur);}}

printf("d = %d", d);
  while(1)
  {
      ///Si P presser -> PAUSE
    if((c=getch())==112){system("cls"); printf("PAUSE\n\n\n");system("PAUSE"); deplacement(tab, pos_xpcman, pos_ypcman, tab_diam, viejoueur,bord,vitesse);}
    ///Si Q presser Exit -> Menu
    //if((c=getch())==113){system("cls"); menu();}

    if((c=getch())==72){///HAUT
                while(!kbhit()){
				printf("haut");
<<<<<<< HEAD
                if((pos_xpcman==1)&&(bord==0))
                {
                    pos_xpcman=20;

                }
                else if ((pos_xpcman==1)&&(bord==1))
                {
                    viejoueur = viejoueur -1;
                    reini_partie(tab_diam);
                    pos_xpcman = tab_diam[11]; pos_ypcman = tab_diam[12];
                }
                if((pos_xpcman<21)&&(pos_xpcman>0))
				{pos_xpcman=pos_xpcman-1;}
                sleep(500*vitesse);
=======
                if(pos_xpcman==1)
                {
                    pos_xpcman=20;
                }
                if((pos_xpcman=21)&&(pos_xpcman>0))
				{pos_xpcman=pos_xpcman-1;}
                sleep(500);
>>>>>>> b0fb3c1da86f05990594f79093e3479eb534e3de
				system("cls");
				displaytab(tab, pos_xpcman, pos_ypcman, tab_diam, viejoueur, score);}
				displaytab(tab, pos_xpcman, pos_ypcman, tab_diam, viejoueur);}

    }

    else if(c==77){///DROITE
                while(!kbhit()){
				printf("droite");
<<<<<<< HEAD
				if((pos_ypcman==50)&&(bord==0))
                {
                    pos_ypcman=1;

                }
                else if ((pos_ypcman==50)&&(bord==1))
                {
                    viejoueur = viejoueur -1;
                    reini_partie(tab_diam);
                    pos_xpcman = tab_diam[11]; pos_ypcman = tab_diam[12];
                }
                if((pos_xpcman<51)&&(pos_xpcman>0))
				{pos_ypcman=pos_ypcman+1;}
				sleep(400*vitesse);
=======
				if(pos_ypcman==50)
                {
                    pos_ypcman=1;
                }
                if((pos_xpcman<51)&&(pos_xpcman>0))
				{pos_ypcman=pos_ypcman+1;}
				sleep(500);
>>>>>>> b0fb3c1da86f05990594f79093e3479eb534e3de
				system("cls");
				displaytab(tab, pos_xpcman, pos_ypcman, tab_diam, viejoueur, score);}
				displaytab(tab, pos_xpcman, pos_ypcman, tab_diam, viejoueur);}
    }


    else if(c==80){///BAS
                while(!kbhit()){
				printf("bas");
<<<<<<< HEAD
				if((pos_xpcman==20)&&(bord==0))
                {
                    pos_xpcman=1;

                }
                else if ((pos_xpcman==20)&&(bord==1))
                {
                    viejoueur = viejoueur -1;
                    reini_partie(tab_diam);
                    pos_xpcman = tab_diam[11]; pos_ypcman = tab_diam[12];
                }
                if((pos_xpcman<21)&&(pos_xpcman>0))
				{pos_xpcman=pos_xpcman+1;}
				sleep(500*vitesse);
=======
				if(pos_xpcman==20)
                {
                    pos_xpcman=1;
                }
                if((pos_xpcman<21)&&(pos_xpcman>0))
				{pos_xpcman=pos_xpcman+1;}
				sleep(500);
>>>>>>> b0fb3c1da86f05990594f79093e3479eb534e3de
				system("cls");
				displaytab(tab, pos_xpcman, pos_ypcman, tab_diam, viejoueur, score);}
				displaytab(tab, pos_xpcman, pos_ypcman, tab_diam, viejoueur);}
    }

     else if(c==75){///GAUCHE
                while(!kbhit()){
				printf("gauche");
<<<<<<< HEAD
                if((pos_ypcman==1)&&(bord==0))
                {
                    pos_ypcman=48;

                }
                else if ((pos_ypcman==1)&&(bord==1))
                {
                    viejoueur = viejoueur -1;
                    reini_partie(tab_diam);
                    pos_xpcman = tab_diam[11]; pos_ypcman = tab_diam[12];
                }
                if((pos_ypcman<51)&&(pos_ypcman>0))
				{pos_ypcman=pos_ypcman-1;}
				sleep(400*vitesse);
=======
                if(pos_ypcman==1)
                {
                    pos_ypcman=50;
                }
                if((pos_ypcman<51)&&(pos_ypcman>0))
				{pos_ypcman=pos_ypcman-1;}
				sleep(500);
>>>>>>> b0fb3c1da86f05990594f79093e3479eb534e3de
				system("cls");
				displaytab(tab, pos_xpcman, pos_ypcman, tab_diam, viejoueur, score);}
				displaytab(tab, pos_xpcman, pos_ypcman, tab_diam, viejoueur);}
    }

  }

}



<<<<<<< HEAD

void reini_partie(int tab_diam[])
{
    system("cls");
    printf("\n BORD TOUCHE ! \n\n\n VOUS PERDEZ UNE VIE \n");
    system("PAUSE");
    position_alea2(tab_diam);
    printf("\n\n Reapparition position : %d et %d \n\n", tab_diam[11], tab_diam[12]);
    system("PAUSE");

}


=======
>>>>>>> b0fb3c1da86f05990594f79093e3479eb534e3de
int main()
{
    srand(time(NULL));

    int viejoueur =5;
    int bord =1;

     char tab[20][50]; ///crea tab

    int pos_xpcman=0;
    int pos_ypcman=0;
    int posx=2;
    int posy=2;
    int* pos_x= NULL;
    pos_x = &posx;
    int* pos_y=NULL;
    pos_y = &posy;
<<<<<<< HEAD
    int vitess =1; int vitesse =1;
    printf("\n Vitesse 1? 2? 3? : ");
    scanf(&vitess);
=======
    int viejoueur =5;
    int score =0;

>>>>>>> b0fb3c1da86f05990594f79093e3479eb534e3de


    init_tab_alea(tab);
    position_alea(pos_x,pos_y);
<<<<<<< HEAD
    int tab_diam[12]; ///position 0->9 X et Y des diam1,2,3,4,5 // Position 10 : score
=======
    int tab_diam[10];
    int tab_diam[10]; ///position 0->9 X et Y des diam1,2,3,4,5 // Position 10 : score
>>>>>>> b0fb3c1da86f05990594f79093e3479eb534e3de
    tab_diam[10] = 0;

    position_alea_diam(tab_diam);
<<<<<<< HEAD

=======
    displaytab(tab, posx, posy, tab_diam, viejoueur, score);
>>>>>>> b0fb3c1da86f05990594f79093e3479eb534e3de
    displaytab(tab, posx, posy, tab_diam, viejoueur);
    printf("Pos x : %d et Pos y : %d\n", *pos_x, *pos_y);

    for(int i = 0; i<10; i=i+2)
    {
        printf("Pos diam : %d et %d \n", tab_diam[i], tab_diam[i+1]);
    }
<<<<<<< HEAD
   deplacement(tab, posx, posy, tab_diam, viejoueur, bord,vitesse);



=======
   deplacement(tab, posx, posy, tab_diam, viejoueur, score);
   deplacement(tab, posx, posy, tab_diam, viejoueur);
>>>>>>> b0fb3c1da86f05990594f79093e3479eb534e3de


    return 0;
}
