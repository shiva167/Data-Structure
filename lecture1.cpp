#include<bits/stdc++.h>
#include<sys/time.h>
using namespace std;
long gettimeinmicrosecond(){
    struct timeval start;
     gettimeofday(&start, NULL);
     return start.tv_sec*1000000 + start.tv_usec;
}
///approach 1
// void Merging2(int arr[],int s,int e,int mid){
//     int temp[e - s];
//     int i = s;
//     int j = mid + 1;
//     int k = 0;
//     while (i<=mid&&j<=e)
//     {
//         if(arr[i]>arr[j]){
//             temp[k++] = arr[j++];
//         }else{
//             temp[k++] = arr[i++];
//         }
//     }
//     if(i<=mid){
//         while (i<=mid)
//         {
//             temp[k++] = arr[i++];
//         }
        
//     }else if(j<=e){
//         while (j<=e)
//         {
//             temp[k++] = arr[j++];
//         }
        
//     }
//     k = 0;
//     for (int i = 0; i < e; i++)
//     {
//         arr[i] = temp[k++];
//     }
    
// }
// void Merging1(int arr[],int s,int e){
//      int mid = (s + e) / 2;
//    int   len1 = mid - s + 1;
//    int len2 = e - mid;
//    int *trr = new int[len1];
//    int *crr = new int[len2];
//    int mainIndex = s;
//    for (int  i = 0; i < len1; i++)
//    {
//        trr[i] = arr[mainIndex++];
//    }
//    mainIndex = mid + 1;
//    for (int i = 0; i < len2; i++)
//    {
//        crr[i] = arr[mainIndex++];
//    }
//    int index1 = 0, index2 = 0;
//    mainIndex = s;
//    while (index1<len1&&index2<len2)
//    {
//         if(trr[index1]>crr[index2]){
//             arr[mainIndex++] = crr[index2++];
//         }else{
//             arr[mainIndex++] = trr[index1++];
//         }
//    }
//    while (index1>len1)
//    {
//        arr[mainIndex++] = trr[index1++];
//    }
//    while (index2>len2)
//    {
//        arr[mainIndex++] = crr[index2++];
//    }
// }
// void Merge(int arr[],int s,int e){
//     if(s>=e){
//         return;
//     }
//     int mid = (s + e) / 2;
//     Merge(arr, mid + 1, e);
//     Merge(arr, s, mid - 1);
//     Merging1(arr, s, e);
//  //   Merging2(arr, s, e, mid);
// }
int main(){
    for (int n = 10; n <=100000000; n*=10)
    {

        long  sttime, endtime;

        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            arr[i] = n - i;
    }
    sttime = gettimeinmicrosecond();
    //Merge(arr, 0, n - 1);
    endtime = gettimeinmicrosecond();
    cout << n << " time difference " << endtime - sttime << endl;
    }
}