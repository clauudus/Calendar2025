// Type your code here, or load an example.
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  ifstream input("input.txt");

  if(!input)
  {
    cout << "This is the first day and I'm already failing wtf" << endl;
    return 0;    
  }

  int pos = 50; //initial position
  int count0 = 0; //times we go though 0

  char dir; //direction we will rotate
  int steps; //how many steps we will rotate

  while (input >> dir >> steps)
  {
    if(dir == 'L') //I'm only gonna check L because I know the text file only goes with uppercase, could be changed for an or though
    {
      for(int i = 0; i < steps; i++)
      {
        pos = (pos - 1 + 100) % 100;
        if (pos == 0) count0++;
      }
    } else if (dir == 'R') { //same here, but with another text file could go with 'r'
        for(int i = 0; i < steps; i++)
        {
          pos = (pos + 1) % 100;
          if (pos == 0) count0++;
        }
    } else {
        continue; //i'm not gonna check much, this is just for sanity check, but I know this input file is complete
    }
  }

  cout << count0;

  return 0;
}
