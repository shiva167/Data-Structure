#include<bits/stdc++.h>
using namespace std;
void insertion(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j>=0; j--)
        {
            if(arr[j]<arr[j-1]){
                swap(arr[j], arr[j - 1]);  ////always shifting hoti hai
            }
        }
        
    }
    
}
int main(){
    int arr[5] = {34, 22, 54, 44, 33};
    insertion(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
}

}