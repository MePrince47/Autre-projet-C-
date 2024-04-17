#include <stdio.h>
#include <stdlib.h>
#include "header.h"
int main()
{
    bonjour();
    bonjours();

    typedef struct list
    {
        int value;
        struct list *next;
    }list;

    list *ajouter(list *li,int x)
    {

    list *element;
    element = malloc(sizeof(*element));
    if (element==NULL)
    {
        fprintf(stderr,"Erreur d'allocation");
        exit(EXIT_FAILURE);
    }
    element->value=x;

    if(li == NULL)
    element->next=NULL;
    else
    element->next=li;

    return element;
    }

    void afficher(list *li)
    {
          if(li == NULL)
    {
        printf("La liste est vide \n");
        return;
    }
while(li!=NULL)
{
    printf("|%d|",li->value);
    li = li->next;
}
printf("\n");
    }

    list *li;
    li=NULL;

    ajouter(li,10);
    ajouter(li,104);

    afficher(li);
    return 0;
}
