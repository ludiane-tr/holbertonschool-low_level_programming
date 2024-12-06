# **Appels système d'entrée/sortie (I/O) sur les fichiers en C**

Ce dépôt contient un ensemble de programmes et de scripts pour explorer, comprendre et pratiquer les appels système d'I/O sur les fichiers en langage C. Ces programmes couvrent les opérations fondamentales telles que l'ouverture, la lecture, l'écriture et la fermeture de fichiers.

---

## **Objectifs d'apprentissage**

À la fin de ce projet, vous serez capable d'expliquer à quiconque, sans l'aide de Google :
### **Général**
- Rechercher les bonnes sources d'informations en ligne.
- Créer, ouvrir, fermer, lire et écrire dans des fichiers.
- Comprendre ce que sont les descripteurs de fichiers.
- Identifier les 3 descripteurs de fichiers standard, leur utilité et leurs noms POSIX :
  - `STDIN_FILENO` (entrée standard),
  - `STDOUT_FILENO` (sortie standard),
  - `STDERR_FILENO` (sortie d'erreur standard).
- Utiliser les appels système suivants :
  - `open`
  - `close`
  - `read`
  - `write`
  - `dprintf`
- Comprendre et utiliser les drapeaux suivants lors de l'ouverture des fichiers :
  - `O_RDONLY` (lecture seule)
  - `O_WRONLY` (écriture seule)
  - `O_RDWR` (lecture et écriture)
- Comprendre les permissions des fichiers et comment les définir lors de la création de fichiers avec l'appel système `open`.
- Comprendre ce qu'est un appel système.
- Faire la distinction entre une fonction et un appel système.

---

## **Exigences**

### **Général**
- Éditeurs autorisés : `vi`, `vim`, `emacs`.
- Tous les fichiers doivent être compilés sur **Ubuntu 20.04 LTS** avec `gcc` en utilisant les options :  
  ```bash
  -Wall -Werror -Wextra -pedantic -std=gnu89
