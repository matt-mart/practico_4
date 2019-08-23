
//------------------------------------------------------------//

#include <iostream>
//
#include "./lib/intercambiar.hpp"
//
#include "./lib/mostrar_arreglo.hpp"
//
#include "./lib/comparar_iterativo.hpp"
#include "./lib/comparar_recursivo.hpp"
//
#include "./lib/ocurrencias_iterativo.hpp"
////#include "./lib/ocurrencias_recursivo.hpp"
//
#include "./lib/invertir_iterativo.hpp"
#include "./lib/invertir_recursivo.hpp"
//
#include "./lib/minimo_iterativo.hpp"
///// #include "./lib/minimo_recursivo.hpp"
//
#include "./lib/maximo_iterativo.hpp"
///// #include "./lib/maximo_recursivo.hpp"
//
#include "./lib/total_iterativo.hpp"
#include "./lib/total_recursivo.hpp"

//------------------------------------------------------------//

int main()
{

  constexpr int largo = 5;
            int arreglo [ largo ];
        int n=0;

std::cout << " Array normal: " << std::endl;
Mostrar_Arreglo( arreglo, largo );
std::cout<< " "<<std::endl;
Invertir_Recursivo(arreglo, largo);

std::cout << " Array invertido: " << std::endl;

Mostrar_Arreglo( arreglo, largo );

return 0;

//----------------------------------------------------------//

}
