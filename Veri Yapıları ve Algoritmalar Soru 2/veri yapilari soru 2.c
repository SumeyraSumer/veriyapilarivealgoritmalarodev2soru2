#include <stdio.h>

// Veri yap�lar� ve algoritma KS-1 �devi
// Diziyi toplam� e�it alt k�melere b�lme.
// S�meyra S�mer
// 5210505067


// Bu fonksiyonla verilen dizi elemanlar�n�n iki e�it toplama sahip alt k�meye ayr�l�p ayr�lamayaca��n� kontrol ettim.
void subsetSum(int array[], int n, int toplam1, int toplam2, int index, int *yap) {
    // T�m alt k�meler denenmi�se iki toplam�n e�it olup olmad��� kontrol ettim.
    if (index == n) {
        if (toplam1 == toplam2) {
            *yap = 1; // E�it toplama sahip alt k�meler varsa yap de�i�keni 1 yapt�m.
        }
        return;
    }
    // Her eleman i�in iki toplama da eklenmeden �nce ve sonra denenecek �ekilde alt k�meler olu�turdum.
    subsetSum(array, n, toplam1 + array[index], toplam2, index + 1, yap); // toplam1'e ekleme yapt�m.
    subsetSum(array, n, toplam1, toplam2 + array[index], index + 1, yap); // toplam2'ye ekleme yapt�m.
}

int main() {
	
	printf("Veri yapilari ve algoritma KS-1 odevi\n");
	printf("Diziyi toplami esit alt kumelere bolme\n");
	printf("Sumeyra Sumer\n");
	printf("5210505067\n");
	printf("------------------------------------------------------------------------------\n");
	
    int n;
    printf("Lutfen dizinin uzunlugunu girin: "); // Dizinin uzunlu�unu kullan�c�dan istedim.
    scanf("%d", &n); // Dizinin uzunlu�unu kullan�c�dan ald�m.
	
	int i;
    int array[n];
    printf("Lutfen dizinin elemanlarini girin:\n"); // Dizinin elemanlar�n� kullan�c�dan istedim.
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]); // Dizinin elemanlar�n� kullan�c�dan ald�m.
    }

    int yap = 0;
    subsetSum(array, n, 0, 0, 0, &yap); // Alt k�meler olu�turdum.

    // E�it toplama sahip alt k�meler varsa "Dizi, iki e�it toplama sahip alt k�meye ayr�labilir." yazd�rd�m. Aksi takdirde "Dizi, iki e�it toplama sahip alt k�meye ayr�lamaz." yazd�rd�m.
    if (yap) {
        printf("Dizi, iki esit toplama sahip alt kumeye ayrilabilir.\n");
    } else {
        printf("Dizi, iki esit toplama sahip alt kumeye ayrilamaz.\n");
    }

    return 0;
}

