
//------------------------------------------------------------//

int Total_Recursivo(
  int _arreglo[],
  int _largo
){

  //----------------------------------------------------------//

  _largo -= 1;

  //----------------------------------------------------------//

  if ( _largo == -1 )
    return 0;

  //----------------------------------------------------------//

  return Total_Recursivo(
    _arreglo,
    _largo
  ) + _arreglo[ _largo ];

  //----------------------------------------------------------//

}

//------------------------------------------------------------//
