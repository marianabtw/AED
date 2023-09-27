
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h> 

void Permute(int* a, int* b, int* c){
	int temp;
	temp = *a;
	*a = *b;
	*b = *c;
	*c = temp;
}

void DisplayArray(double* a, size_t size){
	assert(a != NULL || size > 0);					// JMADEIRA : uma conjuncao e nao disjuncao : &&
	
	printf("Array = [ ");
	for (size_t i = 0; i < (size-1); i++){
		if (&a[i] != NULL){							// JMADEIRA : Assumir o array bem formado; não testar !
			printf("%f, ",a[i]);
		}
		else{
			printf("0, ");
		}
	}				

	// JMADEIRA : falta escrever o último elemento e ']'
}

// exercise 4 - memory allocation of an array. 
// to use this function, use ReadArray(
double* ReadArray(size_t* size_p){
	int n;
	double b;
	assert(size_p != NULL); 
	printf("Number of elements: ");
	scanf("%d", &n);
	
	// JMADEIRA : falta atribuir o valor de n a *size_p   
	*size_p = n;

	//debug
	printf("Number of elements chosen: %d | Size_p: %zu\n", n, *size_p);   // JMADEIRA : %zu ??
	
	double* a = malloc(n*sizeof(double));
	
	//debug
	printf("Array pointer address: %p\n", &a);
	
	if ( a == NULL ){ printf("Not enough memory"); exit(1); }
	
	// JMADEIRA : usar o tipo size_t em vez de int
	// e %u em vez de %d
	for (int i = 0; i<n ;i++){
		printf("Choose element for slot -> %u: ", i);
		
		// JMADEIRA : pode escrever diratamente em a[i] com &a[i]
		scanf("%lf", &a[i]); 
		
		//debug
		printf("Element nº %d of the Array = %lf\n", i, a[i]);
	}
	return a;
}

double* AppendArray(double* array_1, size_t size_1, double* array_2, size_t size_2){
	int null_counter = 0; // JMADEIRA : assumir arrays bem formados; não verificar os elementos

	assert(array_1 != NULL && array_2 != NULL && size_1 > 0 && size_2 > 0);

	// JMADEIRA : usar o tipo size_t em vez de int
	// i < size_1
	for (size_t i = 0; i < size_1 ; i++){
		if (&array_1[i] == NULL){
			null_counter +=1;
		}
	}

	// JMADEIRA : usar o tipo size_t em vez de int
	// i < size_2
	for (size_t i = 0; i < size_2 ; i++){
		if (&array_2[i] == NULL){
			null_counter +=1;
		}
	}
	
	int n = size_1+size_2-null_counter;
	
	double* new_array = malloc(n*sizeof(double)); 
	
	// JMADEIRA : dois ciclos: 
	//		o primeiro copia os elementos do primeiro array
	//		o segundo copias os elementos do segundo array
	
	for ( int i = 0; i<n ; i++){
		if (i < size_1 && &array_1[i] != NULL){
			new_array[i] = array_1[i];
		}
		else if(&array_2[i] != NULL){
			new_array[i] = array_2[ (size_1 + i) ];
		}
		else{
			printf("Not enough memory");
			exit(1);	
		}
	}
	return new_array;
}

//void AlphabetCharCounter(char[] str){
	//char alphabeto[] = "abcdefghijklmnopqrstwvxyz";
		
	//for ( int i = 0 ; i < s.length() ; i++){
	//	if ( alphabeto[].contains
	//}
//}

//void ex2(char str[])
//{
//	return 0;
//}

int main(void){
	double *v;
	size_t len;
	v = ReadArray(&len);
	printf("Array starts at [ %p ] and ends at[ %p ]\n", v, &len);
	DisplayArray(v, len);
	free(v);
	return 0;
}
