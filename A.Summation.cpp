#include <iostream>
using namespace std;

int main()
{   long long sum = 0;
    long long summation;
    int n;
    cin>>n;
    int arr[n];


 for(int i=0;i<n;i++)
    {
        cin>>arr[i];

      sum+= arr[i];
      summation = abs(sum);

    }
     cout<<summation;

    return 0;
}
