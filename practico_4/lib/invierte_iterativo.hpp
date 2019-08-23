void Invierte_Iterativo(
int arreglo[],
int largo
){

    for ( int i = 0; i < (largo/2) ; i+=1){
        std::swap(
                (arreglo [i]),
                (arreglo[largo-1-i])
                );
}




}


