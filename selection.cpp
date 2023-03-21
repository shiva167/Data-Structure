#include<bits/stdc++.h>
using namespace std;
void Selection(int arr[],int n){
    int t=0;
    for (int i = 0; i < n; i++)
    {
        t = i;
        for (int j = i+1; j < n;j++){
            if(arr[t]>arr[j]){
                t = j;
                
            }
        }
        swap(arr[i], arr[t]);
    }
    
}
int main(){
    int arr[5] = {34, 55, 76, 33, 23};
    Selection(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}