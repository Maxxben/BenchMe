//
// Created by 
//

#ifndef OBJETTP2_FONCTIONS_H
#define OBJETTP2_FONCTIONS_H

void Traitement(char *filename);

void Tri_bulle(float tab[], int size);
void Tri_insertion(float t[],int taille);
void Tri_selection(float tab[], int size);
void Sur_le_tas(float tab[], int size);
void Tri_tas(float t[], int taille);

void Bench_Tas();
void Bench_bulle();
void Bench_insertion();
void Bench_selection();
#endif //OBJETTP2_FONCTIONS_H
