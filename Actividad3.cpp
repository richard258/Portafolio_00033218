Asuma que un arreglo esta almacenado en la memoria utilizando
la representacion row-major. Si la matriz a[10][20] ya fue
declarada y la direccion de su primer elemento es 100; encuentre la
direccion de los siguientes elementos:
a[0][0], a[2][1], a[5][1], a[1][10], a[2][10], a[5][3], a[9][19].....
	
a[0][0]=100
a[2][1]=141
a[5][1]=201
a[1][10]=130
a[2][10]=150
a[5][3]=203
a[9][19]=299


�Son validas las siguientes expresiones?
matrix[0][0] = *(*(matrix)) "Esta Correcto"
matrix[ i ][ j ] = *((*(matrix)) + (i * COLS + j)) "Esta Correcto"
matrix[ i ][ j ] = *(*(matrix + i) + j) "Esta Correcto"
matrix[ i ][ j ] = *(matrix[i] + j) "Esta Correcto"
matrix[ i ][ j ] = (*(matrix + i))[j] "Esta Correcto"
