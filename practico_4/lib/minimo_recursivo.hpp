
//------------------------------------------------------------//

int Mininimo_Recursivo (
  int _arreglo[],
  int _largo
  ){

  //----------------------------------------------------------//

  _largo-=1;

  //----------------------------------------------------------//

  if (_largo == -1)
    return _arreglo[0];

  //----------------------------------------------------------//

  Menor ( _arreglo[_largo] , Mininimo_Recursivo(_arreglo[_largo-1], _largo) );
}

//------------------------------------------------------------//

int Menor (
  int _a,
  int _b
){
  if ( _a > _b)
    return _b

  if (_a < _b)
    return _a
}
