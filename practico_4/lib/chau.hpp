void minIterativo(
arreglo[],
largo
){
int comparador = arreglo [0];
for ( int i = 1, i<largo, i+=1 )

	if ( comparador > arreglo[i] )
		comparador = arreglo[i];

return comparador;
}
