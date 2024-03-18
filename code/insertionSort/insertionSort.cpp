#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int vectorElements;
  int vectorValue;
  int key;

  //  User input
  cout << "Enter the number of elements in your array: " << endl;
  cin >> vectorElements;

  //  Vector constructor
  vector<int> unorderedVector(vectorElements);

  //  Assing values to vector
  for(int i = 0; i < vectorElements; i+=1)
  {
    cout << "Positon " << i << " : ";
    cin >> vectorValue;
    unorderedVector[i] = vectorValue;
  }

  //  Sort values
  for(int j = 1; j < vectorElements; j+=1)
  {
    key = unorderedVector[j];
    int i = j - 1;
    while(i >=0 && unorderedVector[i] > key)
    {
      unorderedVector[i + 1] = unorderedVector[i];
      i -= 1;
    }
    unorderedVector[i+=1] = key;
  }

  //  Print elements
  cout << "\n\n***SORTED ARRAY***\n";
  for(int i = 0; i < vectorElements; i+=1)
  {
    cout << "Positon " << i << ", value: " << unorderedVector[i] << endl;
  }

  return 0;
}
