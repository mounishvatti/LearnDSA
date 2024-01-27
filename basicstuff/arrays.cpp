#include <iostream>

int main(){
	//1D array

	/*
	int size;
	std::cout << "Enter the size of the 1D array: ";
	std::cin >> size;

	int arr[size];

	std::cout << "Enter the elements of the array: ";

	for (int i = 0; i < size; i++ ){
		std::cin >> arr[i];
	}

	//print the contents of the array
	for (int i = 0; i < size; i++){
		std::cout << arr[i] << " ";
	}

	*/

	//2D array

	int row;
	int col;

	std::cout << "Enter the number of rows: ";
	std::cin >> row;

	std::cout << "Enter the number of columns: ";
	std::cin >> col;

	int array[row][col];

	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			std::cout << "Enter element at position [" << i << "," << j << "]: ";
			std::cin >> array[i][j];
		}
	}

	std::cout << "The entered 2D array is:\n";
    for (int i = 0; i < row; ++i) {
		std::cout << "\n";
        for (int j = 0; j < col; ++j) {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }

	return 0;
}
