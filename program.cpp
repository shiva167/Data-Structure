#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
// int Unique(int arr[],int n){
//     int ans = 0;
//     for (int i = 0; i <n; i++)
//     {
//         ans =ans^arr[i];
//     }
//     return ans;
// }
// void Duplicate(int arr[],int n){
//     unordered_map<int,int> p;
//     for (int i = 0; i <n; i++)
//     {
//         p[arr[i]]++;
//     }

    // for (auto it = p.begin(); it!= p.end();it++){
    //     if(it->second==2){
    //         cout << "number :: " << it->first << "  ";
    //         cout << "freq :: " << it->second;

    //     }
    // }
//}
// vector<int> intersection(int arr[],int trr[],int n,int m){
//     vector<int> p;
//     for (int  i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m;j++){
//             if(arr[i]==trr[j]){
//                 p.push_back(arr[i]);
//                 break;
//             }
//         }
//     }
//     return p;
// }

// void PairSum(int arr[],int n,int sum){
//     int count=0;

//     for (int i = 0; i < n-1;i++){
//         for (int j = i+1; j < n;j++){
//             if(arr[i]+arr[j]==sum){
//                 cout << arr[i] << " " << arr[j] << " \n";
//             }
//         }
//     }
    
// }
// void tripletes(int arr[],int n,int sum){
//     int count = 0;
//     for (int i = 0; i < n-2; i++)
//     {
//         for (int j = i+1; j<n-1; j++)
//         {
//             if(sum<arr[i]+arr[j]){
//                 j++;
//             }
//             for (int k = j+1; k <n; k++)
//             {
//                 if(arr[i]+arr[j]+arr[k]==sum){
//                     cout << arr[i] << " " << arr[j] << " " << arr[k] << " \n";
//                 }
//             }
            
//         }
        
//     }
    
// }
///array rotation n times 

// void Rotate(int arr[],int s,int n,int d){
//     int e = n;
//     while(s<e){
//         swap(arr[s], arr[e - 1]);
//         s++;
//         e--;
//     }
//     int t = 0, g = n - d;
//     while (t<g)
//     {
//         swap(arr[t], arr[g-1]);
//         t++;
//         g--;
//     }
    
//     int k = n - d;
//     while (k<n)
//     {
//         swap(arr[k], arr[n-1]);
//         k++;
//         n--;
//     }
    
// }



int main(){
    // int m, n;
    // cout << "Enter size of a array = ";
    // cin >> m;
    // int *arr = new int[m];
    // for (int i = 0; i < 5; i++)
    // {
    //     cin >> arr[i];
    // }

    // array<int,7> arr= {6,44,6,22,2,4,5};
    // int arr[] = {45, 32, 12, 76, 45};
    // int n = sizeof(arr) / sizeof(arr[0]);
    // //Duplicate(arr,n);
//    cout << Unique(arr, 7);
//     int arr[] = {34, 43, 11, 23, 54, 66,76,99};
//     int trr[] = {55, 32, 43, 44, 34, 11,54,76,23};
//     vector<int>t=intersection(arr, trr, 8, 9);
// for (int i = 0; i < t.size(); i++)
// {
//     cout << t[i] << " ";
//     }
    int arr[] = {3,44,65,87,87,98};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum;

 cout << "Enter rotated number = ";
   cin >> sum;
    // tripletes(arr, n, sum);
//     PairSum(arr, n, sum);
    //Rotate(arr,0,n,sum);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}