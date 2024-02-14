#include <stdio.h>
#include <stdlib.h>



int main(int argc, char* argv[]){

	if (argc != 2){

		fprintf(stderr, "Usage: %s <int>\n", argv[0]);
		return -1;

	}

	int MAX = atoi(argv[1]);

	int *matrix = (int *)malloc(sizeof(int) * MAX);
	int *matrix2 = (int *)malloc(sizeof(int) * MAX);
	int *resultMatrix = (int *)malloc(sizeof(int) * MAX);


	for (int i = 0; i < MAX; ++i)
	{
		matrix[i] = i * 2;
		matrix2[i] = i * 3;
		resultMatrix[i] = matrix[i] * matrix2[i];
		printf("%d\n", resultMatrix[i]);
	}


	free(matrix);
	free(matrix2);
	free(resultMatrix);


	return 0;


}
