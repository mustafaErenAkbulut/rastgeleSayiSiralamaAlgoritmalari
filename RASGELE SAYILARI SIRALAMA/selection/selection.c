#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MAX 100

/* Sıralama yapan fonksiyonumuz. */

void  selectionsort(int arr[], int size)
{
	int i,j;
	int mindex;
    
	for (int i=0; i<size; i++)
	{
		mindex=i;
        for (int j=i; j<size; j++)
		{
            if (arr[j]<arr[mindex])
			{
               mindex=j;
            }
        }
        int temp = arr[i]; 
        arr[i] = arr[mindex];
        arr[mindex] = temp;
    }
}

/* Belirli bi aralıkta random sayılar üretip onları sıralayan programımız. */

int main(){

    int i, j, arr[MAX];
    int size=100;
    
	printf("\t\t\t\t      Selection Sort - Secerek Siralama"); 
       
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
	
    printf("\n");
    
   
    printf("\n\nSiralanmis Halleri\n\n");
    
    selectionsort(arr,size); // Fonksiyonu çağırıyorum.
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
