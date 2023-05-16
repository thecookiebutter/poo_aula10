#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Criacao das variaveis e da array
    int salas[2][6];
    int soma, media;
    
    // Colocando valores na primeira coluna da array
    for(int i = 0; i < 6; i++){
    salas[0][i]=i+1;
    };
    
    // Colocando valores na segunda coluna da array
    salas[1][0] = 35;
    salas[1][1] = 4;
    salas[1][2] = 22;
    salas[1][3] = 20;
    salas[1][4] = 36;
    salas[1][5] = 30;
    soma = 0;
    
    // Compara valores da array entre si, registra media
    for(int i = 0; i < 6; i++){
        soma = soma + salas[1][i];
        if(i>0){media = soma / (i+1);};
    };
    
    cout << "Media de pessoas por sala: " << media << endl;
    
    cout << "Salas que tem quantidade de pessoas acima da media: " << endl;
    
    // Mostra o resultado pro usuario
    for(int i = 0; i < 6; i++){
        if(salas[1][i]>media){
            cout <<  "Sala " << salas[0][i] << endl;};
    };
    
    return 0;
}