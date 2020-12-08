#include<stdio.h>
#include "var.h"
#include "max.h"
#include "min.h"


int main(){

float res;
int sup;
int inf;
int T[10]={4,9,10,11,12,15,12,9,0,30};
variance(T,10,&res);
max(T,10,&sup);
min(T,10,&inf);
printf (" le maximun est: %d\n",sup);
printf (" le maximun est: %d\n",inf);
printf (" la variance du tableau est: %.2f\n",res);
return 0;}
