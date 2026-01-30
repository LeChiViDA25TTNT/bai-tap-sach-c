#include <stdio.h>
#include <string.h>

struct SACH{
    char masach[20];
    char tieude[100];
    char tacgia[50];
    int namxuatban;
    long long giaban;
    int sotrang;
    char nhaxuatban[100];
    char loaisach[50];
};
typedef struct SACH S;

void nhapsach(S *a);
void xuatsach(S a);
void nhapsosach(S a[], int n);
void xuatsosach(S a[], int n);
void timsach(S a[], int n, char masach[]);

int main(){
   S a[100];
    int n;
    FILE *fp;
    char ms[21];

    fp = fopen("sosach.out", "rb");
    if(fp == NULL){
        printf("Khong mo duoc file!\n");
        return 0;
    }

    fseek(fp, 0, SEEK_END);
    n = ftell(fp) / sizeof(S);
    rewind(fp);

    fread(a, sizeof(S), n, fp);
    fclose(fp);

    printf("\n===== DANH SACH SACH =====\n");
    xuatsosach(a, n);

    printf("\nNhap ma sach can tim: ");
    scanf("%s", ms);
    timsach(a, n, ms);


    return 0;
}

void nhapsach(S *a){
    printf("\nnhap ma sach: ");
    scanf("%s", a->masach);

    printf("nhap tieu de: ");
    getchar();
    gets(a->tieude);

    printf("nhap tac gia: ");
    gets(a->tacgia);

    printf("nhap nam xuat ban: ");
    scanf("%d", &a->namxuatban);

    printf("nhap gia ban: ");
    scanf("%lld", &a->giaban);

    printf("nhap so trang: ");
    scanf("%d", &a->sotrang);

    printf("nhap nha xuat ban: ");
    getchar();
    gets(a->nhaxuatban);

    printf("nhap loai sach: ");
    gets(a->loaisach);
}

void xuatsach(S a){
    printf("\n%s\t%s\t%s\t%d\t%lld\t%d\t%s\t%s",
           a.masach, a.tieude, a.tacgia,
           a.namxuatban, a.giaban, a.sotrang,
           a.nhaxuatban, a.loaisach);
}

void nhapsosach(S a[], int n){
	int i;
    for( i = 0; i < n; i++){
        printf("\nnhap sach thu %d", i + 1);
        nhapsach(&a[i]);
    }
}

void xuatsosach(S a[], int n){
	int i;
    for( i = 0; i < n; i++){
        xuatsach(a[i]);
    }
}

void timsach(S a[], int n, char masach[]){
    int found = 0;
    int i;
    for(i = 0; i < n; i++){
        if(strcmp(a[i].masach, masach) == 0){
            printf("\nTim thay sach:");
            xuatsach(a[i]);
            found = 1;
            break;
        }
    }
    if(!found){
        printf("\nKhong tim thay sach co ma %s", masach);
    }
}
