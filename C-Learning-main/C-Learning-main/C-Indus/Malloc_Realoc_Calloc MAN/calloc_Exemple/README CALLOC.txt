Dans cet exemple, calloc() est utilisé pour allouer de la mémoire pour un tableau d'entiers de taille n.
Contrairement à malloc(), calloc() initialise la mémoire allouée à zéro, 
ce qui signifie que le tableau est initialisé avec des zéros avant que l'utilisateur n'entre ses valeurs.

Le reste du code est similaire à l'exemple utilisant malloc(). 
Une fois que l'utilisateur a entré les valeurs du tableau et qu'elles ont été affichées,
la mémoire allouée dynamiquement est libérée à l'aide de free().