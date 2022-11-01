#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MAX 100

/* Sıralama yapan fonksiyonumuz. */

void quickSort(int arr[], int l, int r)
{
	int i,j,piv,temp;
	i=l;
	j=r;
	piv=arr[(i+j)/2];
	
	do
	{
		while(arr[i]< piv)
		i++;
		while(arr[j]>piv)
		j--;
		if(i<=j)
		{
			temp= arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			i++;
			j--;
		}
		
	} while(i<j);
	if (i<r)
	quickSort(arr, i, r);
	if(l<j)
	quickSort(arr, l, j);

	
}

/* Belirli bi aralıkta random sayılar üretip onları sıralayan programımız. */

int main(){

    int j, arr[MAX];
    int size=100;
    int i=0;
    
	printf("\t\t    Quick Sort - Seri Siralama");
	
	srand(time(NULL));
	
	for(int i=0; i<100; i++)
	{
		arr[i] = rand()%10000+1; // Random sayıları üretiyorum.
	}
	
    printf("\n\nRastgele Sayilar\n\n");
    
    for(int i=0; i<100; i++)
	{
        printf("%d\t",arr[i]); // Random sayıları yazdırıyorum.
        
    }
    
    printf("\n\nSiralanmis Halleri\n\n");
    
  
	quickSort(arr, 0, MAX-1); // Fonksiyonu çağırıyorum.
	for(int i=0; i<size; i++)
	{
        printf("%d\t",arr[i]); // Sıralanmış hallerini yazdırıyorum.
        
    }
    
	printf("\n");

	printf("\n\nCikmak icin herhangi bi tusa basiniz\n\n"); // Türkçe açıkladım.
	printf("\n");
	system("pause"); // Program hemen kapanmasın diye koydum.
	return 0;
}
