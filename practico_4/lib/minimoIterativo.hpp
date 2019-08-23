int minIterativo(
    int arreglo[],
    int largo
){
    int minimo = arreglo [0];
    for ( int i = 1; i<largo; i+=1 )

        if ( minimo > arreglo[i] )
            minimo = arreglo[i];

    return minimo;
}

