#include <stdio.h>

// Veri yapýlarý ve algoritma KS-1 ödevi
// Diziyi toplamý eþit alt kümelere bölme.
// Sümeyra Sümer
// 5210505067


// Bu fonksiyonla verilen dizi elemanlarýnýn iki eþit toplama sahip alt kümeye ayrýlýp ayrýlamayacaðýný kontrol ettim.
void subsetSum(int array[], int n, int toplam1, int toplam2, int index, int *yap) {
    // Tüm alt kümeler denenmiþse iki toplamýn eþit olup olmadýðý kontrol ettim.
    if (index == n) {
        if (toplam1 == toplam2) {
            *yap = 1; // Eþit toplama sahip alt kümeler varsa yap deðiþkeni 1 yaptým.
        }
        return;
    }
    // Her eleman için iki toplama da eklenmeden önce ve sonra denenecek þekilde alt kümeler oluþturdum.
    subsetSum(array, n, toplam1 + array[index], toplam2, index + 1, yap); // toplam1'e ekleme yaptým.
    subsetSum(array, n, toplam1, toplam2 + array[index], index + 1, yap); // toplam2'ye ekleme yaptým.
}

int main() {
	
	printf("Veri yapilari ve algoritma KS-1 odevi\n");
	printf("Diziyi toplami esit alt kumelere bolme\n");
	printf("Sumeyra Sumer\n");
	printf("5210505067\n");
	printf("------------------------------------------------------------------------------\n");
	
    int n;
    printf("Lutfen dizinin uzunlugunu girin: "); // Dizinin uzunluðunu kullanýcýdan istedim.
    scanf("%d", &n); // Dizinin uzunluðunu kullanýcýdan aldým.
	
	int i;
    int array[n];
    printf("Lutfen dizinin elemanlarini girin:\n"); // Dizinin elemanlarýný kullanýcýdan istedim.
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]); // Dizinin elemanlarýný kullanýcýdan aldým.
    }

    int yap = 0;
    subsetSum(array, n, 0, 0, 0, &yap); // Alt kümeler oluþturdum.

    // Eþit toplama sahip alt kümeler varsa "Dizi, iki eþit toplama sahip alt kümeye ayrýlabilir." yazdýrdým. Aksi takdirde "Dizi, iki eþit toplama sahip alt kümeye ayrýlamaz." yazdýrdým.
    if (yap) {
        printf("Dizi, iki esit toplama sahip alt kumeye ayrilabilir.\n");
    } else {
        printf("Dizi, iki esit toplama sahip alt kumeye ayrilamaz.\n");
    }

    return 0;
}

