#include<iostream>
#include<cstddef>
#include<ctime>

int getRandomValue(const int from, const int to) {
	return std::rand() % (to - from + 1) + from;
}

int getUserNumberInput(const char* const text) {
	int input{};

	do {
		std::cout << text;
		std::cin >> input;

		if (input <= 0) {
			std::cout << "Unos mora biti veci od 0\n";
		}
	} while (input <= 0);

	return input;
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

void formatMatrixInSquarePattern(
	int** matrix,
	const std::ptrdiff_t rows,
	const std::ptrdiff_t cols,
	const std::ptrdiff_t targetRow,
	const std::ptrdiff_t targetCol,
	const int targetValue
) {
	for (std::ptrdiff_t i = 0; i < rows; ++i) {
		for (std::ptrdiff_t ii = 0; ii < cols; ++ii) {
			const int distance = std::max(std::abs(targetRow - i), std::abs(targetCol - ii));
			matrix[i][ii] = std::max(targetValue - distance, 0);
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
	std::size_t targetRow{};
	std::size_t targetCol{};
	int targetValue{};
	int** matrix{};

	rows = getUserNumberInput("Unesite broj redova: ");
	cols = getUserNumberInput("Unesite broj kolona: ");
	targetRow = getUserNumberInput("Unesite red ciljanog mjesta: ");
	targetCol = getUserNumberInput("Unesite kolonu ciljanog mjesta: ");
	targetValue = getUserNumberInput("Unesite vrijednost target (veca od 0): ");

	allocateMatrix(matrix, rows, cols);

	formatMatrixInSquarePattern(matrix, rows, cols, targetRow, targetCol, targetValue);
	printMatrix("Formirana matrica:\n", matrix, rows, cols);

	deallocateMatrix(matrix, rows);

	return 0;
}
