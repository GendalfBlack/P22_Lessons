#include <iostream>
using namespace std;

// ������ 1
void MatrixMul(int matr[3][3], int matr2[3][3]);
// ������ 2
int MatrixMax(int matr[4][4]);
// ������ 3
void MatrixTrans(int matr[3][3]);
// ������ 4
void MatrixOnDiagonal(int matr[3][3]);
// ������ 5
bool isMatrixMirrored(int matr[3][3]);
// ������ 7
int Matrix4DSum(int matr[4][4][4]);
// ������ 8
void MatrixSortColumns(int matr[10][10]);

void PrintSideBySide(int matr[3][3], int matr2[3][3]);

int main()
{
	int m0[3] = {1,2,3};
	int m1[3][3] = { {1,2,3},{2,4,5},{3,5,6} };
	int m2[3][3] = { {10,11,12 },{13,14,15},{16,17,18} };
	int m3[4][4] = { {10,11,12,1 },{13,14,15,2},{16,17,18,3},{19,20,21,4} };
	int m4[4][4][4] = {
		{{10,11,12,1},{13,14,15,2},{16,17,18,3},{19,20,21,4}},
		{{10,11,12,1},{13,14,15,2},{16,17,18,3},{19,20,21,4}},
		{{10,11,12,1},{13,14,15,2},{16,17,18,3},{19,20,21,4}},
		{{10,11,12,1},{13,14,15,2},{16,17,18,3},{19,20,21,4}} 
	};
	int m5[10][10];
	for (int i = 0; i < 10; i++){for (int j = 0; j < 10; j++){m5[i][j] = rand() % 90+10;}}
	MatrixSortColumns(m5);
}
// ������ 1
void MatrixMul(int matr[3][3], int matr2[3][3]) {
	int matr3[3][3];
	for (int i = 0; i < 3; i++) // ��� �����
	{
		for (int j = 0; j < 3; j++) // ��� ������� �������� ����� (���������)
		{
			matr3[i][j] = matr[i][j] * matr2[i][j];
			cout << matr3[i][j] << ' ';
		}
		cout << '\n';
	}
}
// ������ 2
int MatrixMax(int matr[4][4]) {
	int max = INT32_MIN;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (matr[i][j] > max)
			{
				max = matr[i][j];
			}
		}
	}
	return max;
}
// ������ 3
void MatrixTrans(int matr[3][3]) {
	for (int i = 0; i < 3; i++) // ��� �����
	{
		for (int j = 0; j < 3; j++) // ��� ������� �������� ����� (���������)
		{
			if (i > j)
			{
				int temp = matr[i][j];
				matr[i][j] = matr[j][i];
				matr[j][i] = temp;
			}
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << matr[i][j] << ' ';
		}
		cout << '\n';
	}
}
// ������ 4
void MatrixOnDiagonal(int matr[3][3]) {
	for (int i = 0; i < 3; i++) // ��� �����
	{
		for (int j = 0; j < 3; j++) // ��� ������� �������� ����� (���������)
		{
			if (i <= j)
			{
				cout << matr[i][j] << ' ';
			}
			else {
				cout << "   ";
			}
		}
		cout << '\n';
	}
}
// ������ 5
bool isMatrixMirrored(int matr[3][3]) 
{
	for (int i = 0; i < 3; i++) // ��� �����
	{
		for (int j = 0; j < 3; j++) // ��� ������� �������� ����� (���������)
		{
			if (i > j && matr[i][j] != matr[j][i])
			{
				return false;
			}
		}
	}
	return true;
}
// ������ 7
int Matrix4DSum(int matr[4][4][4]) {
	int sum = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			for (int k = 0; k < 4; k++)
			{
				sum += matr[i][j][k];
			}
		}
	}
	return sum;
}
// ������ 8
void MatrixSortColumns(int matr[10][10]) 
{
	for (int i = 0; i < 10; i++) // ��� ������� ���������
	{
		for (int j = 0; j < 10; j++) // ��� ������� �������� ���������(������ �����)
		{
			for (int k = j; k < 10; k++) // �������
			{
				if (matr[j][i] > matr[k][i])
				{
					int temp = matr[j][i];
					matr[j][i] = matr[k][i];
					matr[k][i] = temp;
				}
			}
		}
	}
	for (int i = 0; i < 10; i++) // ��� ������� ���������
	{
		for (int j = 0; j < 10; j++) // ��� ������� �������� ���������(������ �����)
		{
			cout << matr[i][j] << ' ';
		}
		cout << '\n';
	}
}

void PrintSideBySide(int matr[3][3], int matr2[3][3]) {
	for (int i = 0; i < 3; i++) // ��� �����
	{
		for (int j = 0; j < 3; j++) // ��� ������� �������� ����� (���������)
		{
			cout << matr[i][j] << ' ';
		}
		cout << '\t';
		for (int j = 0; j < 3; j++) // ��� ������� �������� ����� (���������)
		{
			cout << matr2[i][j] << ' ';
		}
		cout << '\n';
	}
}