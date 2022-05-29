#include <iostream>
#include <time.h>
#include <cstdlib>
#include <iomanip>
using namespace std;

void printMatrix(int matrix[][10], int size);
void fillOddNumber(int matrix[][10], int size);
void fillEvenNumber(int matrix[][10], int size);
void sort(int matrix[][10], int size);
int findMax(int matrix[][10], int size);
int findMin(int matrix[][10], int size);
void numberOfNumbers(int matrix[][10], int size);
void reverseMatrix(int matrix[][10],int size);
void transposeArray(int matrix[][10], int size);

int main()
{
    srand(time(0));
    int matrixOddNumbers[10][10];
    int matrixEvenNumber[10][10];

    fillOddNumber(matrixOddNumbers, 10);
    fillEvenNumber(matrixEvenNumber, 10);

    cout << "En Buyuk Tek Sayi : " << findMax(matrixOddNumbers, 10) << endl;
    cout << "En Buyuk Cift Sayi : " << findMax(matrixEvenNumber, 10) << endl;

    cout << "En Kucuk Tek Sayi : " << findMin(matrixOddNumbers, 10) << endl;
    cout << "En Kucuk Cift Sayi : " << findMin(matrixEvenNumber, 10) << endl;

    cout << "Tek Matrix Siralanmadan once : " << endl;
    printMatrix(matrixOddNumbers, 10);
    
    cout << "Cift Matrix Siralanmadan once : " << endl;
    printMatrix(matrixEvenNumber, 10);

    sort(matrixOddNumbers, 10);

    cout << "Tek Matrix Siralandiktan Sonra : " << endl;
    printMatrix(matrixOddNumbers, 10);

	sort(matrixEvenNumber, 10);

    cout << "Cift Matrix Siralandiktan Sonra : " << endl;
    printMatrix(matrixEvenNumber, 10);

	cout << "Tek Matrix Tersten Siralandiktan Sonra :" << endl;
	reverseMatrix(matrixOddNumbers,10);
	printMatrix(matrixOddNumbers,10);

	cout << "Cift Matrix Tersten Siralandiktan Sonra :" << endl;
	reverseMatrix(matrixEvenNumber,10);
	printMatrix(matrixEvenNumber,10);

    cout << "Hangi tek elemandan kac adet var ?" << endl;
    numberOfNumbers(matrixOddNumbers,10);
	
	cout << "Hangi cift elemandan kac adet var ?" << endl;
    numberOfNumbers(matrixEvenNumber,10);
	
	cout << "Tek Matrixin Satir ve Sutunalarinin Yerini Degistirme : " << endl;
	transposeArray(matrixOddNumbers,10);
	printMatrix(matrixOddNumbers, 10);
	
	cout << "Cift Matrixin Satir ve Sutunalarinin Yerini Degistirme : " << endl;
	transposeArray(matrixEvenNumber,10);
	printMatrix(matrixEvenNumber, 10);
}

void printMatrix(int matrix[][10], int size)
{
    for (int i = 0;i < 10;i++) {
        for (int j = 0;j < 10;j++) {
            cout << setw(5) << matrix[i][j];
        }
        cout << endl;
    }
    //Matrixi ekrana yazdırma
}

void fillOddNumber(int matrix[][10], int size)
{
    int teksayilar[50];
    int tekci = 0;
    int ust = 101, alt = 101;
    bool dongu = true;

    for (int i = 0;i < 50;i++) {
        teksayilar[i] = i + 1 + tekci;
        tekci += 1;
    }

    for (int i = 0;i < 10;i++) {
        for (int j = 0;j < 10;j++) {

            while (dongu) {
                int random = rand() % 50;

                if (random != ust && random != alt) {
                    matrix[i][j] = teksayilar[random];
                    ust = teksayilar[random + 1];
                    alt = teksayilar[random - 1];
                    dongu = false;
                }
            }
            dongu = true;
        }
    }
    
	// ardışık sayılar arka arkaya gelmeyecek sekilde 0-100 arasindaki tek sayilarla rastgele doldurma
}


void fillEvenNumber(int matrix[][10], int size)
{
    int ciftsayilar[50];
    int ciftci = 1;
    int ust = 101, alt = 101;
    bool dongu = true;

    for (int i = 0;i < 49;i++) {
        ciftsayilar[i] = i + 1 + ciftci;
        ciftci += 1;
    }

    for (int i = 0;i < 10;i++) {
        for (int j = 0;j < 10;j++) {

            while (dongu) {
                int random = rand() % 49;

                if (random != ust && random != alt) {
                    matrix[i][j] = ciftsayilar[random];
                    ust = ciftsayilar[random + 1];
                    alt = ciftsayilar[random - 1];
                    dongu = false;
                }
            }
            dongu = true;
        }
    }

    
    // ardışık sayılar arka arkaya gelmeyecek sekilde 0-100 arasindaki cift sayilarla rastgele doldurma
}

void sort(int matrix[][10], int size)
{
    int i=0, j=0, m=0, n=0,temp=0;

    for (int x = 0;x < 99;x++) {
        for (int y = 0;y < 99 - x;y++) {
            i = y / 10;
            j = y % 10;
            m = (y + 1) / 10;
            n = (y + 1) % 10;

            if (matrix[i][j] > matrix[m][n]) {
                swap(matrix[i][j], matrix[m][n]);
            }
        }
    }
    //küçükten büyüğe sıralama
}

int findMax(int matrix[][10], int size)
{
    int max = 0;
    
    for (int i = 0;i < 10;i++) {
        for (int j = 0;j < 10;j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
    }
    return max;
    //matrixteki en buyuk sayiyi bulma
}

int findMin(int matrix[][10], int size)
{
    int min = 101;

    for (int i = 0;i < 10;i++) {
        for (int j = 0;j < 10;j++) {
            if (matrix[i][j] < min) {
                min = matrix[i][j];
            }
        }
    }
    return min;
    //matrixteki en kucuk sayisi bulma
}

void numberOfNumbers(int matrix[][10], int size)
{
    int sayac[100];

    for (int i = 0;i < 100;i++) {
        sayac[i] = 0;
    }

    for (int j = 0; j < 10; j++) {
        for (int k = 0;k < 10;k++) {
            sayac[matrix[j][k]]++;
        }
    }

    for (int i = 0; i < 100; i++){
        if (sayac[i] != 0) {
            cout << i << "-->" << sayac[i] << endl;
        }
    }
    
    //Matrixte yer alan sayılardan kaçar adet olduğunu ekrana yazma
    
}

void reverseMatrix(int matrix[][10],int size)
{
	int i,j,temp;
	
	for(i=0;i<size/2;i++)
	{
		for(j=0;j<size;j++)
		{
			temp=matrix[i][j];
			matrix[i][j]=matrix[9-i][9-j];
			matrix[9-i][9-j]=temp;
		}	
	}	
	//matrixi tersten sıralama
}

void transposeArray(int matrix[][10], int size)		
{
	int temp;
	for(int i=0;i<10;i++)
	{
		for(int j=1+i;j<10;j++)
		{
			temp=matrix[i][j];
			matrix[i][j]=matrix[j][i];
			matrix[j][i]=temp;
		}
	}
	//satır ve sutunların yerini degistirme
}
