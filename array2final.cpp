#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Criacao das variaveis e da array
    int salas[6][2];
    int soma, media, menor, maior;
    soma = 0;
    menor = 8001;
    maior = 0;
    
    // Colocando valores na array
    for(int i = 0; i < 6; i++){
	salas[i][0] = i+1;
        cout << "Insira a quantidade de pessoas da sala: " << salas[i][0] << endl;
        cin >> salas[i][1];
    };

    // Calculo da media
    for(int i = 0; i < 6; i++){
        soma = soma + salas[i][1];
        if(i>0){media = soma / (i+1);};
    };
    cout << "Média de pessoas por sala: " << media << endl;
    
    // Calculo do menor e maior valor presentes na array
    for(int i = 0; i < 6; i++){
        if(salas[i][1]>maior){maior = salas[i][1];};
    };
    for(int i = 0; i < 6; i++){
    if(salas[i][1]<menor){menor = salas[i][1];};
    };
    cout << "Salas que tem menor quantidade de pessoas: " << menor << endl;
    cout << "Salas que tem maior quantidade de pessoas: " << maior << endl;
    
    return 0;
}