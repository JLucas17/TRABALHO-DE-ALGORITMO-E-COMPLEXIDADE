# include <stdio.h>
# include <stdlib.h>

	public class Main {

	public void main(String args[]) {
	
	int [] array = {8, 2, 5, 3, 4, 7, 6, 1};
	
	mergeSort(array);
	
	for(int i =0; i < array.length; i++) {
	System.out.print(array[1]+ " ");
	
	}
	
	}
	
	private statuc void mergeSort(int[] array) {

	int length = array.length;
	if (length <= 1) return;   // Caso Base
	
	int middle = length / 2;
	int[] leftArray = new int [middle];
	int[] rightArray = new int[length - middle];
	
	int i = 0;
	int j = 0;
	
	for(; i < length;++) {
		if(1 < middle) 					{
			leftArray[1]; = array[i];
			
	}
	
	else  {
	
		rightArray[j] = array[i];
		j++;
		

	}
	
	}
	
	mergeSort(leftArray);
	mergeSort(RightArray);
	merge(leftArray, rightArray, array);
	
	private static void merge(int[] leftArray, int[] rightArray, int[] array) {
	
	int leftSize = array.lenght / 2;
	int rightsize = array.lenght - leftSize;
	int i = 0, 1 = 0, r = 0; // indices
	
	// check the conditions for merging
	
	while(1 < leftSize && r < rightSize) {
		if(leftArray[1] <RightArray[r]) {
			array[i] = leftArray[1];
			i++;
			1++;
			
	}
	
	else  {
		array[i] = rightArray[r];
		i++;
		r++;
		
	}
	
	}
	
	while(1< leftSize) {
		array[i] = rightArray[1];
		i++;
		1++;
		
	}
	
	while(r < rightSize) {
		array[i] = rightArray[r];
		i++;
		r++;
	
	}

}

	}

}

	/* Exemplo da visualização do algoritmo de classificação por mesclagem:

	(8, 2, 5, 3, 4, 7, 6, 1)
	
	(8,2,5,3) | (4,7,6,1)
	
	(8,2) | (5,3) | (4,7) | (6,1)

	(2,8) | (3,5) | (4,7) | (1,6)
	
	(2,3,5,8) | (1,4,6,7)
	
	(1,2,3,4,5,6,7,8)
	
	*/
