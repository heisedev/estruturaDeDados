#include <iostream>
using namespace std;

template<typename T, int MAX>

bool existeElemento (FilaEstaticaGenerica<T1, MAX> filaA, FilaEstaticaGenerica<T2, MAX> filaB)
{
    int i = 1;
    int posicao = filaA.inicio;
    int posicao2 = filaB.inicio;
    while (i <= filaA.cardinalidade)
    {
        posicao++;
        if (posicao > MAX - 1)
        {
            posicao = 0;
        }
        for (int j = 1; j <= filaB.cardinalidade; j++)
        {
            posicao2++;
            if (posicao2 > MAX - 1)
            {
                posicao2 = 0;
            }
            if (filaA.elementos[i] != filaB.elementos[j])
            {
                return false;
            }
        }
        i++;
    }
    return true;
}
