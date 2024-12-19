#include <stdio.h>
#include <string.h>

struct data {
    int npm;
	char nama[50];
    char prodi[20];
    float ipk;
};

void tukar (data *a, data *b){
	struct data c = *a;
	*a = *b;
	*b = c;
}
 void selectionsort(struct data mahasiswa[], int n) {
	for (int i = 0; i < 2; i++) { 
	int pos = i;
    for (int j = i + 1; j < 3; j++) {
        if (mahasiswa[i].npm < mahasiswa[pos].npm) pos = j;
		{ 
        if (pos = i) tukar(&mahasiswa[pos], &mahasiswa[i]); 
            }
        }
	}
}

void insertionSort(struct data mahasiswa[], int n) {
    for (int i = 1; i < n; i++) {
        struct data key = mahasiswa[i];
        int j = i - 1;
        while (j >= 0 && mahasiswa[j].npm > key.npm) {
            mahasiswa[j + 1] = mahasiswa[j];
            j--;
        }
        mahasiswa[j + 1] = key;
    }
}

int main() {
    
    struct data mahasiswa[3];
	
	mahasiswa[0].npm = 2308221;
    strcpy(mahasiswa[0].nama, "Budi");
    strcpy(mahasiswa[0].prodi, "Informatika");
    mahasiswa[0].ipk = 3.7;
    
    mahasiswa[1].npm = 2308220;
    strcpy(mahasiswa[1].nama, "Sulis");
    strcpy(mahasiswa[1].prodi, "Informatika");
    mahasiswa[1].ipk = 3.5;
    
    mahasiswa[2].npm = 2308219;
    strcpy(mahasiswa[2].nama, "Cindy");
    strcpy(mahasiswa[2].prodi, "Sistem Informasi");
    mahasiswa[2].ipk = 3.9;
    
    printf("Daftar Mahasiswa Sebelum Pengurutan:\n");
    for (int i = 0; i < 3; i++) {
    	printf("Npm Mahasiswa    : %d\n", mahasiswa[i].npm);
        printf("Nama Mahasiswa   : %s\n", mahasiswa[i].nama);
        printf("Program studi    : %s\n", mahasiswa[i].prodi);
        printf("IPK	         : %.1f\n", mahasiswa[i].ipk);
        printf("------------------------\n");
    }
    
for (int i = 0; i < 3; i++) { 
    for (int j = i + 1; j < 3; j++) {
        if (mahasiswa[i].npm > mahasiswa[j].npm) { 
           tukar(&mahasiswa[i], &mahasiswa[j]); 
        }
    }
}
    
    printf("\n\nDaftar Mahasiswa Setelah Pengurutan Bubble Sort:\n");
    for (int i = 0; i < 3; i++) {
    	printf("Npm Mahasiswa    : %d\n", mahasiswa[i].npm);
        printf("Nama Mahasiswa   : %s\n", mahasiswa[i].nama);
        printf("Program studi    : %s\n", mahasiswa[i].prodi);
        printf("IPK	         : %.1f\n", mahasiswa[i].ipk);
        printf("------------------------\n");
    }
 
    selectionsort(mahasiswa,3);
    printf("\n\nDaftar Mahasiswa Setelah Pengurutan Selection Sort:\n");
    for (int i = 0; i < 3; i++) {
    	printf("Npm Mahasiswa    : %d\n", mahasiswa[i].npm);
        printf("Nama Mahasiswa   : %s\n", mahasiswa[i].nama);
        printf("Program studi    : %s\n", mahasiswa[i].prodi);
        printf("IPK	         : %.1f\n", mahasiswa[i].ipk);
        printf("------------------------\n");
    }
    
    insertionSort(mahasiswa, 3);
    printf("\n\nDaftar Mahasiswa Setelah Pengurutan Insertion Sort:\n");
    for (int i = 0; i < 3; i++) {
        printf("Npm Mahasiswa    : %d\n", mahasiswa[i].npm);
        printf("Nama Mahasiswa   : %s\n", mahasiswa[i].nama);
        printf("Program studi    : %s\n", mahasiswa[i].prodi);
        printf("IPK              : %.1f\n", mahasiswa[i].ipk);
        printf("------------------------\n");
    }
    return 0;
}
