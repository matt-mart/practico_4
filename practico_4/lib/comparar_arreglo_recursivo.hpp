
bool Comparar_Arreglo_Recursivo(
  int arreglo_a[],
  int arreglo_b[],
  int largo
){

  //----------------------------------------------------------//

  largo -= 1;

  if( largo == -1 )
    return true;

  //----------------------------------------------------------//

  if ( arreglo_a[largo] != arreglo_b[largo] )
    return false;


  //----------------------------------------------------------//

  return Comparar_Arreglo_Recursivo(
    arreglo_a ,
    arreglo_b,
    largo
  );

  //----------------------------------------------------------//

}

