# se201-pr1

## Part 1: RISC-V Instruction Set

L'objectif de cette partie est de comprendre le jeu d'instruction RISC-V et la façon dont les processeurs RISC-V sont encodés.

### Determiner chaque instruction et leur format

1. On traduit en binaire les instructions données en hexadécimale.
2. A l'aide de la documentation RISC-V (p.130) et de la dernière page du sujet, on identife le format des instructions et on trouve les mnémoniques associés aux suites de bits.

    **Rappel sur les formats d'instruction:**
    
    * R: instruction opérant sur des registres
    * I: instruction manipulant une constante "immediate" (ou aussi pour charger une valeur de la mémoire)
    * S: instruction pour stocker une valeur dans la mémoire (utilise un immediate pour l'offset éventuel)
    * SB: instruction pour faire un branchement conditionnel
    * U et UJ (il n'y en a pas dans ce programme): instruction ou saut comprenant une constante "immediate" grande (20 bits au lieu de 12)

### Determiner les opérandes et les registres
3. opérandes
4. a? symbolic name / n° x??