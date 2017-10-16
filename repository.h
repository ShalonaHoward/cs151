#ifndef REPOSITORY_H
#define REPOSITORY_H

//include libraries here
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>


//write functions here

//Name: msg()
//Parameter(s): string
//Return: nothing
/*Flowchart:
//Label		Task					Goto
//01		(start: str)			02
//02		/write(str + '\n')		03
//03		(exit)
*/
void msg(std::string str)
{
	std::cout << str << "\n";
}

//Description:A program that:
//1. prompt the user to enter two (2) numbers on a number line separately.
//2. print the midpoint and distance of the input values.

//Name: max()
//Parameters: Float x, Float y
//Return: float
//Description: Initiate Maximum

//Label     Task                  goto
//01        (start)               02
//02        [float max]           03
//03        <x>y>                 04,05
//04        (exit: x)             
//05        (exit: y)

float max (float x, float y)
{
  if (x>y)
  {
    return x;
  }
  else {
    return y;
  }
}


//Name: min()
//Parameters: Float x, Float y
//Return: float
//Description: Initiate Minimum
//Label     Task                  goto
//01        (start)               02
//02        [float min]           03
//03        <x<y>                 04,05
//04        (exit: x)              
//05        (exit: y) 

float min (float x, float y)
{
  if (x<y)
 {
    return x;
  }
  else {
    return y;
  }
}

//Name: midpoint()
//Parameters: Float x, Float y
//Return: float
//Description: Determine Midpoint
//Label     Task                  goto
//01        [float midpoint]      02
//02        Return ((x+y)/2)      03
//03        (exit)

float midpoint (float x, float y)
{
return ((x+y)/2);
}



//Name: distance()
//Parameters: Float x, Float y
//Return: float
//Description: Determine Distance
//Label     Task                  goto
//01        [float distance]      02
//02        Return ((x+y)/2)      03
//03        (exit)

float distance (float x, float y)
{
  return (max(x,y)-min(x,y));
}


#endif //REPOSITORY_H