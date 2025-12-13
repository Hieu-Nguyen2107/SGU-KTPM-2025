# SGU - Kỹ Thuật Phần Mềm 2025

## 📚 Mô tả Repository
Repository này chứa các bài tập thực hành môn **Kỹ Thuật Phần Mềm** của Đại học Sài Gòn (SGU) năm 2025.


## 📁 Cấu trúc Repository

```
SGU-KTPM-2025/
├── Lab1/           # Bài tập Lab 1 - Lập trình C++
├── LAB2/           # Bài tập Lab 2 - Phân tích thiết kế hệ thống
├── LAB3/           # Bài tập Lab 3 - UML và PlantUML
├── LAB4/           # Bài tập Lab 4 (sẽ cập nhật)
├── LAB5/           # Bài tập Lab 5 (sẽ cập nhật)
└── README.md       # File mô tả này
```

---

## 🔬 LAB 1 - Lập trình C++ và Kiểm thử

### 📋 Mô tả
Lab 1 tập trung vào việc lập trình C++ và kiểm thử các hàm với các điều kiện khác nhau. Mỗi bài tập được thực hiện với 3 định dạng:
- **File .cpp**: Mã nguồn C++
- **File .exe**: File thực thi đã biên dịch
- **File .ipynb**: Jupyter Notebook để kiểm thử và demo

### 📝 Danh sách bài tập

#### **Bài 2a** - Hàm điều kiện cơ bản
- **File:** `2a.cpp`, `2a.exe`, `2a.ipynb`
- **Mô tả:** Hàm `f1(x)` với điều kiện:
  ```cpp
  if (x > 10) return 2 * x;
  else return -x;
  ```
- **Test cases:**
  - x > 10: Trả về 2x
  - x ≤ 10: Trả về -x

#### **Bài 2b** - Hàm điều kiện phức tạp
- **File:** `2b.cpp`, `2b.exe`, `2b.ipynb`
- **Mô tả:** Hàm `f1(x)` với điều kiện:
  ```cpp
  if (x > 10) return 2 * x;
  else if (x > 0) return -x;
  else return 2 * x;
  ```
- **Test cases:**
  - x > 10: Trả về 2x (ví dụ: x=11 → 22)
  - 0 < x ≤ 10: Trả về -x (ví dụ: x=5 → -5)
  - x ≤ 0: Trả về 2x (ví dụ: x=-3 → -6)

#### **Bài 2c** - Hàm với logic khác
- **File:** `2c.cpp`, `2c.exe`, `2c.ipynb`
- **Mô tả:** Hàm `f2(x)` với điều kiện:
  ```cpp
  if (x < 10) return 2 * x;
  else if (x < 2) return -x;  // Điều kiện không bao giờ đúng
  else return 2 * x;
  ```

#### **Bài 2d** - Bài tập điều kiện khác
- **File:** `2d.cpp`, `2d.exe`, `2d.ipynb`
- **Mô tả:** Tiếp tục thực hành với các điều kiện if-else

#### **Bài 2e** - Bài tập điều kiện cuối
- **File:** `2e.cpp`, `2e.exe`, `2e.ipynb`
- **Mô tả:** Hoàn thiện series bài tập về điều kiện

#### **Bài 3** - Giải phương trình bậc 4 dạng ax⁴ + bx² + c = 0
- **File:** `3.cpp`, `3.exe`, `3.ipynb`
- **Mô tả:** Giải phương trình bậc 4 có dạng đặc biệt bằng cách đặt y = x²
- **Thuật toán:**
  1. Đặt y = x² → ay² + by + c = 0
  2. Giải phương trình bậc 2 theo y
  3. Với mỗi nghiệm y ≥ 0, tìm x = ±√y
- **Các trường hợp:**
  - Vô số nghiệm: a = b = c = 0
  - Vô nghiệm: Không có y ≥ 0 thỏa mãn
  - Có nghiệm: Tối đa 4 nghiệm thực

### 🛠️ Cách chạy Lab 1
```bash
# Biên dịch file C++
g++ 2a.cpp -o 2a

# Chạy chương trình
./2a.exe

# Hoặc xem demo trong Jupyter Notebook
jupyter notebook 2a.ipynb
```

---

## 🎨 LAB 2 - Phân tích và Thiết kế Hệ thống (PTTKHT)

### 📋 Mô tả
Lab 2 tập trung vào việc phân tích và thiết kế hệ thống thông qua các sơ đồ UML và tài liệu thiết kế.

### 📁 Nội dung LAB 2

