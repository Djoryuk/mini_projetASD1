//Tri par selection 


int i,j,c;
for(i=0;i<N-1;i++)
    for(j=i+1;j<N;j++)
        if ( T[i] > T[j] ) {
            c = T[i];
            T[i] = T[j];
            T[j] = c;
        }