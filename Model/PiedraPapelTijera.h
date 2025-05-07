//
// Created by santiago on 7/05/2025.
//

#ifndef CASINO_POLIMORFISMO_PIEDRAPAPELTIJERA_H
#define CASINO_POLIMORFISMO_PIEDRAPAPELTIJERA_H
#include<cstdlib>
#include<ctime>

#include "Juego.h"
class PiedraPapelTijera : public Juego{
protected:
    int numeroCasino;
    float calcularResultado(float gonzosAportar) override;
public:
    void mostrarReglas() override;
    ~PiedraPapelTijera() override = default;
     float jugar(float gonzosApostar) override;
};


#endif //CASINO_POLIMORFISMO_PIEDRAPAPELTIJERA_H
