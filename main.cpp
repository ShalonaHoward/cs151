#include "repository.h"
using namespace std;

//Name: main()
//Parameters: int x, Float y
//Return: float
//Description:
//Label     Task                              goto
//01        (start)                           02
//02        [initiate x,y]                    03
//03        /Print "enter the first number"/  04
//04        /Input x/                         05
//05        /Print "enter the second number"/ 06
//06        /Input y/                         07
//07        /Print midpoint and distance/     08
//08        (exit)
int main()
{
  float x, y;

  cout<< "Enter the first number: ";
  cin >> x;
  cout<< "Enter the second number: ";
  cin >> y;

  cout<< "\n";
  cout<< "The midpoint is "<<midpoint(x,y) <<" and the distance is "<<distance(x,y)<<".\n";
}