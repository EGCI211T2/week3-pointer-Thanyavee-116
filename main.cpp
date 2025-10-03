#include <iostream>
#include <iomanip>


using namespace std;

int main(int argc,char *argv[]){
  int *pa, *pb, i, temp,n;
n=argc-1;
pa=new int[n];
//cout<<"How many numbers?";
//cin>>n;
for(i=0;i<n;i++,pa++){
  *pa=atoi(argv[i+1]);
  
  /*cout<< "input number" <<i+1 << " ";
  cin>> *pa; */
} 
pa = pa-n; 
cout<<"Original: ";
for (i=0; i<n; i++ ,pa++){
   cout<<setw(3)<<*pa ;//<<endl;
  //cout<<pa<<endl;
}
cout<<endl;

pa -=n;
pb = pa+(n-1);
  
for (i=0; i<n/2; i++)
{
   temp = *pa;  
   *pa = *pb;  
   *pb = temp;
   pa++;  pb--;
}

pa-=n/2;
//pb-=n/2;
cout<<"Reversed: ";
for (i=0; i<n-1; i++ ,pa++){
   
   cout<<setw(3)<<*pa ;//<<endl;
  //cout<<pa<<endl;
}
cout<<setw(3)<<*pa<<endl;

pa-=n-1;//tomove it back to the 
delete []pa;
return 0;
}
