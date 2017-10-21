#include <stdio.h>
void merge(int unsorted[], int fir, int mid, int last){
    int sorted[1000];
    int i=fir, j=mid+1, k=0;
    while(i<=mid&&j<=last){
        if(unsorted[i]<=unsorted[j])    sorted[k++]=unsorted[i++];
        else sorted[k++]=unsorted[j++];}
    while(i<=mid) {sorted[k++]=unsorted[i++];}
    while(j<=last) {sorted[k++]=unsorted[j++];}
    for(k=0,i=fir;i<=last;k++,i++)
        unsorted[i]=sorted[k];
}
void merge_sort(int a[], int start, int end, int high){
    int mid, i;
    if (start < end){
        mid = (start + end) / 2;
       merge_sort(a, start, mid, high); // 递归划分原数组左半边array[start...mid]
        merge_sort(a, mid+1, end, high); // 递归划分array[mid+1...end]
        merge(a, start, mid, end); // 合并
         for(i=0;i<=high;i++){
	     if(i==high)  printf("%d\n",a[i]);
         else printf("%d ",a[i]);            
} 
}
}
int main(){
    int low=0,high,str[1000], i;
	scanf("%d",&high);
	for(i=0;i<high;i++)
	  scanf("%d",&str[i]);                   
   merge_sort(str,0,high-1,high-1); 
    return 0;
}   

