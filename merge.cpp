#include<iostream>
using namespace std;

struct point{

int x,y;

};

void merge(point arr[],int l,int m,int h){
    int i,j,k,n1,n2;
    n1=m-l+1;
    n2=h-m;
    point a1[n1],a2[n2];
    
     for(i=0;i<n1;i++){
     a1[i].x=arr[l+i].x;
     a1[i].y=arr[l+i].y;
}
          for(i=0;i<n2;i++){
            a2[i].x=arr[m+1+i].x;
              a2[i].y=arr[m+1+i].y;
}
        i=0,j=0,k=l;
        
        while(i<n1&& j<n2){

                   

            if(a1[i].x<a2[j].x){
            arr[k++].x=a1[i++].x;
            arr[k++].y=a1[i++].y;}

              else if(a1[i].x==a2[j].x)
                   {
                     if(a1[i].y>=a2[j].y){
                         arr[k++].x=a2[j++].x;
                           arr[k++].y=a2[j++].y;}
                          else{
                                 arr[k++].x=a1[i++].x;
                                  arr[k++].y=a1[i++].y;
                                     }
                                
}
else {
           arr[k++].x=a2[j++].x;
           arr[k++].y=a2[j++].y;}
        }

        while(i<n1){
           arr[k++].x=a1[i++].x;
           arr[k++].y=a1[i++].y;
}
        
        while(j<n2){
           arr[k++].x=a2[j++].x;
           arr[k++].y=a2[j++].y;}

        
}
void mergesort(point arr[],int l,int h){
    if(l<h){
        int m=l+(h-l)/2;
        mergesort(arr,l,m);
        mergesort(arr,m+1,h);
        merge(arr,l,m,h);
    }}
    
    int main(){
        int n,i;
	cin>>n;
 point a[n];
	for(i=0;i<n;i++)
	    cin>>a[i].x>>a[i].y;
	mergesort(a,0,n-1);
	for(i=0;i<n;i++)
	    cout<<"("<<a[i].x<<","<<a[i].y<<")"<<",";
   
	return 0;
}
