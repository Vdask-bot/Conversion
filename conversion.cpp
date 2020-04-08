#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <stdlib.h>
using namespace std;

float Conversion(string input);


int main()
{
  string inp;
  cout << "Enter 'q' to quit " << endl;
  while(getline(cin, inp))
  {
    cout << Conversion(inp) << "m" << endl;
  }
  return 0;
}


float Conversion(string input)
{
  int length;
  length = input.length();
  int num=length-2;
  if(input == "q")
  {
    exit(0);
  }
  string number = input.substr(0,num);
  float NUMBER = stof(number);
    if(input[length-2] == 'T')
    {
      NUMBER = (NUMBER*(pow(10, 12)));
    }
    else if(input[length-2] == 'G')
    {
      NUMBER = (NUMBER*(pow(10, 9)));
    }
    else if(input[length-2] == 'M')
    {
      NUMBER = (NUMBER*(pow(10, 6)));
    }
    else if(input[length-2] == 'k')
    {
      NUMBER = (NUMBER*(pow(10, 3)));
    }
    else if(input[length-2] == 'd')
    {
      NUMBER = (NUMBER*(pow(10, -1)));
    }
    else if(input[length-2] == 'c')
    {
      NUMBER = (NUMBER*(pow(10, -2)));
    }
    else if(input[length-2] == 'm')
    {
      NUMBER = (NUMBER*(pow(10, -3)));
    }
    else if(input[length-2] == 'u')
    {
      NUMBER = (NUMBER*(pow(10, -6)));
    }
    else if(input[length-2] == 'n')
    {
      NUMBER = (NUMBER*(pow(10, -9)));
    }
    else if(input[length-2] == 'p')
    {
      NUMBER = (NUMBER*(pow(10, -12)));
    }
    else
    {
      cout << "Wrong input" << endl;
      exit(0);
    }
  cout << scientific;
  return NUMBER;
}
