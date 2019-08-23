
int Ocurrencias_Iterativo(
  int arreglo[],
  int valor,
  int largo
  ){
  int ocurrencias= 0;

  for(int i=0; i < largo; i+=1){
    if ( arreglo[i] == valor ){
      ocurrencias+=1;
  }

  }
  return ocurrencias;


  }
  //Crear una funcion que dado un valor entero mayor o igual
  //a cero, muestre el factorial de dicho valor (recursiva)


  //----------------------------------------------------------//

  int factorial(
  int n
  ){

  if ( n == 0 || n == 1)
    return 1;

    return n*factorial(n-1)

  }
  //----------------------------------------------------------//

  //Crear una funcion recursiva que devuelve el producto de dos
  //numeros

  //Crear una funcion recursiva que permita calcular la potencia
  //dada la base y el exponente


















