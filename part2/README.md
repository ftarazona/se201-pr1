# Observations sur les codes compilés

## Sans optimisation

Sans optimisation, le compilateur utilise de nombreux accès mémoires à la pile.
À chaque définition de variable, un espace est utilisé sur la pile.
On remarque d'ailleurs que celle-ci a une taille de 48 mots-mémoire, alors que
seuls 7 seront finalement utilisés (return address, frame pointer, loop index,
4 arguments).
Ceci est dû à la manière dont gcc alloue la pile. Il cherche à aligner la taille
de cette dernière sur un multiple de 16 bytes pour l'architecture RISC V.

On peut ensuite déterminer clairement la tradution du programme.

## Avec optimisation

Avec l'optimisation, le code subit certaines factorisations (e.g. de multiples
return -1 se tranformeront en plusieurs sauts vers une même instruction).
De plus, il n'y a pas de manipulation directe de la pile, les accès mémoire sont
réduits au strict minimum.

On constate par rapport au code fourni en partie 1 que l'incrémentation des
adresses est effectué juste après les accès mémoire. Cela a un sens en
particulier dans le cas d'une implémentation de type "stall".
Dans le code fourni, on avait addition des deux valeurs récupérées juste après
leur récupération. Cette addition devait attendre que l'instruction de lecture
soit finie. En faisant les incréments avant, on ne perd plus d'instructions car
celles-ci ne nécessitent pas les valeurs lues.
