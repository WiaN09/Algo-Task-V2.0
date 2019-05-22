// modified counting sort for sorting nebula's problem ...  
#include<iostream>
using namespace std;

struct point{         //making  coordinates as a variables 
int x,y;
}a[4];


void swap(int &a,int &b){
int temp=a;
a=b;
b=temp;
}

//sortinhg starts here ....  
void counting_sort(int a[].x,int n,int k){
int b[n],c[k+1],j=0;
int i;
 for(i=0; i<=k; i++)
        c[i] = 0;
    for(i=0; i<n; i++){
        c[a[i]].x += 1;
      if(c[a[i]].x >1) 
          j++;                        // actual size of the total no. of duplicacy of the x coordinates.
    } 

int Z[j];//special array for storing the duplicacy of x coordinates if any in the input 
int t=0;

for(i=0;i<n;n++){

if(c[i].x>1 && t<=j){
Z[t]=i;
t=t+1;
}
}
    for(i=1; i<=k; i++)
        c[i] = c[i] + c[i-1];

    for(i=n-1; i>=0; i--)   {                                  //main operation in counting sort ...
        b[c[a[i]]-1] = a[i];
        c[a[i]] -= 1;
    }

for(i=0;i<j;i++){
if( b[Z[i]].x==b[Z[i]-1] || b[Z[i]].x==b[Z[i]+1] ){
if(b[Z[i]].y<b[Z[i]-1].y)
swap(b[Z[i]].y,b[Z[i]-1].y);                    //swapping according to y element if the x coordinates are same ... 

if(b[Z[i]].y<b[Z[i]-1].y)
swap(b[Z[i]].y,b[Z[i]-1].y);                   //swapping according to y element if the x coordinates are same ... 
}

}

for(i=0;i<n;i++)
cout<<"("<<b[i].x<<","<<b[i].y<<")";
cout<<endl;
}

int main(){
int n,k;
cout<<"enter the size of array: ";
cin>>n;
point a[n];
cout<<"enter the largest element:";
cin>>k;
for(int i=0;i<n;i++){                    // taking input from user...
cin>>a[i].x>>a[i].y;
}
counting_sort(a,n,k);
return 0;
