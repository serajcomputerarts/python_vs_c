#include <stdio.h>
#include <time.h>
int main(){
// s for start time and e for end time
clock_t s,e;
int sum=0;
// start the timer
s=clock();
// main loop 
for (int i=0;i<1000000;i++){
   sum=sum+i;
   
}
// stopping the timer
e=clock();
// calculating the time 
double d=(double)(e-s)/CLOCKS_PER_SEC;
printf("Time:%f\n",d);
return 0;
}