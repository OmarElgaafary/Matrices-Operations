#include <iostream>

void matrixAdd();
void matrixSub();
void matrixMul();
void matrixPrint();


int main() {


	matrixAdd();
}


void matrixAdd() {
	int m1[2][2] = { {2,2}, {2,2} };
	int m2[2][2] = { {1,1}, {1,1} };
	int addition[2][2];

	std::cout << "Enter values for M1: ";

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			std::cin >> m1[i][j];
		}
	}

	std::cout << std::endl;
	std::cout << "Enter values for M2: ";

		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				std::cin >> m2[i][j];
			}
		}





	for (int i = 0; i < 2; i++) {

		for (int j = 0; j < 2; j++) {

			addition[i][j] = m1[i][j] + m2[i][j];

		}
	}


	for (int x = 0; x < 2; x++) {

		std::cout << "[";

		for (int z = 0; z < 2; z++) {


			std::cout << addition[x][z];
			if (z <= 0) {
				std::cout << ", ";
			}
		}
		std::cout << "]";
		std::cout << std::endl;
	}
}  // 2X2 Matrix Addition with Input

void matrixSub() {
	int m1[2][2] = { {2,2}, {2,2} };
	int m2[2][2] = { {1,1}, {1,1} };
	int subtraction[2][2];

	std::cout << "Enter values for M1 (2x2): ";

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			std::cin >> m1[i][j];
		}
	}

	std::cout << std::endl;
	std::cout << "Enter values for M2 (2x2): ";

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			std::cin >> m2[i][j];
		}
	}



	for (int i = 0; i < 2; i++) {

		for (int j = 0; j < 2; j++) {

			subtraction[i][j] = m1[i][j] - m2[i][j];

		}
	}


	for (int x = 0; x < 2; x++) {

		std::cout << "[";

		for (int z = 0; z < 2; z++) {


			std::cout << subtraction[x][z];
			if (z <= 0) {
				std::cout << ", ";
			}
		}
		std::cout << "]";
		std::cout << std::endl;
	}
}

void matrixMul() {
	int m1[2][2] = { {2,2}, {2,2} };
	int m2[2][2] = { {1,1}, {1,1} };
	int multiplication[2][2];

	std::cout << "Enter values for M1 (2x2): ";

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			std::cin >> m1[i][j];
		}
	}

	std::cout << std::endl;
	std::cout << "Enter values for M2 (2x2): ";

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			std::cin >> m2[i][j];
		}
	}



	for (int i = 0; i < 2; i++) {

		for (int j = 0; j < 2; j++) {

			multiplication[i][j] = m1[i][j] * m2[i][j];

		}
	}


	for (int x = 0; x < 2; x++) {

		std::cout << "[";

		for (int z = 0; z < 2; z++) {


			std::cout << multiplication[x][z];
			if (z <= 0) {
				std::cout << ", ";
			}
		}
		std::cout << "]";
		std::cout << std::endl;
	}
}

void matrixPrint() {


	int m1[2][2];;
	std::cout << "Enter values for a matrix (2x2): ";

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			std::cin >> m1[i][j];
		}
	}

	for (int i = 0; i < 2; i++) {
		
		std::cout << "[";
		for (int j = 0; j < 2; j++) {

			std::cout << m1[i][j];
			if (j <= 0) {
				std::cout << ", ";
			}
		}
		std::cout << "]";
		std::cout << std::endl;
	} 

	

}
