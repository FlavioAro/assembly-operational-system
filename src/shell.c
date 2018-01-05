#include "../include/shell.h"
void launch_shell(int n)
{
string ch = (string) malloc(200);
int counter = 0;
do
{

print("0.2 cyrax@user: ");
ch = readStr(); 
	
if(strEql(ch,"clear"))
{
clearScreen();
}
else if(strEql(ch,"exit"))
{
print("\nGood Bye!\n");
}
else if(strEql(ch,"help"))
{
help();
}
else if(strEql(ch,"calc"))
{
calc();
}
else
{
print("\nComando invalido!\n");
} 
} while (!strEql(ch,"exit"));
}






//INICIO CALCULADORA///
void calc()
{
print("\n\nCALCULADORA\n");
print("(1 SOMAR, 2 SUBTRAIR, 3 MULTIPLICAR, 4 DIVIDIR): ");

int valor = str_to_int(readStr());
print("\n\nNumero 1: ");
int num1 = str_to_int(readStr());
print("\nNumero 2: ");
int num2 = str_to_int(readStr());
print("\nResultado: ");


if(valor == 1) {
print(int_to_string(num1+num2));
}
if(valor == 2) {
print(int_to_string(num1-num2));
}
if(valor == 3) {
print(int_to_string(num1*num2));
}
if(valor == 4) {
print(int_to_string(num1/num2));
}
print("\n\n");

}
//FIM CALCULADORA///



///INICIO HELṔ///
void help()
{
print("\nclear     : Limpar a tela");
print("\ncalc      : Calculadora");
print("\nexit      : Sair");
print("\n\n");
}
///FIM HELṔ///

