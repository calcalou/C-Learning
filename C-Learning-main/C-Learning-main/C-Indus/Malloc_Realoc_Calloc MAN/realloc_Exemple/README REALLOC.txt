Dans cet exemple :

I     L'utilisateur est invité à saisir la taille initiale du tableau.
II    La mémoire nécessaire pour stocker un tableau d'entiers de cette taille est allouée dynamiquement à l'aide de la fonction malloc().
III   L'utilisateur saisit les éléments du tableau.
IV    Après l'affichage des éléments du tableau, l'utilisateur est invité à saisir la nouvelle taille du tableau.
V     Ensuite, la fonction realloc() est utilisée pour redimensionner le tableau pour la nouvelle taille.
VI    Les éléments du tableau après la réallocation sont affichés.
VII   Enfin, la mémoire allouée dynamiquement est libérée à l'aide de la fonction free().