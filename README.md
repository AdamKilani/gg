## Jeu Mastermind en C

### Introduction
Ce projet est une implémentation basée sur la console du jeu classique Mastermind en utilisant le langage de programmation C. Le jeu permet aux joueurs de deviner une séquence de 4 couleurs secrètes en 10 essais ou moins.

### Manuel d'Utilisateur
#### Comment Compiler et Jouer au Jeu
1. Clonez le dépôt sur votre machine locale.
2. Accédez au répertoire contenant les fichiers sources.
3. Compilez le jeu en utilisant le Makefile fourni en exécutant la commande :
```
make
```
4. Exécutez l'exécutable généré :
```
./mastermind
```
5. Suivez les invites pour faire vos suppositions.
6. Devinez la séquence de couleurs secrètes en moins de 10 essais pour gagner le jeu.

### Manuel du Développeur
#### Compilation et Débogage
- Pour compiler le projet, exécutez simplement :
5. Suivez les invites pour faire vos suppositions.
6. Devinez la séquence de couleurs secrètes en moins de 10 essais pour gagner le jeu.

### Manuel du Développeur
#### Compilation et Débogage
- Pour compiler le projet, exécutez simplement :
```
make
```
- Pour nettoyer les fichiers générés, y compris les fichiers objets et les exécutables, exécutez :
```
make clean
```

#### Contribution de Nouveau Code
- Forkez le dépôt et créez une nouvelle branche pour vos modifications.
- Effectuez vos modifications et commitez-les avec des messages de commit descriptifs.
- Poussez vos modifications vers votre dépôt forké.
- Soumettez une pull request vers le dépôt principal pour examen.

#### Compréhension de l'Architecture du Code
- `main.c` : Point d'entrée du jeu, gère les interactions avec l'utilisateur et la boucle de jeu.
- `mastermind.c` : Implémente la logique de jeu principale, y compris la génération du code secret et l'évaluation des suppositions.
- `color.c` : Fournit des fonctions pour colorer la sortie de la console.
- `file_handling.c` : Gère le chargement des séquences de couleurs à partir d'un fichier.
- `mastermind.h`, `color.h`, `file_handling.h` : Fichiers d'en-tête contenant les prototypes de fonctions et les constantes.
- `sequence.txt` : Fichier d'exemple contenant des séquences de couleurs.

### Rapport du Projet
#### Organisation du Groupe
- Membres du Groupe : [Listez les membres du groupe ici]
- URL du Dépôt Git : [Fournissez l'URL ici]

#### Processus de Développement
- Le projet a été divisé en tâches, chaque membre étant responsable de tâches spécifiques.
- Des réunions régulières ont été tenues pour discuter des progrès, des défis et des ajustements du plan du projet.

#### Défis et Adaptations
- **Défi** : Implémentation de la gestion de fichiers pour charger les séquences de couleurs.
- **Adaptation** : Utilisation de la fonction `fscanf` et mise en place de vérifications de validation pour s'assurer que les séquences chargées sont valides.

#### Choix de Conception
- Choix d'implémenter des modules distincts pour différents aspects du jeu (par exemple, logique de jeu, manipulation des couleurs) pour favoriser la modularité et la maintenabilité.
- Implémentation d'une bibliothèque de couleurs pour améliorer l'attrait visuel de l'interface du jeu.

#### Fonctionnalités Additionnelles
- Support du mode difficile où les séquences peuvent avoir des occurrences répétées de la même couleur.
- Sortie colorée de la console pour une expérience utilisateur plus engageante.

### Conclusion
Le projet Mastermind a fourni une expérience précieuse dans l'application des concepts de programmation C et une collaboration efficace dans un environnement de groupe. L'implémentation répond aux exigences spécifiées et offre une expérience de jeu agréable pour les joueurs.
