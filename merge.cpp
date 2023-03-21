#include<bits/stdc++.h>
using namespace std;
// void MergeOperation(int arr[],int s ,int e){
//     int mid = (s + e) / 2;
//     int len2 = e - mid;
//     int len1 = mid - s +1;
//     int *t = new int[len1];
//     int *c = new int[len2];
//     int m = s;
//     for (int i = 0; i <len1; i++)
//     {
//         t[i] = arr[m++];
//     }
//     m = mid + 1;
//     for (int i = 0; i < len2; i++)
//     {
//         c[i] = arr[m++];
//     }
//     int index1 = 0, index2 = 0;
//     m = s;
//     while (index1<len1&&index2<len2)
//     {
//         if(t[index1]>c[index2]){
//             arr[m++] = c[index2++];
//         }else{
//             arr[m++] = t[index1++];
//         }
//     }
//     while (index1<len1)
//     {
//         arr[m++] =  t[index1++];
//     }
//     while (index2<len2)
//     {
//         arr[m++] = c[index2++];
//     }
    
    
    
// }

void Merge(int arr[],int s,int e){

    if (s >= e)
    {
        return;
 }
     int mid = (s + e) / 2;
 Merge(arr, s, mid-1);
 Merge(arr, mid + 1, e); 
 


 //MergeOperation(arr, s, e,mid);

}
int main(){
    int arr[5] = {45, 33, 23, 64, 62};
    Merge(arr, 0, 4);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

