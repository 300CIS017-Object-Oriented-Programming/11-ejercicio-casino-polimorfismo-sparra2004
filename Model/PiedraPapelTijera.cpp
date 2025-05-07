//
// Created by santiago on 7/05/2025.
//

#include <iostream>
using namespace std;
#include "PiedraPapelTijera.h"

void PiedraPapelTijera::mostrarReglas(){
    cout << "REGLAS DEL JUEGO - PIEDRA, PAPEL O TIJERA:\n";
    cout << "1. PIEDRA vence a TIJERA\n";
    cout << "2. TIJERA vence a PAPEL\n";
    cout << "3. PAPEL vence a PIEDRA\n";
}
float PiedraPapelTijera::jugar(float gonzosApostar) {
    mostrarReglas();
    srand(time(nullptr));
    int opcionesMinJuegos = 1;
    int opcionesMaxJuegos = 3;
    numeroCasino = opcionesMinJuegos + rand() % opcionesMaxJuegos;
    int opc;
    cout << "\n Explicacion del juego \n";
    cout << "El numero uno (1) significa PIEDRA\n"
            "El numero dos (2) significa PAPEL\n"
            "El numero tres (3) significa TIJERA\n";
    cout << "Escribe la opcion: ";
    cin >> opc;

    cout << "La pc eligio: ";
    switch (numeroCasino) {

        case 1: cout << "PIEDRA\n"; break;
        case 2: cout << "PAPEL\n"; break;
        case 3: cout << "TIJERA\n"; break;
    }
    if(opc == numeroCasino){
        cout << "Empate\n";
        return 0;
    }
    else if((opc == 1 && numeroCasino == 3) || (opc = 2 && numeroCasino == 1) || (opc = 3 && numeroCasino == 2)){
        cout << "GANASTE\n";
        return gonzosApostar * 2;
    }
    else{
        cout << "PERDISTE\n";
        return -gonzosApostar;

    }

}

float PiedraPapelTijera::calcularResultado(float gonzosApostar) {

    return jugar(gonzosApostar);
}