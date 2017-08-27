#include "task.h"
#include <iostream>
#include <ctime>
#include <string>

void task::z1() {
	srand(time(NULL));

	int n = 0;
	int m = 0;
	
	std::cout << "Input n: ";
	std::cin >> n;
	std::cout << "Input m: ";
	std::cin >> m;

	int **array = new int*[m];
	for (int i = 0; i < m; ++i) {
		array[i] = new int[n];
	}


	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			array[i][j] = rand() % 100;
			std::cout << array[i][j] << ' ';
		}
		std::cout << std::endl;
	}

	int sum = 0;

	for (int i = 0; i < m; ++i) {
		long sumHor = 0;

		for (int j = 0; j < n; ++j) {
			sumHor += array[i][j];
		}

		std::cout << "Sum in hor line N " << i  << " : "<< sumHor << std::endl;
		sum += sumHor;
	}

	for (int i = 0; i < n; ++i) {
		int sumVert = 0;

		for (int j = 0; j < m; ++j) {
			sumVert += array[j][i];
		}

		std::cout << "Sum in vert line N " << i << " : " << sumVert << std::endl;
	}

	std::cout << "Sum: " << sum << std::endl;
	
	system("pause");
	system("cls");

	delete[] array;
}

void task::z2() {
	srand(time(NULL));

	int n = 0;
	int m = 0;

	std::cout << "Input n: ";
	std::cin >> n;
	std::cout << "Input m: ";
	std::cin >> m;

	int **array = new int*[m];
	for (int i = 0; i < m; ++i) {
		array[i] = new int[n];
	}


	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			array[i][j] = rand() % 100;
			std::cout << array[i][j] << ' ';
		}
		std::cout << std::endl;
	}

	long sum = 0;
	double average = 0.0;
	int min = array[0][0];
	int max = array[0][0];

	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			sum += array[i][j];

			if (max < array[i][j]) {
				max = array[i][j];
			}

			if (min > array[i][j]) {
				min = array[i][j];
			}
		}
	}

	average = (double)sum / (double)(n * m);

	std::cout << "Sum: " << sum << std::endl;
	std::cout << "average: " << average << std::endl;
	std::cout << "min: " << min << std::endl;
	std::cout << "max: " << max << std::endl;

	system("pause");
	system("cls");

	delete[] array;
}

void task::z3() {
	srand(time(NULL));

	int n = 0;
	int m = 0;

	std::cout << "Input n: ";
	std::cin >> n;
	std::cout << "Input m: ";
	std::cin >> m;

	int **array = new int*[m];
	for (int i = 0; i < m; ++i) {
		array[i] = new int[n];
	}


	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			array[i][j] = rand() % 100;
			std::cout << array[i][j] << ' ';
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;

	int **array2 = new int*[m];
	for (int i = 0; i < m; ++i) {
		array2[i] = new int[n];
	}

	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			array2[i][j] = rand() % 100;
			std::cout << array2[i][j] << ' ';
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;

	int **array3 = new int*[m];
	for (int i = 0; i < m; ++i) {
		array3[i] = new int[n];
	}

	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			array3[i][j] = array[i][j] * array2[i][j];
			std::cout << array3[i][j] << ' ';
		}
		std::cout << std::endl;
	}

	system("pause");
	system("cls");

	delete[] array;
	delete[] array2;
	delete[] array3;
}

void task::z4() {
	int n = 10;
	int m = 5;
	int n2 = 5;

	int array1[5][10];
	int array2[5][5];

	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			array1[i][j] = rand() % 50;
			std::cout << array1[i][j] << ' ';
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;

	for (int i = 0; i < m; ++i) {
		for (int j = 0, h = 0; j < n2; ++j, h += 2) {
			array2[i][j] = array1[i][h] + array1[i][h + 1];
			std::cout << array2[i][j] << ' ';
		}
		std::cout << std::endl;
	}

	system("pause");
	system("cls");
}

void task::z5() {
	srand(time(NULL));

	int n = 0;
	int m = 0;

	std::cout << "Input n: ";
	std::cin >> n;
	std::cout << "Input m: ";
	std::cin >> m;

	int **array = new int*[m];
	for (int i = 0; i < m; ++i) {
		array[i] = new int[n];
	}


	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			array[i][j] = rand() % 100;
			std::cout << array[i][j] << ' ';
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;

	std::cout << "left, right, up or down?: ";

	while (true) {
		std::string str = "";
		int count = 0;

		std::cin >> str;

		if (str == "left") {
			std::cout << "count: ";
			std::cin >> count;
			left(array, count, n, m);
			break;
		}
		else if (str == "right") {
			std::cout << "count: ";
			std::cin >> count;
			right(array, count, n, m);
			break;
		}
		else if (str == "up") {
			std::cout << "count: ";
			std::cin >> count;
			up(array, count, n, m);
			break;
		}
		else if (str == "down") {
			std::cout << "count: ";
			std::cin >> count;
			down(array, count, n, m);
			break;
		}
	}

	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			std::cout << array[i][j] << ' ';
		}
		std::cout << std::endl;
	}

	system("pause");
	system("cls");

	delete[] array;
}

