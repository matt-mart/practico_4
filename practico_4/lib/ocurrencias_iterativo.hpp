
//------------------------------------------------------------//

int Ocurrencias_Iterativo (
  int _arreglo [],
  int _valor,
  int _largo
){

  //----------------------------------------------------------//

  int ocurrencias = 0;

  //----------------------------------------------------------//

  for(  int i=0;  i<_largo;  i+=1  )
    if ( _arreglo[ i ] == _valor )
      ocurrencias += 1;

  //----------------------------------------------------------//

  return ocurrencias;

  //----------------------------------------------------------//

}

//------------------------------------------------------------//
