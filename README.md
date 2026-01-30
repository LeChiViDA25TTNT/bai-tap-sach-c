# 📘 Quản lý sách bằng file nhị phân (C)

## 1. Mục đích
Chương trình được viết bằng ngôn ngữ **C**, dùng để:
- Nhập thông tin sách
- Ghi danh sách sách vào file nhị phân
- Đọc danh sách sách từ file nhị phân
- Hiển thị thông tin sách ra màn hình

Dữ liệu sách được lưu bằng `struct SACH`.

---

## 2. Cấu trúc dữ liệu

```c
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
