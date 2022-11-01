#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MAX 100

/* Sıralama yapan fonksiyonumuz. */

void  insertionsort(int arr[], int size)
{
	int i,j;
	int ele;
    
	for (int i=1; i<size; i++)
	{
		int ele = arr[i];
		j = i-1;
		
        while (j >=0 && arr[j] > ele )
        {
        	arr[j+1] = arr[j];
        	j = j-1;
        	
		}
	
	arr[j+1] = ele;
}

}

/* Belirli bi aralıkta random sayılar üretip onları sıralayan programımız. */

int main(){

    int i, j, arr[MAX];
    int size=100;
    
	printf("\t\t      Insertion Sort - Sokarak Siralama");
       
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
    
    insertionsort(arr,size); // Fonksiyonu çağırıyorum.
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
