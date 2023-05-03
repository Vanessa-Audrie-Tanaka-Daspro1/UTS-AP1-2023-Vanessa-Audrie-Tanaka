#include <iostream>
using namespace std;

void process(int num) 
{
int i = 0;

// upper half of the pattern
 for (int b=num-1; b>0; b--)
 {
    for (int c=b; c>0; c--) // upper left triangle
    {
      cout << "*";
      cout << " ";
    }

    for (int c=0; (i*2)>c; c++) // upper middle blank part
    { 
      cout << "  ";
    }

    for (int c=b; c>0; c--) // upper right triangle
    {
      cout << "*";
      cout << " ";
    }
    i++;
    cout << endl;
 }
 
// bottom half of the pattern
i = num-1;
  for (int b=1; b<num; b++)
  {
    for (int c=0; c<b ; c++) // bottom left triangle
    {
      cout << "*";
      cout << " ";
    }

    for (int c=0; c<num*2-b*2-2; c++) // bottom middle blank part
    {
      cout << "  ";
    }

    for (int c=0; c<b; c++) // bottom right triangle
    {
      cout << "*";
      cout << " ";
    }
    i--;
    cout << endl;
    }
}

int main() 
{
  int num;
  cout << "Input number : ";
  cin >> num;
  process(num);

}