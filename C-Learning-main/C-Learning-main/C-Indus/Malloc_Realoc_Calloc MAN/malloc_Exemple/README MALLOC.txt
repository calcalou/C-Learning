Dans cet exemple :

I     L'utilisateur est invité à saisir la taille du tableau.
II    La mémoire nécessaire pour stocker un tableau d'entiers de cette taille est allouée dynamiquement à l'aide de la fonction malloc().
III   Si l'allocation de mémoire échoue (par exemple, si la mémoire demandée n'est pas disponible), le programme affiche un message d'erreur et quitte.
IV    Ensuite, l'utilisateur est invité à saisir les éléments du tableau.
V     Les éléments du tableau sont affichés.
VI    Enfin, la mémoire allouée dynamiquement est libérée à l'aide de la fonction free().