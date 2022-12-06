//tri par Bulles



int i,j,c;

for(j=1;j<=N;j++) // pour faire l'operation N fois
    for(i=0;i<N-1;i++)
        if ( T[i] > T[i+1] ) {
                c = T[i];
                T[i] = T[i+1];
                T[i+1] = c;
        }


        //La complexite de tri a bulle est o(n²)