#### **📊 Sơ đồ Draw.io**
- **BT2-Bai5.drawio** + **Bai5.png**: Sơ đồ bài tập 5
- **BT2-Bai6_1.drawio** + **Bai6_1.png**: Sơ đồ bài tập 6 phần 1
- **BT2-Bai6_2.drawio** + **Bai6_2.png**: Sơ đồ bài tập 6 phần 2

#### **📈 Bài tập bổ sung**
- **BT2-BTbosung-cau2.drawio** + **btud_cau2.png**: Sơ đồ câu 2 bài tập bổ sung
- **BT2-BTbosung-cau3.drawio**: Sơ đồ câu 3 bài tập bổ sung
- **btud_cau3_1.png** đến **btud_cau3_6.png**: 6 sơ đồ chi tiết cho câu 3

#### **📄 Tài liệu**
- **Lab2_PTTKHT_Nguyễn Thành Đạt_3122411039.docx**: Báo cáo chính thức Lab 2
- **BTUD.docx**: Tài liệu bài tập bổ sung

#### **🔧 File backup**
- **.$Bai6_1.drawio.bkp**: File backup sơ đồ Bài 6.1
- **.$btud_Cau2.drawio.bkp**: File backup sơ đồ câu 2 BTUD
- **.$btud_cau3_1.drawio.bkp**: File backup sơ đồ câu 3.1 BTUD

### 🎯 Kỹ năng đạt được từ LAB 2
- ✅ Phân tích yêu cầu hệ thống
- ✅ Thiết kế sơ đồ UML (Use Case, Class Diagram, Sequence Diagram, etc.)
- ✅ Sử dụng công cụ Draw.io để vẽ sơ đồ
- ✅ Tạo tài liệu thiết kế hệ thống
- ✅ Phân tích và thiết kế các ca sử dụng

---

## � LAB 3 - UML và PlantUML

### 📋 Mô tả
Lab 3 tập trung vào việc tạo các sơ đồ UML nâng cao sử dụng cả Draw.io và PlantUML, bao gồm Class Diagram và các sơ đồ phức tạp khác.

### 📁 Nội dung LAB 3

#### **📊 Sơ đồ Draw.io**
- **bai4.drawio** + **bai4.png**: Sơ đồ UML bài tập 4
- **bai5.drawio** + **bai5.png**: Sơ đồ UML bài tập 5

#### **🔗 PlantUML**
- **cau4.puml**: Mã nguồn PlantUML cho câu 4
- **CodeDiagram.png**: Sơ đồ được tạo từ PlantUML

#### **📄 Tài liệu**
- **Bai4,5.docx**: Báo cáo bài tập 4 và 5
- **Bai9CD.docx**: Tài liệu Class Diagram bài 9

### 🎯 Kỹ năng đạt được từ LAB 3
- ✅ Thiết kế Class Diagram nâng cao
- ✅ Sử dụng PlantUML để tạo sơ đồ từ code
- ✅ Tích hợp nhiều công cụ UML (Draw.io + PlantUML)
- ✅ Phân tích và thiết kế hệ thống phức tạp
- ✅ Tạo documentation từ sơ đồ

### 🛠️ Cách sử dụng PlantUML
```bash
# Cài đặt PlantUML
npm install -g node-plantuml

# Tạo sơ đồ từ file .puml
plantuml cau4.puml

# Hoặc sử dụng online tại: http://www.plantuml.com/plantuml
```

---

## 🚀 Hướng dẫn sử dụng

### Yêu cầu hệ thống
- **C++ Compiler**: GCC hoặc Visual Studio
- **Python**: Để chạy Jupyter Notebook
- **Draw.io**: Để xem/chỉnh sửa sơ đồ
- **PlantUML**: Để tạo sơ đồ từ mã nguồn
- **Microsoft Word**: Để xem tài liệu .docx

### Clone repository
```bash
git clone https://github.com/Hieu-Nguyen2107/SGU-KTPM-2025.git
cd SGU-KTPM-2025
```

### Cấu trúc làm việc
1. **Lab1**: Tập trung vào coding và testing
2. **LAB2**: Tập trung vào analysis và design
3. **LAB3**: Tập trung vào UML nâng cao và PlantUML
4. **LAB4-5**: Sẽ được cập nhật trong tương lai


---

## 📝 Ghi chú

- Repository này được tạo cho mục đích học tập
- Mọi bài tập đều được thực hiện theo yêu cầu của giảng viên
- Code được viết rõ ràng, có comment và test cases
- Sơ đồ được thiết kế theo chuẩn UML

---

**⭐ Nếu repository này hữu ích, hãy cho một star nhé! ⭐**