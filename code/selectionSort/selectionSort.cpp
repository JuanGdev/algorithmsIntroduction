#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int main()
{
  int vectorElements;
  int vectorValue;

  //  User input
  cout << "Enter the number of elements in your array: " << endl;
  cin >> vectorElements;

  //  Vector constructor
  vector<int> unorderedVector(vectorElements);
  int minIndex = 0;

  //  Assing values to vector
  for(int i = 0; i < vectorElements; i+=1)
  {
    cout << "Positon " << i << " : ";
    cin >> vectorValue;
    unorderedVector[i] = vectorValue;
  }

  //  Sort values
  for(int current = 0; current < unorderedVector.size() - 1; current+=1)
  {
    minIndex = current;
    for(int i = current+1; i<=unorderedVector.size()-1; i+=1)
    {
      if(unorderedVector[i] < unorderedVector[minIndex])
      {
        minIndex = i;
      }
    }
    swap(unorderedVector[current], unorderedVector[minIndex]);
  }

  //  Print elements
  cout << "\n\n***SORTED ARRAY***\n";
  for(int i = 0; i < vectorElements; i+=1)
  {
    cout << "Positon " << i << ", value: " << unorderedVector[i] << endl;
  }

  return 0;
}
