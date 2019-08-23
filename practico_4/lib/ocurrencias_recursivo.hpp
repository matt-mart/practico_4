int Ocurrencias_Recursivo (
  int arreglo[],
  int largo,
  int valor
){

  //----------------------------------------------------------//

  largo -= 1;

  //----------------------------------------------------------//

  if ( largo == -1 )
      return;

  //----------------------------------------------------------//

  int ocurrencia = ( arreglo[ largo ] == valor );

  //----------------------------------------------------------//

  return ocurrencia
       + Ocurrencias_Recursivo(
          arreglo[],
          largo,
          valor
        );


  //----------------------------------------------------------//

}

