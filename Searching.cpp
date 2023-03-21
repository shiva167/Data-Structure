#include<bits/stdc++.h>
using namespace std;
int Searching(int arr[],int t,int n){
    int p;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == t)
        {
            p= i;
            break;
        }
}
if(n>p>0){
    return p;
}else{
    return -1;
}
}
int main(){
    int arr[5] = {45, 33, 55, 23, 65};
    int t,p;
    cout << "Enter element = ";
    cin >> t;
    p = Searching(arr, t, 5);
    cout << "index is " << p << endl;
}