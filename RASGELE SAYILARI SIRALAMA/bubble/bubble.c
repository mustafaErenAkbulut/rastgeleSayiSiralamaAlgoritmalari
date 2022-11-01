#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MAX 100

/* Sıralamayı yapan fonksiyonumuz. */

void  bubblesort(int arr[], int size)
{
	int i,j,temp;
    
	for (int i=0; i<(size-1); i++)
	{
        for (int j=0; j<size-i-1; j++)
		{
            if (arr[j]>arr[j+1])
			{
                temp = arr[j]; 
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

/* Aşağıda random sayıları üretiyorum ve sıralama fonksiyonumu geri çağırıp yazdırma işlemimi yapıyorum */

int main(){

    int i, j, arr[MAX];
    int size=100;
    
	printf("\t\t\t\t      Bubble Sort - Baloncuk Siralama");
       
	srand(time(NULL));

    
    for(int i=0; i<100; i++) // Random sayıları üretiyorum.
	{
        arr[i] = rand()%10000+1;
    }

    
    printf("\n\nRastgele Sayilar\n\n");
    
	for(int i=0; i<100; i++)
	{
        printf("%4d\t",arr[i]); // Random sayıları yazdırıyorum.
        
    }
	
    printf("\n");
    
   
    printf("\n\nSiralanmis Halleri\n\n"); 
    
    bubblesort(arr,size); // Fonksiyonu çağırıyorum.
	for(int i=0; i<size; i++)
	{
        printf("%4d\t",arr[i]); // Sıralanmış hallerini yazdırıyorum.
        
    }
    
	printf("\n");

	printf("\n\nCikmak icin herhangi bi tusa basiniz\n\n");  // Türkçe açıkladım.
	printf("\n");  
	system("pause"); // Program hemen kapanmasın diye koydum.
	return 0;
}