void task::z6() {
	srand(time(NULL));

	int n = 0;
	int m = 0;

	std::cout << "Input n: ";
	std::cin >> n;
	std::cout << "Input m: ";
	std::cin >> m;

	int **array = new int*[m];
	for (int i = 0; i < m; ++i) {
		array[i] = new int[n];
	}


	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			array[i][j] = rand() % 100;
			std::cout << array[i][j] << ' ';
		}
		std::cout << std::endl;
	}

	for (int i = 0; i < m; ++i) {
		sort(array[i], n);
	}

	std::cout << std::endl;

	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			std::cout << array[i][j] << ' ';
		}
		std::cout << std::endl;
	}

	system("pause");
	system("cls");

	delete[] array;
}

void task::z7() {
	srand(time(NULL));

	int n = 0;
	int m = 0;

	std::cout << "Input n: ";
	std::cin >> n;
	std::cout << "Input m: ";
	std::cin >> m;

	int **array1 = new int*[m];
	for (int i = 0; i < m; ++i) {
		array1[i] = new int[n];
	}


	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			array1[i][j] = rand() % 100;
			std::cout << array1[i][j] << ' ';
		}
		std::cout << std::endl;
	}

	int **array2 = new int*[m];
	for (int i = 0; i < m; ++i) {
		array2[i] = new int[n];
	}

	std::cout << std::endl;

	bool flag = false;
	array2[0][0] = array1[0][0];

	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			if (flag == true) {
				if (j == 0) {
					array2[i][j] = array2[i - 1][n - 1] + array1[i][j];
				}
				else {
					array2[i][j] = array2[i][j - 1] + array1[i][j];
				}
			}

			if (flag == false) {
				flag = true;
			}

			std::cout << array2[i][j] << ' ';
		}
		std::cout << std::endl;
	}

	system("pause");
	system("cls");

	delete[] array1;
	delete[] array2;
}

void task::dopz1() {
	int n = 0;
	
	std::cout << "Input n: ";
	std::cin >> n;

	int **array = new int*[n];
	for (int i = 0; i < n; ++i) {
		array[i] = new int[n];
	}

	int above = -1;
	int right = n;
	int below = n;
	int left = -1;
	int move = 0;

	int num = 0;

	array[n / 2][n / 2 - (n + 1) % 2] = -1;
	while (array[n / 2][n / 2 - (n + 1) % 2] == -1) {
		if (move == 0) {
			for (int i = left + 1; i < right; ++i) {
				array[above + 1][i] = num++;
			}
			above++;
			move++;
		}
		else if (move == 1) {
			for (int i = above + 1; i < below; ++i) {
				array[i][right - 1] = num++;
			}
			right--;
			move++;
		}
		else if (move == 2) {
			for (int i = right - 1; i > left; --i) {
				array[below - 1][i] = num++;
			}
			below--;
			move++;
		}
		else if (move == 3) {
			for (int i = below - 1; i > above; --i) {
				array[i][left + 1] = num++;
			}
			left++;
			move = 0;
		}
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			std::cout << array[i][j] << ' ';
		}
		std::cout << std::endl;
	}

	system("pause");
	system("cls");

	delete[] array;
}

void task::dopz2() {
	srand(time(NULL));

	int n = 0;
	int m = 0;

	std::cout << "Input n: ";
	std::cin >> n;
	std::cout << "Input m: ";
	std::cin >> m;

	int **array = new int*[m];
	for (int i = 0; i < m; ++i) {
		array[i] = new int[n];
	}


	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			array[i][j] = rand() % 2;
			std::cout << array[i][j] << ' ';
		}
		std::cout << std::endl;
	}

	int *indexV = new int[m] {0};
	int *indexH = new int[n] {0};
	int pV = 0;
	int lpV = 0;
	int pH = 0;
	int lpH = 0;

	int maxV = 0;
	int maxH = 0;

	for (int i = 0; i < m; ++i) {
		int count = 0;
		for (int j = 0; j < n; ++j) {
			if (array[i][j] == 0) {
				count++;
			}
		}
		if (maxH < count) {
			maxH = count;
			indexH[pH] = i;
			lpH = pH++;
		}
		else if (maxH == count) {
			indexH[pH] = i;
			pH++;
		}
	}

	for (int i = 0; i < n; ++i) {
		int count = 0;
		for (int j = 0; j < m; ++j) {
			if (array[j][i] == 0) {
				count++;
			}
		}
		if (maxV < count) {
			maxV = count;
			indexV[pV] = i;
			lpV = pV++;
		}
		else if (maxV == count) {
			indexV[pV] = i;
			pV++;
		}
	}

	int newM = 0;
	int newN = 0;
	if (maxH < maxV) {
		for (int i = lpV; i < pV; ++i) {
			for (int j = 0; j < m; ++j) {
				array[j][indexV[i]] = -1;
			}
		}

		newM = m;
		newN = n - (pV - lpV);
	}
	else if (maxH > maxV) {
		for (int i = lpH; i < pH; ++i) {
			for (int j = 0; j < n; ++j) {
				array[indexH[i]][j] = -1;
			}
		}

		newM = m - (pH - lpH);
		newN = n;
	}
	else if (maxH == maxV) {
		for (int i = lpV; i < pV; ++i) {
			for (int j = 0; j < m; ++j) {
				array[j][indexV[i]] = -1;
			}
		}

		for (int i = lpH; i < pH; ++i) {
			for (int j = 0; j < n; ++j) {
				array[indexH[i]][j] = -1;
			}
		}

		newM = m - (pH - lpH);
		newN = n - (pV - lpV);
	}

	int **array2 = new int*[newM];
	for (int i = 0; i < newM; ++i) {
		array2[i] = new int[newN];
	}
	
	std::cout << std::endl;

	int newI = 0;
	for (int i = 0; i < m; ++i) {
		int newJ = 0;
		for (int j = 0; j < n; ++j) {
			if (array[i][j] != -1) {
				array2[newI][newJ] = array[i][j];
				std::cout << array2[newI][newJ] << ' ';
				newJ++;
			}
		}
		if (newJ == newN) {
			newI++;
			std::cout << std::endl;
		}
	}
	
	system("pause");
	system("cls");

	delete[] array;
	delete[] array2;
}

