#include <iostream>

using namespace std;

int getInputNumber(int num)
{
    cout << "Gib die " << num << ". Zahl an:\n";
    int numberCalc = 0;
    cin >> numberCalc;
    return numberCalc;
}

void printresult(int result)
{
    cout << "das Ergebniss ist: " << result << "\n\n\n";
}

void add() 
{
    int num1 = getInputNumber(1);
    int num2 = getInputNumber(2);
    int result = num1 + num2;
    printresult(result);
}

void sub()
{
    int num1 = getInputNumber(1);
    int num2 = getInputNumber(2);
    int result = num1 - num2;
    printresult(result);
}

void multi()
{
    int num1 = getInputNumber(1);
    int num2 = getInputNumber(2);
    int result = num1 * num2;
    printresult(result);
}

void div()
{
    int num1 = getInputNumber(1);
    int num2 = getInputNumber(2);
    int result = num1 / num2;
    printresult(result);
}

void menu() 
{
    cout << "Waehle deinen Modus: \n(1)ADD\n(2)SUB\n(3)MULT\n(4)DIV\n(q)QUIT\n\nINPUT: ";
    char input = ' ';
    cin >> input;
    system("cls");
    switch (input)
    {
    case('1'):
        add();
        break;
    case('2'):
        sub();
        break;
    case('3'):
        multi();
        break;
    case('4'):
        div();
        break;
    case('q'):
        return;
        break;
    default:
        cout << "Input nicht erkannt, versuche es nochmal" << endl;
        system("pause");
        system("cls");
        menu();
        break;
    }
}

int main()
{
    system("title RECHNER");
    menu();
    system("pause");
    return 0;
}