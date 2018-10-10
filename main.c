#include <stdio.h>
#include <stdlib.h>

void taoMenu(){
    printf("1.Gia tri lon nhat\n");
    printf("2.Gia tri nho nhat\n");
    printf("Vui long nhap lua chon cua ban.(1 | 2)\n");
    scanf("%d", &taoMenu);
}

int main() {
    taoMenu();
    int sizeOfArray;
    printf("Vui long nhap so luong phan tu cua mang nho hon hoac bang 10:\n");
    scanf("%d", &sizeOfArray);
    if (sizeOfArray > 10){
        printf("So luong phan tu phai nho hon hoac bang 10.\n");
        scanf("%d", &sizeOfArray);
    }
    int arryNumber [sizeOfArray];
    int *pointer = arryNumber;
    for (int i = 0; i < sizeOfArray; i++) {
        printf("Gia tri cua phan tu thu %d la:\n", i + 1);
        scanf("%d", pointer + i);
        if (*pointer)
    }
    int luachon;
    switch (luachon) {
        case 1:
            printf("Gia tri lon nhat tring mang la:",);
            break;
        case 2:
            printf("Gia tri nho nhat trong mang la:",);
            break;
    }

    return 0;
}