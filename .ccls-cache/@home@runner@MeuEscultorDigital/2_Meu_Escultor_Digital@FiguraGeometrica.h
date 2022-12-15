/* Observaco: O metodo virtual void draw recebe, 
como parametro em nosso codigo, um objeto da classe Sculptor.
*/
#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H

#include "Sculptor.h"

class FiguraGeometrica // superclasse, todas as outras irao herdar ela
{
    protected:
        float r, g, b, a; // ira armazenar as cores que estao sendo trabalhadas atualmente
    public:
        FiguraGeometrica(){}
        virtual ~FiguraGeometrica(){}
        virtual void draw(Sculptor &s)=0; // metodo virtual puro, aponta para o metodo draw das outras classes
};

#endif // FIGURAGEOMETRICA_H