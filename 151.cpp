#include <iostream>
using namespace std;

int main()
{
    int arr[50], n=10;

    cout << "Enter the elements of the array: \n";

    for (int i=0;i<n;i++){
        cin >> arr[i];
    }

    cout << "\nEven Elements Found!";
    cout << "\nThe Even Integers are: ";
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            cout << arr[i] << " ";
        }
        else{
            cout << "Even Integers Not Found!";
            break;
        }
    }
   
    cout << "\nOdd Elements Found!";
    cout << "\nThe Odd Integers are: ";
    for(int i=0; i<n; i++){
        if(arr[i]%2==1){
            cout << arr[i] << " ";
        }
        else{
            cout << "Odd Integers Not Found!";
            break;
        }
    }
   
    
    return 0;
}
