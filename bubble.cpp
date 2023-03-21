#include<bits/stdc++.h>
using namespace std;
void Swap(int &a,int &b){
    int temp;
     temp=a;
    a = b;
    b = temp;
}
void bubble(int arr[],int n){
    for (int  i = 0; i < n; i++)
    {
        for (int j = 0; j <n-i-1 ; j++)
        {
            if (arr[j+1]<arr[j])
            {
                Swap(arr[j + 1], arr[j]);
            }
            
        }
        
    }
    
}
int main(){
    int n = 5;
    int arr[5] = {45, 32, 12, 66, 66};
    bubble(arr, n);
for (int  i = 0; i < n; i++)
{
    cout << arr[i] << " ";
}

    return 0;
}