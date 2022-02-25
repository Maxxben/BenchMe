# Readme Benchme 
## installation
### windows
pour build l'application sur windows, se placer dans le repertoire cmake-build-debug
et executer 
```shell
minwg32-make
```
on genere ainsi un fichier Benchme.exe
### Linux
pour build l'application sur linux, se placer dans le repertoire Benchme
et executer 
```shell
make
```
## Utilisation
pour lancer les tests 
```shell
./Benchme.exe {algorithme a utiliser} {nom du fichier}
```
pour les algorithme de tri on peut utiliser
* 1 = selection
* 2 = insertion
* 3 = bulle
* 4 = Tas

pour le nom du fichier ecrire simplement le nom sans l'extension (le fichier sera un .scv)
