---

# 📘 README – Quản lý sách bằng file nhị phân trong C

## 1. Mục đích chương trình

Chương trình được viết bằng ngôn ngữ **C**, dùng để:

* Nhập thông tin sách từ bàn phím
* Ghi danh sách sách xuống **file nhị phân**
* Đọc danh sách sách từ file nhị phân
* Xuất thông tin sách ra màn hình

Dữ liệu sách được lưu dưới dạng **struct SACH**.

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
```

---

## 3. Chương trình GHI FILE (WRITE)

### Chức năng

* Nhập `n` cuốn sách từ bàn phím
* Ghi toàn bộ danh sách sách vào file **sosach.out** ở dạng nhị phân

### Luồng hoạt động

1. Nhập số lượng sách `n`
2. Gọi hàm `nhapsosach()` để nhập dữ liệu
3. Mở file với chế độ `"wb"`
4. Ghi mảng struct xuống file bằng `fwrite`
5. Đóng file

### File tạo ra

* **Tên file:** `sosach.out`
* **Kiểu file:** nhị phân (binary)

---

## 4. Chương trình ĐỌC FILE (READ)

### Chức năng

* Đọc danh sách sách từ file **sosach.out**
* Hiển thị thông tin sách ra màn hình

### Luồng hoạt động

1. Mở file với chế độ `"rb"`
2. Đọc dữ liệu bằng `fread`
3. Lưu dữ liệu vào mảng struct
4. Xuất danh sách sách bằng `xuatsosach()`
5. Đóng file

---

## 5. Các hàm chính sử dụng

| Hàm            | Chức năng                   |
| -------------- | --------------------------- |
| `nhapsach()`   | Nhập thông tin 1 cuốn sách  |
| `xuatsach()`   | Xuất thông tin 1 cuốn sách  |
| `nhapsosach()` | Nhập danh sách sách         |
| `xuatsosach()` | Xuất danh sách sách         |
| `fwrite()`     | Ghi dữ liệu struct vào file |
| `fread()`      | Đọc dữ liệu struct từ file  |

---

## 6. Lưu ý

* File **READ** chỉ chạy đúng khi file `sosach.out` đã được tạo trước đó bằng chương trình **WRITE**
* `gets()` và `fflush(stdin)` không an toàn, nhưng vẫn được dùng trong môi trường học tập
* Số lượng sách `n` khi đọc phải **trùng với lúc ghi**

---

## 7. Kết luận

Chương trình minh họa cách sử dụng **struct + file nhị phân** trong C để lưu trữ và truy xuất dữ liệu sách một cách hiệu quả.

---
