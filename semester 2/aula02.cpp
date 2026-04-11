#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void message()
{
    cout << "\nChoose an option: \n"
         << "  1 - Open \n"
         << "  2 - Save \n"
         << "  3 - Close \n"
         << "Your option: ";
}

void freeMatrix(int **&matrix, int &N)
{
    if (matrix != nullptr)
    {
        for (int i = 0; i < N; i++)
        {
            delete[] matrix[i];
        }
        delete[] matrix;
        matrix = nullptr;
        N = 0;
    }
}

void selectTextFile(int **&matrix, int &N)
{
    string textFromTheFile;
    ifstream file;
    string nameFile;

    cout << "Type the name for the file: \n";
    cin >> nameFile;

    file.open(nameFile + ".txt");
    if (!file.is_open())
    {
        cout << "File was not found. \n";
        file.clear();
        return;
    }

    getline(file, textFromTheFile);

    sscanf(textFromTheFile.c_str(), "tamanho:%d", &N);

    cout << "\n Value of N: " << N << "\n";

    // alocacao de memoria 
    matrix = new int *[N];
    for (int i = 0; i < N; i++)
    {
        matrix[i] = new int[N];
    }

    //conversao de caracter para inteiro
    for(int i = 0; i < N; i++) {
        string line;
        //pego cada linha do file
        getline(file, line);
        
        for(int j = 0; j < N; j++) {
            //coloco nas posicoes da matrix o char da linha [j]
            matrix[i][j] = line[j] - '0';
        }
    }

    cout << "\n Values of matrix: \n";

    for(int i=0; i < N; i++) {
        for(int j=0; j < N; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    file.close();
}

int biggestValueFunc(int **&matrix, int &N)
{
    int aux = 0;
    for(int i = 0; i < N; i++) {
        for(int j=0; j < N; j++) {
            if(matrix[i][j] > aux){
                aux = matrix[i][j];
            }
        }
    }
    return aux;
}

int diagonalValueFunc(int **&matrix, int &N) {
    int value = 1;

    for(int i = 0; i < N; i++){
        value *= matrix[i][i];
    }

    return value;
}

int secondaryDiagonalValueFunc(int **&matrix, int &N) {
    int value = 0;

    for(int i = 0; i < N; i++){
        value += matrix[i][N - 1 - i];
    }

    return value;
}

void saveNewFile(int biggestNumber, int diagonalValue, int secondaryDiagonalValue){
    ofstream newFile;
    
    newFile.open("newText.txt");

    newFile << "Maior: " << biggestNumber << "\n";
    newFile << "Multiplicacao Diagonal Principal: " << diagonalValue << "\n";
    newFile << "Soma Diagonal Secundaria: " << secondaryDiagonalValue << "\n";

    newFile.close();

    cout << "File saved: newText.txt \n";
}

int main(int argc, char const *argv[])
{
    int **matrix = nullptr;
    int N = 0;
    int options;
    int biggestValue = biggestValueFunc(matrix, N);
    int diagonalValue = diagonalValueFunc(matrix, N);
    int secondaryDiagonalValue = secondaryDiagonalValueFunc(matrix, N);
    
    while (options != 3)
    {

        if (options > 3)
        {
            cout << "\n Ops! \n Pick an option available! \n";
        }

        message();
        cin >> options;

        if (options == 3)
        {
            cout << "\nExiting...\n";
        }

        switch (options)
        {
        case 1:
        selectTextFile(matrix, N);
            break;
        case 2:
        if (matrix == nullptr || N == 0)
            {
                cout << "Open a file first.\n";
            }
            else
            {
                int biggestValue = biggestValueFunc(matrix, N);
                int diagonalValue = diagonalValueFunc(matrix, N);
                int secondaryDiagonalValue = secondaryDiagonalValueFunc(matrix, N);

                saveNewFile(biggestValue, diagonalValue, secondaryDiagonalValue);
            }
            break;
        }
    }

    freeMatrix(matrix, N);

    return 0;
}
