#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

  srand((unsigned int) time(NULL));
  
  int roll = 0;

  int sides = 6;

  int dice = 10;

  for (int i = 1; i <= dice; i++)
  {
    roll = (rand() % sides) + 1;
    
    // About the result of the roll (and the 'dice number' i)
    cout << "Dice " << i << ": " << roll << endl;
  }

  return 0;
}