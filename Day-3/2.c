# include<stdio.h>
int main(){
    int n;
    printf("enter the no of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int total=(n+1)*(n+2)/2;
    int sum=0;

    for(int i=0;i<n;i++){
         sum+=arr[i];
    }
    int missing=total-sum;
    printf("missing number:%d\n",missing);
    return 0;
}