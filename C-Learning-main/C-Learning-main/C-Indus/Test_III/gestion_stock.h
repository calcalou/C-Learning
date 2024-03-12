#ifndef GESTION_STOCK_H
#define GESTION_STOCK_H

#define MAX_ARTICLES 100

typedef struct // définitions de la structure Articles
{
    char nom[50];
    int qunatite;
    float prix;

} Articles;


typedef struct // définitions d'un autre structure en fonction de la première
{             
    Articles articles[MAX_ARTICLES];// cahque case du tabeau 'articles' comprend chaque éléments de la structure 'Articles'
    int nbarticles;

} Gestion_Stock;

//définitions des fonctions
void ajouterArticles(Gestion_Stock *Gestion);
void listerArticles(Gestion_Stock *Gestion);
void rechercherArticles(Gestion_Stock *Gestion);

#endif