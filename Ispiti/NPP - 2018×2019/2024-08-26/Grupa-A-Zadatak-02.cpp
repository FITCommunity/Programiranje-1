#include<iostream>
#include<cstddef>
#include<ctime>

int getRandomValue(const int from, const int to) {
	return std::rand() % (to - from + 1) + from;
}

void enterSize(const char* const text, std::size_t& size) {
	int input{};

	do {
		std::cout << text;
		std::cin >> input;

		if (input <= 0) {
			std::cout << "Unos mora biti veci od 0\n";
		}
	} while (input <= 0);

	size = input;
}

void allocateMatrix(int**& matrix, const std::size_t rows, const std::size_t cols) {
	matrix = new int* [rows] {};

	for (std::size_t i = 0; i < rows; ++i) {
		matrix[i] = new int[cols] {};
	}
}

void deallocateMatrix(int**& matrix, const std::size_t rows) {
	for (std::size_t i = 0; i < rows; ++i) {
		delete[] matrix[i];
	}
	delete[] matrix;
	matrix = nullptr;
}

void fillMatrixWithRandomValues(
	int** matrix,
	const std::size_t rows,
	const std::size_t cols,
	const int from,
	const int to
) {
	for (std::size_t i = 0; i < rows; ++i) {
		for (std::size_t ii = 0; ii < cols; ++ii) {
			matrix[i][ii] = getRandomValue(from, to);
		}
	}
}

void fillMatrixRowsWithMaxValue(
	int** matrix,
	const std::size_t rows,
	const std::size_t cols
) {
	for (std::size_t i = 0; i < rows; ++i) {
		int maxValue{ matrix[i][0] };

		for (std::size_t ii = 1; ii < cols; ++ii) {
			maxValue = std::max(maxValue, matrix[i][ii]);
		}

		for (std::size_t ii = 0; ii < cols; ++ii) {
			matrix[i][ii] = maxValue;
		}
	}
}

void printMatrix(
	const char* const text,
	int** matrix,
	const std::size_t rows,
	const std::size_t cols
) {
	std::cout << text;
	for (std::size_t i = 0; i < rows; ++i) {
		for (std::size_t ii = 0; ii < cols; ++ii) {
			std::cout << matrix[i][ii] << ' ';
		}
		std::cout << '\n';
	}
}

int main() {
	std::srand(std::time(nullptr));

	std::size_t rows{};
	std::size_t cols{};
	int** matrix{};

	enterSize("Unesite broj redova: ", rows);
	enterSize("Unesite broj kolona: ", cols);
	allocateMatrix(matrix, rows, cols);

	fillMatrixWithRandomValues(matrix, rows, cols, 0, 9);
	printMatrix("Prva matrica:\n", matrix, rows, cols);

	fillMatrixRowsWithMaxValue(matrix, rows, cols);
	printMatrix("Druga matrica (popunjena maksimalnim vrijednostima iz redova prve matrice):\n", matrix, rows, cols);

	deallocateMatrix(matrix, rows);

	return 0;
}
