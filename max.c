
void max(int T[],int n,int *max){
*max=T[0];

for( int i=1;i<n;i++){
if (T[i]>*max){
*max=T[i];
}
}
}
