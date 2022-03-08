/**
* La fonction Tri_bulle permet de trier un tableau de nombres floats de taille variables
* à l'aide de l'algorithme de tri par bulle
* @author  Maxime BENUCCI
* @version 1.0
* @since  
*/

void tri_bulle(float tab[], int size){
    float tmp;
    int i,j,changeA=0, changeB=0;

    for(i=0; i<=size; i++) {
        for (j=0; j<size-1; j++) {
            if (tab[j] > tab[j+1]) {
                tmp = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = tmp;
                changeB++;
            }
        }

        if (changeA==changeB){
            break;
        }
        changeB=0;
    }
}

void tri_insertion(float t[],int taille) {

    int i, j;
    float tmp;

    for (i = 1; i < taille; i++) {
        tmp = t[i];
        //On compare la valeur dans n+1 par rapport à n
        for (j = i; j > 0 && t[j-1] > tmp; j--) {
            t[j] = t[j - 1];
        }
        t[j] = tmp;
    }
}

void tri_selection(float tab[], int size){

    int i,j, index;
    float swap;
    
    for (i = 0; i < size-1; i++){ //Recherche du plus petit element
        index = i;
        for (j = i + 1; j < size; j++){
            if (tab[index] > tab[j]){
                index = j;
            }
        }
        
        if (index != i){
            swap = tab[i];
            tab[i] = tab[index];
            tab[index] = swap;
        }
    }
}

void sur_le_tas(float t[], int n, int i) {
    int max = i;
    int gauche = 2 * i + 1;
    int droite = 2 * i + 2;

    if (gauche < n && t[gauche] > t[max])
        max = gauche;

    if (droite < n && t[droite] > t[max])
        max = droite;


    if (max != i) {
        //on inverse les valeurs du tableau
        float a = t[i];
        float b = t[max];
        t[max]=a;
        t[i]=b;
        sur_le_tas(t, n, max);
    }
}


void tri_tas(float t[], int taille) {
    
    for (int i = taille / 2 - 1; i >= 0; i--)
        sur_le_tas(t, taille, i);

    for (int i = taille - 1; i >= 0; i--) {
        float a = t[0];
        float b = t[i];
        t[i] = a;
        t[0] = b;
        sur_le_tas(t, i, 0);
    }
}