void task::dopz3() {
	srand(time(NULL));

	int n1 = 0;
	int m1 = 0;

	std::cout << "Input n1: ";
	std::cin >> n1;
	std::cout << "Input m1: ";
	std::cin >> m1;

	std::cout << std::endl;

	int **array1 = new int*[m1];
	for (int i = 0; i < m1; ++i) {
		array1[i] = new int[n1];
	}


	for (int i = 0; i < m1; ++i) {
		for (int j = 0; j < n1; ++j) {
			array1[i][j] = rand() % 100;
			std::cout << array1[i][j] << ' ';
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;

	int n2 = 0;
	int m2 = 0;

	std::cout << "Input n2: ";
	std::cin >> n2;
	std::cout << "Input m2: ";
	std::cin >> m2;

	int **array2 = new int*[m2];
	for (int i = 0; i < m2; ++i) {
		array2[i] = new int[n2];
	}

	std::cout << std::endl;

	for (int i = 0; i < m2; ++i) {
		for (int j = 0; j < n2; ++j) {
			array2[i][j] = rand() % 100;
			std::cout << array2[i][j] << ' ';
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;

	bool being = false;
	for (int i = 0; i < m1; ++i) {
		for (int j = 0; j < n1; ++j) {
			bool flag = true;
			for (int ii = 0; ii < m2; ++ii) {
				for (int jj = 0; jj < n2; ++jj) {
					if (array1[i][j] == array2[ii][jj]) {
						flag = false;
					}
				}
			}
			
			if (flag == true) {
				if (being == false) {
					std::cout << "Unique numbers: ";
					being = true;
				}
				std::cout << array1[i][j] << ' ';
			}
		}
	}

	if (being == false) {
		std::cout << "There is no unique numbers!";
	}

	std::cout << std::endl;

	system("pause");
	system("cls");

	delete[] array1;
	delete[] array2;
}

void task::left(int **arr, int _count, int _n, int _m) {
	int mem = 0;
	for (int i = 0; i < _m; ++i) {
		for (int j = 0; j < _count; ++j) {
			mem = arr[i][0];
			for (int h = 0; h < _n - 1; ++h) {
				arr[i][h] = arr[i][h + 1];
			}
			arr[i][_n - 1] = mem;
		}
	}
}

void task::right(int **arr, int _count, int _n, int _m) {
	int mem = 0;
	for (int i = 0; i < _m; ++i) {
		for (int j = 0; j < _count; ++j) {
			mem = arr[i][_n - 1];
			for (int h = _n - 1; h > 0; --h) {
				arr[i][h] = arr[i][h - 1];
			}
			arr[i][0] = mem;
		}
	}
}

void task::up(int **arr, int _count, int _n, int _m) {
	int mem = 0;
	for (int i = 0; i < _n; ++i) {
		for (int j = 0; j < _count; ++j) {
			mem = arr[0][i];
			for (int h = 0; h < _m - 1; ++h) {
				arr[h][i] = arr[h + 1][i];
			}
			arr[_m - 1][i] = mem;
		}
	}
}

void task::down(int **arr, int _count, int _n, int _m) {
	int mem = 0;
	for (int i = 0; i < _n; ++i) {
		for (int j = 0; j < _count; ++j) {
			mem = arr[_m - 1][i];
			for (int h = _m - 1; h > 0; --h) {
				arr[h][i] = arr[h - 1][i];
			}
			arr[0][i] = mem;
		}
	}
}

void task::sort(int row[], int _n) {
	for (int i = 0; i < _n; ++i) {
		for (int j = i + 1; j < _n; ++j) {
			if (row[i] > row[j]) {
				int p = row[i];
				row[i] = row[j];
				row[j] = p;
			}
		}
	}
}

task::task()
{
}


task::~task()
{
}
