#ifndef OBJETTP2_FONCTIONS_H
#define OBJETTP2_FONCTIONS_H

void traitement(char *filename);

void tri_bulle(float tab[], int size);
void tri_insertion(float t[],int taille);
void tri_selection(float tab[], int size);
void sur_le_tas(float tab[], int size);
void tri_tas(float t[], int taille);

void bench_tas();
void bench_bulle();
void bench_insertion();
void bench_selection();
#endif //OBJETTP2_FONCTIONS_H
