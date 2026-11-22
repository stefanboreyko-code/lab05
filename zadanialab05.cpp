#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(0)));

    // Zadanie 1
    /*
    {
        const int SIZE = 10;
        int numbers[SIZE];

        for (int i = 0; i < SIZE; i++)
        {
            cout << "Podaj liczbe calkowita nr " << i + 1 << ": ";
            while (!(cin >> numbers[i]))
            {
                cin.clear();
                cin.ignore(10000, '\n');
                cout << "Niepoprawna wartosc. Podaj liczbe calkowita nr " << i + 1 << ": ";
            }
        }

        cout << "Liczby w odwrotnej kolejnosci: ";
        for (int i = SIZE - 1; i >= 0; i--)
        {
            cout << numbers[i] << " ";
        }
        cout << endl;
    }
    */

    // Zadanie 2
    /*
    {
        const int MAX_FIB = 90;
        long long fib[MAX_FIB] = { 0 };
        fib[0] = 0;
        fib[1] = 1;

        int count = 0;
        cout << "Podaj ile liczb ciagu Fibonacciego wyznaczyc (od 1 do " << MAX_FIB << "): ";
        while (!(cin >> count) || count < 1 || count > MAX_FIB)
        {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Niepoprawna liczba. Podaj wartosc od 1 do " << MAX_FIB << ": ";
        }

        for (int i = 2; i < count; i++)
        {
            fib[i] = fib[i - 1] + fib[i - 2];
        }

        cout << "Ciag Fibonacciego: ";
        for (int i = 0; i < count; i++)
        {
            cout << fib[i] << " ";
        }
        cout << endl;
    }
    */

    // Zadanie 3
    /*
    {
        const int SIZE = 10;
        int numbers[SIZE];
        int sum = 0;

        cout << "Wylosowane elementy: ";
        for (int i = 0; i < SIZE; i++)
        {
            numbers[i] = rand() % 101;
            sum += numbers[i];
            cout << numbers[i] << " ";
        }
        cout << endl;

        double average = static_cast<double>(sum) / SIZE;
        int belowAverageCount = 0;
        int minVal = numbers[0];
        int maxVal = numbers[0];

        for (int i = 0; i < SIZE; i++)
        {
            if (numbers[i] < average)
            {
                belowAverageCount++;
            }
            if (numbers[i] < minVal)
            {
                minVal = numbers[i];
            }
            if (numbers[i] > maxVal)
            {
                maxVal = numbers[i];
            }
        }

        cout << "Wartosc srednia: " << average << endl;
        cout << "Liczba elementow mniejszych od sredniej: " << belowAverageCount << endl;
        cout << "Najmniejszy element: " << minVal << endl;
        cout << "Najwiekszy element: " << maxVal << endl;
    }
    */

    // Zadanie 4
    /*
    {
        const int SIZE = 10;
        double numbers[SIZE] = { 0.0 };
        int n = 0;

        cout << "Podaj ile liczb rzeczywistych chcesz wprowadzic (od 0 do 10): ";
        while (!(cin >> n) || n < 0 || n > SIZE)
        {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Niepoprawna wartosc. Podaj liczbe calkowita z zakresu [0, 10]: ";
        }

        for (int i = 0; i < n; i++)
        {
            cout << "Podaj liczbe rzeczywista nr " << i + 1 << ": ";
            while (!(cin >> numbers[i]))
            {
                cin.clear();
                cin.ignore(10000, '\n');
                cout << "Niepoprawna wartosc. Podaj liczbe rzeczywista nr " << i + 1 << ": ";
            }
        }

        for (int i = n; i < SIZE; i++)
        {
            numbers[i] = 0.0;
        }

        double sum = 0.0;
        double minVal = numbers[0];
        double maxVal = numbers[0];

        cout << "Przygotowana tablica: ";
        for (int i = 0; i < SIZE; i++)
        {
            cout << numbers[i] << " ";
            sum += numbers[i];
            if (numbers[i] < minVal)
            {
                minVal = numbers[i];
            }
            if (numbers[i] > maxVal)
            {
                maxVal = numbers[i];
            }
        }
        cout << endl;

        double average = sum / SIZE;
        cout << "Wartosc srednia: " << average << endl;
        cout << "Wartosc maksymalna: " << maxVal << endl;
        cout << "Wartosc minimalna: " << minVal << endl;
    }
    */

    // Zadanie 5
    /*
    {
        const int SIZE = 10;
        int numbers[SIZE];

        cout << "Zawartosc tablicy: ";
        for (int i = 0; i < SIZE; i++)
        {
            numbers[i] = rand() % 11;
            cout << numbers[i] << " ";
        }
        cout << endl;

        int luckyNumber = rand() % 11;
        int occurrences = 0;

        for (int i = 0; i < SIZE; i++)
        {
            if (numbers[i] == luckyNumber)
            {
                occurrences++;
            }
        }

        cout << "Szczesliwa liczba: " << luckyNumber << endl;
        cout << "Liczba wystapien w tablicy: " << occurrences << endl;
    }
    */

    // Zadanie 6
    /*
    {
        const int MAX_SIZE = 20;
        int n = 0;

        cout << "Podaj wymiar macierzy kwadratowych (od 1 do " << MAX_SIZE << "): ";
        while (!(cin >> n) || n < 1 || n > MAX_SIZE)
        {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Niepoprawny wymiar. Podaj liczbe od 1 do " << MAX_SIZE << ": ";
        }

        int matrixA[MAX_SIZE][MAX_SIZE];
        int matrixB[MAX_SIZE][MAX_SIZE];
        int matrixSum[MAX_SIZE][MAX_SIZE];

        cout << "Podaj elementy pierwszej macierzy (" << n << "x" << n << "):" << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                while (!(cin >> matrixA[i][j]))
                {
                    cin.clear();
                    cin.ignore(10000, '\n');
                    cout << "Niepoprawna wartosc. Podaj element [" << i << "][" << j << "]: ";
                }
            }
        }

        cout << "Podaj elementy drugiej macierzy (" << n << "x" << n << "):" << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                while (!(cin >> matrixB[i][j]))
                {
                    cin.clear();
                    cin.ignore(10000, '\n');
                    cout << "Niepoprawna wartosc. Podaj element [" << i << "][" << j << "]: ";
                }
            }
        }

        cout << "Suma macierzy:" << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                matrixSum[i][j] = matrixA[i][j] + matrixB[i][j];
                cout << matrixSum[i][j] << "\t";
            }
            cout << endl;
        }
    }
    */

    // Zadanie 7
    /*
    {
        const int MAX_SIZE = 20;
        int n = 0;

        cout << "Podaj wymiar macierzy kwadratowych (od 1 do " << MAX_SIZE << "): ";
        while (!(cin >> n) || n < 1 || n > MAX_SIZE)
        {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Niepoprawny wymiar. Podaj liczbe od 1 do " << MAX_SIZE << ": ";
        }

        int matrixA[MAX_SIZE][MAX_SIZE];
        int matrixB[MAX_SIZE][MAX_SIZE];
        int matrixProduct[MAX_SIZE][MAX_SIZE] = { 0 };

        cout << "Podaj elementy pierwszej macierzy (" << n << "x" << n << "):" << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                while (!(cin >> matrixA[i][j]))
                {
                    cin.clear();
                    cin.ignore(10000, '\n');
                    cout << "Niepoprawna wartosc. Podaj element [" << i << "][" << j << "]: ";
                }
            }
        }

        cout << "Podaj elementy drugiej macierzy (" << n << "x" << n << "):" << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                while (!(cin >> matrixB[i][j]))
                {
                    cin.clear();
                    cin.ignore(10000, '\n');
                    cout << "Niepoprawna wartosc. Podaj element [" << i << "][" << j << "]: ";
                }
            }
        }

        cout << "Iloczyn macierzy:" << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                matrixProduct[i][j] = 0;
                for (int k = 0; k < n; k++)
                {
                    matrixProduct[i][j] += matrixA[i][k] * matrixB[k][j];
                }
                cout << matrixProduct[i][j] << "\t";
            }
            cout << endl;
        }
    }
    */

    // Zadanie 8
    /*
    {
        const int MAX_SIZE = 20;
        int n = 0;

        cout << "Podaj wymiar macierzy kwadratowej (od 1 do " << MAX_SIZE << "): ";
        while (!(cin >> n) || n < 1 || n > MAX_SIZE)
        {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Niepoprawny wymiar. Podaj liczbe od 1 do " << MAX_SIZE << ": ";
        }

        int matrix[MAX_SIZE][MAX_SIZE];
        cout << "Podaj elementy macierzy (" << n << "x" << n << "):" << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                while (!(cin >> matrix[i][j]))
                {
                    cin.clear();
                    cin.ignore(10000, '\n');
                    cout << "Niepoprawna wartosc. Podaj element [" << i << "][" << j << "]: ";
                }
            }
        }

        int diagonalSum = 0;
        for (int i = 0; i < n; i++)
        {
            diagonalSum += matrix[i][i];
        }

        cout << "Suma elementow na glownej przekatnej: " << diagonalSum << endl;
    }
    */

    // Zadanie 9
    /*
    {
        const int SIZE = 10;
        int numbers[SIZE];

        for (int i = 0; i < SIZE; i++)
        {
            cout << "Podaj liczbe calkowita nr " << i + 1 << ": ";
            while (!(cin >> numbers[i]))
            {
                cin.clear();
                cin.ignore(10000, '\n');
                cout << "Niepoprawna wartosc. Podaj liczbe calkowita nr " << i + 1 << ": ";
            }
        }

        for (int i = 0; i < SIZE - 1; i++)
        {
            for (int j = 0; j < SIZE - 1 - i; j++)
            {
                if (numbers[j] > numbers[j + 1])
                {
                    int temp = numbers[j];
                    numbers[j] = numbers[j + 1];
                    numbers[j + 1] = temp;
                }
            }
        }

        cout << "Posortowana tablica rosnaco: ";
        for (int i = 0; i < SIZE; i++)
        {
            cout << numbers[i] << " ";
        }
        cout << endl;
    }
    */

    // Zadanie 10
    /*
    {
        const int SIZE = 8;
        int matrix[SIZE][SIZE];

        cout << "Podaj elementy macierzy 8x8:" << endl;
        for (int i = 0; i < SIZE; i++)
        {
            for (int j = 0; j < SIZE; j++)
            {
                while (!(cin >> matrix[i][j]))
                {
                    cin.clear();
                    cin.ignore(10000, '\n');
                    cout << "Niepoprawna wartosc. Podaj element [" << i << "][" << j << "]: ";
                }
            }
        }

        int totalFromRows = 0;
        for (int i = 0; i < SIZE; i++)
        {
            int rowSum = 0;
            for (int j = 0; j < SIZE; j++)
            {
                rowSum += matrix[i][j];
            }
            totalFromRows += rowSum;
            cout << "Suma wiersza " << i << ": " << rowSum << endl;
        }

        int totalFromCols = 0;
        for (int j = 0; j < SIZE; j++)
        {
            int colSum = 0;
            for (int i = 0; i < SIZE; i++)
            {
                colSum += matrix[i][j];
            }
            totalFromCols += colSum;
            cout << "Suma kolumny " << j << ": " << colSum << endl;
        }

        cout << "Suma wszystkich elementow (na podstawie wierszy): " << totalFromRows << endl;
        cout << "Suma wszystkich elementow (na podstawie kolumn): " << totalFromCols << endl;

        if (totalFromRows == totalFromCols)
        {
            cout << "Suma obliczona na podstawie wierszy jest taka sama jak suma obliczona na podstawie kolumn." << endl;
        }
        else
        {
            cout << "Sumy nie sa takie same." << endl;
        }
    }
    */

    // Zadanie 11
    /*
    {
        const int ROWS = 8;
        const int COLS = 6;
        int matrix[ROWS][COLS];

        cout << "Podaj elementy macierzy 8x6:" << endl;
        for (int i = 0; i < ROWS; i++)
        {
            for (int j = 0; j < COLS; j++)
            {
                while (!(cin >> matrix[i][j]))
                {
                    cin.clear();
                    cin.ignore(10000, '\n');
                    cout << "Niepoprawna wartosc. Podaj element [" << i << "][" << j << "]: ";
                }
            }
        }

        int minVal = matrix[0][0];
        int minRow = 0;
        int minCol = 0;
        int maxVal = matrix[0][0];
        int maxRow = 0;
        int maxCol = 0;

        for (int i = 0; i < ROWS; i++)
        {
            for (int j = 0; j < COLS; j++)
            {
                if (matrix[i][j] < minVal)
                {
                    minVal = matrix[i][j];
                    minRow = i;
                    minCol = j;
                }
                if (matrix[i][j] > maxVal)
                {
                    maxVal = matrix[i][j];
                    maxRow = i;
                    maxCol = j;
                }
            }
        }

        cout << "Najmniejszy element: " << minVal << " (indeks wiersza: " << minRow << ", indeks kolumny: " << minCol << ")" << endl;
        cout << "Najwiekszy element: " << maxVal << " (indeks wiersza: " << maxRow << ", indeks kolumny: " << maxCol << ")" << endl;
    }
    */

    // Zadanie 12
    /*
    {
        const int MAX_SIZE = 20;
        int n = 0;

        cout << "Podaj wymiar macierzy kwadratowej (domyslnie 6, zakres od 1 do " << MAX_SIZE << "): ";
        while (!(cin >> n) || n < 1 || n > MAX_SIZE)
        {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Niepoprawny wymiar. Podaj liczbe od 1 do " << MAX_SIZE << ": ";
        }

        int matrix[MAX_SIZE][MAX_SIZE];
        cout << "Podaj elementy macierzy (" << n << "x" << n << "):" << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                while (!(cin >> matrix[i][j]))
                {
                    cin.clear();
                    cin.ignore(10000, '\n');
                    cout << "Niepoprawna wartosc. Podaj element [" << i << "][" << j << "]: ";
                }
            }
        }

        int secondaryDiagonalSum = 0;
        for (int i = 0; i < n; i++)
        {
            secondaryDiagonalSum += matrix[i][n - 1 - i];
        }

        cout << "Suma elementow na drugiej przekatnej: " << secondaryDiagonalSum << endl;
    }
    */

    // Zadanie 13
    /*
    {
        const int SIZE = 5;
        int matrix[SIZE][SIZE];

        cout << "Podaj elementy macierzy 5x5:" << endl;
        for (int i = 0; i < SIZE; i++)
        {
            for (int j = 0; j < SIZE; j++)
            {
                while (!(cin >> matrix[i][j]))
                {
                    cin.clear();
                    cin.ignore(10000, '\n');
                    cout << "Niepoprawna wartosc. Podaj element [" << i << "][" << j << "]: ";
                }
            }
        }

        bool isSymmetric = true;
        for (int i = 0; i < SIZE; i++)
        {
            for (int j = i + 1; j < SIZE; j++)
            {
                if (matrix[i][j] != matrix[j][i])
                {
                    isSymmetric = false;
                }
            }
        }

        if (isSymmetric == true)
        {
            cout << "Wprowadzona macierz jest symetryczna wzgledem glownej przekatnej." << endl;
        }
        else
        {
            cout << "Wprowadzona macierz nie jest symetryczna wzgledem glownej przekatnej." << endl;
        }
    }
    */

    // Zadanie 14
    /*
    {
        const int SIZE = 6;
        double matrix[SIZE][SIZE];

        cout << "Podaj elementy macierzy 6x6:" << endl;
        for (int i = 0; i < SIZE; i++)
        {
            for (int j = 0; j < SIZE; j++)
            {
                while (!(cin >> matrix[i][j]))
                {
                    cin.clear();
                    cin.ignore(10000, '\n');
                    cout << "Niepoprawna wartosc. Podaj element [" << i << "][" << j << "]: ";
                }
            }
        }

        double k = 0.0;
        cout << "Podaj liczbe rzeczywista k: ";
        while (!(cin >> k))
        {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Niepoprawna wartosc. Podaj liczbe rzeczywista k: ";
        }

        cout << "Macierz wynikowa:" << endl;
        for (int i = 0; i < SIZE; i++)
        {
            for (int j = 0; j < SIZE; j++)
            {
                matrix[i][j] = matrix[i][j] * k;
                cout << matrix[i][j] << "\t";
            }
            cout << endl;
        }
    }
    */

    // Zadanie 15
    /*
    {
        const int ROWS = 8;
        const int COLS = 4;
        int matrix[ROWS][COLS];

        cout << "Podaj elementy macierzy 8x4:" << endl;
        for (int i = 0; i < ROWS; i++)
        {
            for (int j = 0; j < COLS; j++)
            {
                while (!(cin >> matrix[i][j]))
                {
                    cin.clear();
                    cin.ignore(10000, '\n');
                    cout << "Niepoprawna wartosc. Podaj element [" << i << "][" << j << "]: ";
                }
            }
        }

        int target = 0;
        cout << "Podaj szukana liczbe calkowita: ";
        while (!(cin >> target))
        {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Niepoprawna wartosc. Podaj liczbe calkowita: ";
        }

        int occurrences = 0;
        for (int i = 0; i < ROWS; i++)
        {
            for (int j = 0; j < COLS; j++)
            {
                if (matrix[i][j] == target)
                {
                    cout << "Znaleziono na pozycji: wiersz " << i << ", kolumna " << j << endl;
                    occurrences++;
                }
            }
        }

        if (occurrences == 0)
        {
            cout << "Podana wartosc nie wystepuje w macierzy." << endl;
        }
        cout << "Liczba wystapien: " << occurrences << endl;
    }
    */

    // Zadanie 16
    /*
    {
        const int SIZE = 5;
        int matrix[SIZE][SIZE];

        cout << "Podaj elementy macierzy 5x5:" << endl;
        for (int i = 0; i < SIZE; i++)
        {
            for (int j = 0; j < SIZE; j++)
            {
                while (!(cin >> matrix[i][j]))
                {
                    cin.clear();
                    cin.ignore(10000, '\n');
                    cout << "Niepoprawna wartosc. Podaj element [" << i << "][" << j << "]: ";
                }
            }
        }

        bool isIdentity = true;
        for (int i = 0; i < SIZE; i++)
        {
            for (int j = 0; j < SIZE; j++)
            {
                if (i == j && matrix[i][j] != 1)
                {
                    isIdentity = false;
                }
                if (i != j && matrix[i][j] != 0)
                {
                    isIdentity = false;
                }
            }
        }

        if (isIdentity == true)
        {
            cout << "Wprowadzona macierz jest macierza jednostkowa." << endl;
        }
        else
        {
            cout << "Wprowadzona macierz nie jest macierza jednostkowa." << endl;
        }
    }
    */

    // Zadanie 17
    /*
    {
        const int MAX_ROWS = 20;
        const int MAX_COLS = 20;
        int rows = 0;
        int cols = 0;

        cout << "Podaj liczbe wierszy macierzy (np. 8, zakres od 1 do " << MAX_ROWS << "): ";
        while (!(cin >> rows) || rows < 1 || rows > MAX_ROWS)
        {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Niepoprawna wartosc. Podaj liczbe wierszy od 1 do " << MAX_ROWS << ": ";
        }

        cout << "Podaj liczbe kolumn macierzy (np. 6, zakres od 1 do " << MAX_COLS << "): ";
        while (!(cin >> cols) || cols < 1 || cols > MAX_COLS)
        {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Niepoprawna wartosc. Podaj liczbe kolumn od 1 do " << MAX_COLS << ": ";
        }

        int matrix[MAX_ROWS][MAX_COLS];
        cout << "Podaj elementy macierzy (" << rows << "x" << cols << "):" << endl;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                while (!(cin >> matrix[i][j]))
                {
                    cin.clear();
                    cin.ignore(10000, '\n');
                    cout << "Niepoprawna wartosc. Podaj element [" << i + 1 << "][" << j + 1 << "]: ";
                }
            }
        }

        int maxRowSum = 0;
        int maxRowIndex = 0;
        for (int i = 0; i < rows; i++)
        {
            int rowSum = 0;
            for (int j = 0; j < cols; j++)
            {
                rowSum += matrix[i][j];
            }
            cout << "Suma wiersza " << i + 1 << ": " << rowSum << endl;

            if (i == 0 || rowSum > maxRowSum)
            {
                maxRowSum = rowSum;
                maxRowIndex = i;
            }
        }

        int maxColSum = 0;
        int maxColIndex = 0;
        for (int j = 0; j < cols; j++)
        {
            int colSum = 0;
            for (int i = 0; i < rows; i++)
            {
                colSum += matrix[i][j];
            }
            cout << "Suma kolumny " << j + 1 << ": " << colSum << endl;

            if (j == 0 || colSum > maxColSum)
            {
                maxColSum = colSum;
                maxColIndex = j;
            }
        }

        cout << "Wiersz o najwiekszej sumie: " << maxRowIndex + 1 << " (suma: " << maxRowSum << ")" << endl;
        cout << "Kolumna o najwiekszej sumie: " << maxColIndex + 1 << " (suma: " << maxColSum << ")" << endl;
    }
    */

    return 0;
}
