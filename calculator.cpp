#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>

using namespace std;

double resultAdd = 0.00;
double resultSubtract = 0.00;
double resultMultiply = 0.00;
double resultDivide = 0.00;

double add (double firstOperand, double secondOperand)
{
    resultAdd = firstOperand + secondOperand;
    cout << resultAdd << endl;
    return 0;
}

double subtract (double firstOperand, double secondOperand)
{
    resultSubtract = firstOperand - secondOperand;
    cout << resultSubtract << endl;
    return 0;
}

double multiply (double firstOperand, double secondOperand)
{
    resultMultiply = firstOperand * secondOperand;
    cout << resultMultiply << endl;
    return 0;
}

double divide (double firstOperand, double secondOperand)
{
    resultDivide = firstOperand / secondOperand;
    cout << resultDivide << endl;
    return 0;
}

int main (int argc, char * argv[])
{
    int i = argc;
    double firstOperand;
    double secondOperand;
    double result;
    char op;
    int n1 = i-(i-1);
    int n2 = i-(i-2);
    int n3 = i-(i-3);
    firstOperand = atof(argv[n1]);
    op = char(argv[n2][0]);
    secondOperand = atof(argv[n3]);
    if (firstOperand == 0)
    {
        cout << "Zero is not allowed for either operand!" << endl;
        return -1;
    }
    if (secondOperand == 0)
    {
        cout << "Zero is not allowed for either operand!" << endl;
        return -1;
    }
    if ((op != '+') && (op != '-') && (op != '*') && (op != '/'))
    {
        cout << "Please select +, -, *, or / for the second argument." << endl;
        return -2;
    }

    if (op == '+')
    {
        add (firstOperand, secondOperand);
    }
    else if (op == '-') 
    {
        subtract (firstOperand, secondOperand);
    }
    else if (op = '*') 
    {
        multiply (firstOperand, secondOperand);
    }
    else if (op == '/') 
    {
        divide (firstOperand, secondOperand);
    }
    else
    {
        cout << "Please Enter a valid Operation" << endl;
    }
    
    return 0;
}