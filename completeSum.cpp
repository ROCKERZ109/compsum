#include <bits/stdc++.h>
using namespace std;
vector<int> completeSum(vector<int> &a, int n) {

    vector<int> sum(n); //the sum array which will be returned with all the sum of the elements
    sum[0] = a[0]; //initializing it with the first element because the sum of first element is always is equal to itself
    for (int i = 1; i < n; i++)
    {
      sum[i] = sum[i - 1] + a[i]; //adding each element with the previous sum
    }
    return sum;
}



int main()
{
    cout<<"Enter the size of array: ";
    int n;
    cin>>n;
    int temp;
    vector<int> arr(n);
    cout<<"Enter the values: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     arr=completeSum(arr,n);
      string str;
     for (int i = 0;i<n;++i)
     {
          i==0?str=" element is: ":str=" elements is: ";
          cout << "The sum of "<<i+1<< str<<arr[i]<<"\n";
     }
    return 0;
}
