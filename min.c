void min(int T[],int n,int *min){
*min=T[0];

for( int i=1;i<n;i++){
if (T[i]<*min){
*min=T[i];
}
}
}
