#include <stdio.h>
#include <stdlib.h>

int main()
{
    char chaine1[100],chaine2[100];
    unsigned long longueurChaine1=0U,longueurChaine2=0U;
    long ok=0U,marche=0U;
    int i=0,j=0;

    printf ("\\\\\\\\\\\\VERIFICATEUR D'ANAGRAMME\\\\\\\\\\\\\\\\\n");

    printf("entrer le premier mot\n");
    scanf("%s",&chaine1);
    printf("entrer la second mot\n");
    scanf ("%s",&chaine2);


    longueurChaine1 = strlen(chaine1);
    longueurChaine2 = strlen(chaine2);

    if(longueurChaine1 != longueurChaine2)   // teste si il ya le meme nb de char
    {
       ok=1;
    }

    for(j=0;j<longueurChaine1;j++)
    {
        for(i=0;i<longueurChaine1;i++)
        {
            if(chaine1[j]==chaine2[i])
            {
                marche++;                 
                i=longueurChaine1;
            }
        }
    }

    if(marche == longueurChaine1)
    {
    	printf ("%s  et  %s  sont des anagrammes\n",chaine1,chaine2);
    }
    else
    {
    	printf ("%s et  %s  ne sont pas des anagrammes\n",chaine1,chaine2);
    }
    return 0;
}
