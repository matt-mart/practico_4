
bool Comparar_Recursivo(
  int _arreglo_a[],
  int _arreglo_b[],
  int _largo
){

  //----------------------------------------------------------//

  _largo -= 1;

  //----------------------------------------------------------//

  if( _largo == -1 )
    return true;

  //----------------------------------------------------------//

  if ( _arreglo_a[_largo] != _arreglo_b[_largo] )
    return false;


  //----------------------------------------------------------//

  return Comparar_Recursivo(
    _arreglo_a ,
    _arreglo_b,
    _largo
  );

  //----------------------------------------------------------//

}

