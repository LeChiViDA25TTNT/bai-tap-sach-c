#include <stdio.h>


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

int main(){
	S a;
	nhapsach(&a);
	xuatsach(a);
	
	return 0;
}

void nhapsach(S *a)
{
	printf("\nnhap ma sach: ");
	fflush(stdin);
	scanf("%s", a->masach);
	printf("\nnhap tieu de: ");
	fflush(stdin);
	gets(a->tieude);
	printf("\nnhap tac gia: ");
	fflush(stdin);
	gets(a->tacgia);
		printf("\nnhap nam xuat ban: ");
	fflush(stdin);
	scanf("%d", &a->namxuatban);
		printf("\nnhap gia ban: ");
	fflush(stdin);
	scanf("%lld", &a->giaban);
		printf("\nnhap so trang: ");
	fflush(stdin);
	scanf("%d", &a->sotrang);
		printf("\nnhap nha xuat ban: ");
	fflush(stdin);
	gets(a->nhaxuatban);
		printf("\nnhap loai sach: ");
	fflush(stdin);
	gets(a->loaisach);
}

void xuatsach(S a)
{
	printf("\n%s\t%s\t%s\t%d\t%lld\t%d\t%s\t%s", a.masach, a.tieude, a.tacgia, a.namxuatban, a.giaban, a.sotrang, a.nhaxuatban, a.loaisach);
}


