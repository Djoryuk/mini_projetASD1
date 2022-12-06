
 
int main()
{ 
  int tab[10] = { 3, -2, 7, 10, -5, 22, 1, 27, 25, 30};
  int i, j, tmp;
 
   //afficher les éléments du tableau
   for (i=0; i < SIZE; ++i)
   {
      printf("%4d", tab[i]);
   }
 
  for (i=1 ; i <= SIZE-1; i++) {
    j = i;
 
    while (j > 0 && tab[j-1] > tab[j]) {
      tmp = tab[j];
      tab[j] = tab[j-1];
      tab[j-1] = tmp;
 
      j--;
    }
  }
 
  printf("\n******** tableau triée par ordre croissant ********\n");
 
  for (i=0; i < SIZE; i++)
     printf("%4d", tab[i]);
 
  return 0;
}


//la sortie
//3  -2   7  10  -5  22   1  27  25  30
//******** tableau triée par ordre croissant ********
 // -5  -2   1   3   7  10  22  25  27  30  

 //la Complexité est  O(n²)