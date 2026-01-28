#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main(){


    int sum=0;
    int found=0;


    printf("Enter the number of elements:");
    int n;
    scanf("%d",&n);


    int arr[n];

    printf("Enter the elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int x;

    printf("Enter the element to search:");
    scanf("%d",&x);

    for(int i=0;i<n;i++){
        if(arr[i]==x && sum%2==0){
            printf("%d ", i);
            found=1;
        }
    
        
        sum+=arr[i];
        
    }

    if(!found){
        printf("-1");
    }

    

    return 0;

}