#include <stdio.h>
#include <stdio.h>
int main(){
int n,i, arr[100],a;
printf("No. of elements n array:");
scanf("%d", &n);
for(i=0;i<n;i++){
        printf("Enter the element");
        scanf("%d",&arr[i]);
}
printf("Enter elemet t be searched");
scanf("%d", &a);
for(i=0;i<n;i++){
    if(arr[i]==a){printf("THe position of th elmemt is %d", i+1);break;}
}
if(i==n){printf("The element is not prensent");}
return 0;}

