
#include <bits/stdc++.h>

using namespace std;
int arr[1000005],temp[1000005];
void merge(int l,int h){
    int mid=(l+h)/2;
    int i=l;
    int j=mid+1;
    int k=l;
    while(i<=mid && j<=h){
        if(arr[i]<=arr[j]){
           temp[k++]=arr[i++];
        }else{
            temp[k++]=arr[j++];
        }
    }
     while (i <= mid) {
        temp[k++] = arr[i++];
    }
    while (j <= h) {
        temp[k++] = arr[j++];
    }
        

for(k=l;k<=h;k++){
    arr[k]=temp[k];
}

}
void mergeSort(int l,int h){
    if(l==h)return;

      int mid=(l+h)/2;
   mergeSort(l,mid);
   mergeSort(mid+1,h);
   merge(l,h);  
}



int main()
{
  int n;
  cin>>n;
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
mergeSort(0,n-1);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}cout<<endl;
    return 0;
}