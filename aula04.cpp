#include <iostream>
#include <string.h>
#include <cctype>
using namespace std;

void countLetters(char phrase[100], int phraseLength)
{
    int caractersCounted = strlen(phrase);
    int lettersCounted = 0;

    for (int i = 0; i < phraseLength; i++)
    {
        if (isalpha(phrase[i]))
        {
            lettersCounted++;
        }
    }

    std::cout << "Sua frase tem: " << caractersCounted << " caracteres e: " << lettersCounted << " letras." << endl;
};

void phraseToUpperCase(char phrase[100], int phraseLength)
{
    int aux = 0;
    char phraseUpperCase[100]; 
    for (int i = 0; i < phraseLength; i++)
    {
        phraseUpperCase[aux] = toupper(phrase[i]);
        aux++;
    }
    phraseUpperCase[phraseLength] = '\0';
    std::cout << "Sua frase em caixa alta: " << phraseUpperCase << endl;
}

void phraseBackwards(char phrase[100], int phraseLength)
{
    int aux = 0;
    char phraseBackWards[100];
    for (int i = phraseLength -1; i >= 0; i--)
    {
        phraseBackWards[aux] = phrase[i];
        aux++;
    }

    phraseBackWards[phraseLength] = '\0';
    std::cout << "Sua frase de traz pra frente: " << phraseBackWards << endl;
};

void replaceLetterAForAt(char phrase[100], int phraseLength)
{
    char phraseReplacedLetterA[100];
    for (int i = 0; i < phraseLength; i++)
    {
        if (phrase[i] == 'a' || phrase[i] == 'A')
        {
            phraseReplacedLetterA[i] = '@';
        } else {
            phraseReplacedLetterA[i] = phrase[i];
        }
        
    }
    phraseReplacedLetterA[phraseLength] = '\0';
    std::cout << "Sua frase substituindo a letra 'a' por '@': " << phraseReplacedLetterA;
};

int main()
{
    char phrase[100];
    std::cout << "Digite uma frase qualquer: ";
    std::cin.getline(phrase, 100);

    int phraseLength = strlen(phrase);

    countLetters(phrase, phraseLength);

    phraseToUpperCase(phrase, phraseLength);

    phraseBackwards(phrase, phraseLength);

    replaceLetterAForAt(phrase, phraseLength);

    return 0;
}