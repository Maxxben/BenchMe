#include <stdio.h>
#include <time.h>
#include <string.h>
#include <math.h>
#include <malloc.h>
#include <stdlib.h>
#include "fonctions.h"

float *getTab(int size, int graine){
    float *tab = (float*) malloc(sizeof(float) * size);
    srand(graine);
    for (int i=0; i < size; i++)
    {
        tab[i] = ((float)rand() / (float)(RAND_MAX)) * size;
    }
    return tab;
}

void writeValueTab(char *fichier, double unChiffre){
    FILE *fp = fopen(fichier, "a");
    fprintf(fp, "%.8f\n", unChiffre);
    fclose(fp);
}

void writeValue(char *fichier, double unChiffre){
    FILE *fp = fopen(fichier, "a");
    fprintf(fp, "\n%.8f\n", unChiffre);
    fclose(fp);
}

void writeChar(char *fichier, char *caract){
    FILE *fp = fopen(fichier, "a");
    fprintf(fp, "%s", caract);
    fclose(fp);
}

double temps(clock_t t1, clock_t t2){

    double time = (double)(t2 - t1)/CLOCKS_PER_SEC;
    return time;
}

void traitement(char *filename){

    int i,j,m=1;

    for (int k = 2; k < 6; k++) {
        int size = pow(10, k);

        double moy_ts;
        double moy_ti;
        double moy_tb;
        double moy_tt;

        for (int i = 0; i < 3; i++) {
            float *t = getTab(size, i+1);

            clock_t ts_debut = clock();
            tri_selection(t, size);
            clock_t ts_fin = clock();
            double temps_ts = temps(ts_debut,ts_fin);
            moy_ts += temps_ts;

            clock_t ti_debut = clock();
            tri_insertion(t, size);
            clock_t ti_fin = clock();
            double temps_ti = temps(ti_debut,ti_fin);
            moy_ti += temps_ti;
         
            clock_t tb_debut = clock();
            tri_bulle(t, size);
            clock_t tb_fin = clock();
            double temps_tb = temps(tb_debut,tb_fin);
            moy_tb += temps_tb;

            clock_t tt_debut = clock();
            tri_tas(t, size);
            clock_t tt_fin = clock();
            double temps_tt = temps(tt_debut,tt_fin);
            moy_tt += temps_tt;


        }

        writeValue(filename, size);

        writeChar(filename, "Tri_selection;");
        writeValueTab(filename, moy_ts/3);

        writeChar(filename, "Tri_insertion;");
        writeValueTab(filename, moy_ti/3);

        writeChar(filename, "Tri_bulle;");
        writeValueTab(filename, moy_tb/3);

        writeChar(filename, "Tri_tas;");
        writeValueTab(filename, moy_tt/3);

    }
    
}


