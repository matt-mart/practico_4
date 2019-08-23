
bool Comparar_Arreglo_Iterativo(
  int arreglo_a[],
  int arreglo_b[],
  int largo
){

  //----------------------------------------------------------//

  for ( int i=0; i<largo; i+=1 ){
    if ( arreglo_a[i] != arreglo_b[i] )
      return false;

  //----------------------------------------------------------//

  return true;

  //----------------------------------------------------------//

}
