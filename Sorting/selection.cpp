#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> &v) {
  for (int i = 0; i < v.size(); ++i) {
    cout << v[i] << " ";
  }
  cout << endl;
}

void selectionSort(vector<int>&v)
{
    int n = v.size();
    for (int i = 0; i < n - 1;i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n;j++)
        {
            if(v[j] < v[minIndex])
            {
                minIndex = j;
            }
        }
        swap(v[i], v[minIndex]);
    }
}


int main() {
  vector<int> v = {44,33,55,22,11};
  // bubbleSort(v);
  selectionSort(v);
  //insertionSort(v);
  print(v);
  return 0;
}