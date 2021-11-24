#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
//--------------------Déclaration globale du compteur des clients n --------------------------------
int n = 5;
//---------------------Déclaration de type structure compte-----------------------------------------
typedef struct {
		char cin[10];
		char nom[30];
		char prenom[30];
		float montant;
	} compte ;
//--------------------Déclaration et initialisation de variable de type structure compte ----------
compte cpte[50]={{"UU100","roussafi","fahd",5000},{"UU200","ali","med",8000},{"UU300","adil","adil",100},{"UU400","med","bbbb",15000},{"UU500","kenza","zzzz",1400}};
//-------------------fonctions de gestion des comptes bancaires -----------------------à------------
void introduire(){
 	int i=n;
 	char autre;
 	do {
        	system("cls");
        	printf("\t\tIntroduire un ou plusieurs comptes bancaires\n\n\n");  	 
        	printf ("CIN : ");
        	scanf("%s",&cpte[i].cin);
        	printf ("Nom : ");
        	scanf("%s",&cpte[i].nom);
        	printf ("Prenom : ");
        	scanf("%s",&cpte[i].prenom);
        	printf ("Montant : ");
        	scanf("%f",&cpte[i].montant);
			n++;  
			for(i=0;i<n;i++)  // boucle pour tester le nombre des comptes
        	{}
			printf("Introduire un autre compte (o/n)? ");
        	autre=getch();
    } while(autre!='n');  
}
//------------------fonctions des opérations bancaires -------------------------------------------
void depot()
{
    int i,t;
    char cin[10];
    float mt;
	system("cls");
	printf("\t\tDépot\n\n\n");
	printf("Entrer CIN : ");
	scanf("%s",cin);
	for(i=0;i<n;i++) 
	{
		if (strcmp(cpte[i].cin,cin)==0)  // comparaison de cin 
        {
           t=0;                        
        }
	}
    if (t==0) // comparaison de t 
    {	
	    printf("Entrer le montant : ");
	    scanf("%f",&mt);
	    cpte[i].montant+=mt;
	    printf("\t\tOperation effectuee ...\n\n\n");
     }
	else
	    printf("cin innexistant.\n");
		system("pause");    
}
void retrait()
{
int i,t;
    char cin[10];
    float mt;
	system("cls");
	printf("\t\tRetrait\n\n\n");
	printf("Entrer CIN : ");
	scanf("%s",cin);
	for(i=0;i<n;i++)
	{
		if (strcmp(cpte[i].cin,cin)==0)
        {
           t=0;       
		   break;               // sortir de la boucle       
        }
     
 	}
    if (t==0)
    {	
	    printf("Entrer le montant : ");
	    scanf("%f",&mt);
	    cpte[i].montant-=mt;
	    printf("\t\tOperation effectuee ...\n\n\n");
     }
	else
	    printf("cin innexistant.\n");
	system("pause");   
}
//-------------------fonctions d'affichage des comptes bancaires ----------------------------------
void afficher1()	{
	int i,j;
	compte tmp;
	system("cls");
	printf("\t\tAffichage par ordre ascendant\n\n\n");
    for(i=0;i<n;i++)
    {
       for(j=i+1;j<n;j++)
       {
          if(cpte[j].montant<cpte[i].montant)
          {
               tmp=cpte[i];
               cpte[i]=cpte[j]; // le tri par selection 
               cpte[j]=tmp;                              
          }               
       }
    }

	for(i=0;i<n;i++)
	{
		printf(" \t%s\t%s\t%s\t%.2f\n",cpte[i].cin,cpte[i].nom,cpte[i].prenom,cpte[i].montant);
	}
	system("pause");
}
void afficher2()	{
	int i,j;
	compte tmp;
	system("cls");
	printf("\t\tAffichage par ordre descendant\n\n\n");
    for(i=0;i<n;i++)
    {
       for(j=i+1;j<n;j++)
       {
          if(cpte[j].montant>cpte[i].montant)
          {
               tmp=cpte[i];
               cpte[i]=cpte[j];
               cpte[j]=tmp;                              
          }               
       }
    }

	for(i=0;i<n;i++)
	{
		printf(" \t%s\t%s\t%s\t%.2f\n",cpte[i].cin,cpte[i].nom,cpte[i].prenom,cpte[i].montant);
	}
	system("pause");
}
void afficher3()	{
	int i,j;
	compte tmp;
	float x;
	system("cls");
	printf("\t\tAffichage ordre ascendant des comptes ayants un montant>un chiffre saisi\n\n\n");
	printf("Entrer un chiffre : ");
	scanf("%f",&x);
    for(i=0;i<n;i++)
    {
       for(j=i+1;j<n;j++)
       {
          if(cpte[j].montant<cpte[i].montant)
          {
               tmp=cpte[i];
               cpte[i]=cpte[j];
               cpte[j]=tmp;                              
          }               
       }
    }

	for(i=0;i<n;i++)
	{
		if (cpte[i].montant>x)
        printf(" \t%s\t%s\t%s\t%.2f\n",cpte[i].cin,cpte[i].nom,cpte[i].prenom,cpte[i].montant);
	}
	system("pause");
	
}
void afficher4()	{
	int i,j;
	compte tmp;
	float x;
	system("cls");
	printf("\t\tAffichage ordre descendant des comptes ayants un montant>un chiffre saisi\n\n\n");
	printf("Entrer un chiffre : ");
	scanf("%f",&x);
    for(i=0;i<n;i++) // boucle pour tester le nombre des comptes
    {
       for(j=i+1;j<n;j++) //
       {
          if(cpte[j].montant>cpte[i].montant) //
          {
               tmp=cpte[i];
               cpte[i]=cpte[j];
               cpte[j]=tmp;                              
          }               
       }
    }

	for(i=0;i<n;i++)
	{
		if (cpte[i].montant>x)
        printf(" \t%s\t%s\t%s\t%.2f\n",cpte[i].cin,cpte[i].nom,cpte[i].prenom,cpte[i].montant);
	}
	system("pause");
	
}
void rechercher()	{
    int i,t;
    char cin[10];
	system("cls");
	printf("\t\tRecherche\n\n\n");
	printf("Entrer CIN : ");
	scanf("%s",cin);
	for(i=0;i<n;i++)
	{
		if (strcmp(cpte[i].cin,cin)==0) // comparaison de CIN
        {
          t=0;
           break;                     
        }
	}
    if (t==0)	
	    printf(" \t%s\t%s\t%s\t%.2f\n",cpte[i].cin,cpte[i].nom,cpte[i].prenom,cpte[i].montant);
	else
	    printf("compte innexistant.\n");
	system("pause");    
}
//---------------------------fonction de fidélisation ---------------------------------------------------
void fideliser()	{
     int i,j;
	compte tmp;
	system("cls");
    for(i=0;i<n;i++)
    {
       for(j=i+1;j<n;j++)
       {
          if(cpte[j].montant>cpte[i].montant)
          {
               tmp=cpte[i];
               cpte[i]=cpte[j];
               cpte[j]=tmp;                              
          }               
       }
    }
	for(i=0;i<3;i++)
	{
		cpte[i].montant+=cpte[i].montant*0.013;
	}
	printf("\t\tOperation effectuee ...\n\n\n");
	system("pause");
}
//-------------------------Menu des opérations bancaires -----------------------------------------------
void menuop()
{		
              int choix;
              do {             
				system("cls");
                printf("\t\tMenu - Operations\n");
				printf("\t\t--------------\n\n\n");
				printf("\t1. Depot \n\n");
				printf("\t2. Retrait \n\n");
				printf("\t3. Retour \n\n");
			    printf("\t\tEntrez votre choix ? ");
			    scanf("%d",&choix);
			  switch(choix)
			    {
                             case 1 : depot();break;
                             case 2 : retrait();break;
                           
                }
           } while(choix!=3);
}
// ---------------------Menu d'affichage des comptes bancaires ---------------------------
void menuaff()
{		
              int choix;
             do {             
				system("cls");
                printf("\t\tMenu - Affichage\n");
				printf("\t\t--------------\n\n\n");
				printf("\t1. Affichage par ordre ascendant\n\n");
				printf("\t2. Affichage par ordre descendant\n\n");
				printf("\t3. Affichage ordre ascendant des comptes ayants un montant>un chiffre saisi\n\n");
				printf("\t4. Affichage ordre descendant des comptes ayants un montant>un chiffre saisi\n\n");
				printf("\t5. Recherche par CIN \n\n");
				printf("\t6. Retour\n\n");
			    printf("\t\tEntrez votre choix ? ");
			    scanf("%d",&choix);
			  switch(choix)
			    {
                             case 1:afficher1();break;
                             case 2:afficher2();break;
                             case 3:afficher3();break;
                             case 4:afficher4();break;
                             case 5:rechercher();break;      
                }
             } while(choix!=6);
}
// ----------------------- FONCTION  P R I N C I P A L -------------------------
int main()
{
 int choix;
             do {             
				system("cls");
                printf("\t\tMENU PRINCIPAL\n");
				printf("\t\t--------------\n\n\n");
				printf("\t1. Introduire un ou plusieurs comptes bancaires\n\n");
				printf("\t2. Operations \n\n");
				printf("\t3. Affichage \n\n");
				printf("\t4. Fedilisation\n\n");
				printf("\t5. Quitter l'application\n\n");
			    printf("\t\tEntrez votre choix ? ");
			    scanf("%d",&choix);
			  switch(choix)
			    {
                             case 1:introduire();break;
                             case 2:menuop();break;
                             case 3:menuaff();break;
                             case 4:fideliser();break;
                }
             } while(choix!=5);
   return 0;
}
