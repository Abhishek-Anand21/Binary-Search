#include <bits/stdc++.h>

using namespace std;

void  binary_search(int arr[],int item,int size) {  
    int lower = 0,upper = size-1,middle;  
    while(lower <= upper) {
        middle = (upper+lower)/2;
        if(item == arr[middle]) {
            cout << "Element Found at " << middle;
            return;
        }
        else if(item > arr[middle])
         lower = middle + 1;
        else
         upper = middle - 1;
    }
    cout << "Element Not Found";
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) 
     cin >> arr[i];
    int x;    
    sort(arr,arr+n);
    cout << "Elements to Search: ";
    cin >> x;
    for (int i = 0; i < n; i++)
        cout << arr[i]<< " ";
    cout << endl;
    binary_search(arr,x,n);

    return 0;
}
