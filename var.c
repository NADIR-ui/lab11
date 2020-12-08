void variance (int t[], int n, float*var){

*var=0;
float M=0;

for (int i=0;i<n;i++){
M = M + t[i];
}

M= M/n;

for (int i=0;i<n;i++){

*var = *var+ (t[i]-M)*(t[i]-M);
}

*var = *var/n;



}
