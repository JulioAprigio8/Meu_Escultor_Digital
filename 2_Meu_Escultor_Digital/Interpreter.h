#ifndef INTERPRETER_H
#define INTERPRETER_H

#include "FiguraGeometrica.h"
#include <vector>
#include <string>

using namespace std;

class Interpreter // classe interpretador, ira analisar o documento e criar o desenho
{
    private:
        int dx, dy, dz; // recebe as dimensoes x, y e z do espaco que ira ser trabalhado
        float r, g, b, a; // recebe as cores
    public:
        Interpreter(); // construtor da classe
        virtual ~Interpreter(){} // destrutor da classe
        vector<FiguraGeometrica *> analise(string filename); /* m�todo mais importante da classe, ele que ira analisar
        o que est� escrito no documento, retorna um ponteiro para figura geom�trica e recebe o nome de um arquivo*/
        int getDX(); // retorna a dimensao x
        int getDY(); // retorna a dimensao y
        int getDZ(); // retorna a dimensao z
};

#endif // INTERPRETER_H
