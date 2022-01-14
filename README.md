# SE201 - PR1

## Structure du dépot


- Le dossier `doc` ne contient que des fichiers relatifs au sujet, pas notre travail.
- Les dossiers `partX` réfèrent aux quatre parties du sujet. Ils contiennent des notes / code sources / images relatives aux parties.
- Le dossier `rapport` contient tous les fichiers utiliser dans la création du rapport (.md, images, Makefile pour la compilation en pdf)


## Fichiers sources


- Le code source de la fonction C, des fichiers objets associés et les dumps en assembleur sont tous disponibles dans le dossier `part2`. Il y a également le Makefile utilisé pour nous faciliter la tâche.
- Le fichier .md du diagramme du flot d'exécution est disponible dans le dossier `part3`. Le diagramme est également inclus dans le rapport (il y est plus lisible), il peut donc être visionné de deux façon.


## Utilisation des Makefile pour MarkDown


Pour utiliser les Makefile compilant les fichiers .md (rapport et diagramme d'exécution), il faut procéder à quelques ajustement. Un argument de la ligne de commande utilisée est le chemin vers le compilateur `pdflatex`. Cet argument est parfois optionnel, mais dans tous les cas il est propre à l'utilisateur.