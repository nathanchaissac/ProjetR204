# ProjetR204

Nous avons choisis le sujet 3, qui consiste à chiffrer un message via deux méthodes différentes. L'application développée permet donc de chiffrer ou de déchiffrer un message donné; grâce à une clé de chiffrement pour la méthode César, et un mot ou une phrase pour la méthode Vigenère.

Membres de l'équipe:
    -PETIT Auxence
    -LECLERC Flavien
    -BIBICH Rim
    -CHAISSAC Nathan

Présentation des fonctions:

    -bool verifTexte(char tab[10000]) : Permet de vérifier la conformité du texte saisit(tab). Renvoie vrai si le caractère est alphanumérique, faux sinon. Les accents n'étants pas gérés, ils font eux aussi renvoyer faux à la fonction.

    -char* chiffreTexteVigenere(char tab[10000],char k[1000]) : Chiffre le texte saisit par l'utilisateur(tab) à l'aide de la chaîne de chiffrement(k). Renvoie la chaîne de caractère résultante.

    -char* dechiffreTexteVigenere(char tab[10000],char k[1000]) : Déchiffre le texte saisit par l'utilisateur(tab) à l'aide de la chaîne de chiffrement(k). Renvoie la chaîne de caractère résultante.

    -char* chiffreTexte(char tab[10000],int k) : Chiffre le texte saisit par l'utilisateur(tab) à l'aide de la clé donnée(k). Renvoie la chaîne de caractère résultante.

    -char* dechiffreTexte(char tab[10000],int k); Déchiffre le texte saisit par l'utilisateur(tab) à l'aide de la clé donnée(k). Renvoie la chaîne de caractère résultante.