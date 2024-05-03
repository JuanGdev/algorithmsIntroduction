#include <iostream>
#include <utility>
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
  for(int current = 1; current < unorderedVector.size()-1; current+=1)
  {
    key = current;
    while(key > 0 && unorderedVector[key-1] > unorderedVector[key])
    {
      swap(unorderedVector[key-1], unorderedVector[key]);
      key -=1;
    }
  }

  //  Print elements
  cout << "\n\n***SORTED ARRAY***\n";
  for(int i = 0; i < vectorElements; i+=1)
  {
    cout << "Positon " << i << ", value: " << unorderedVector[i] << endl;
  }

  return 0;
}
