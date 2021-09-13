# Phương thức ảo - Hàm ảo (Virtual method or Virtual function)

## Khái niệm:

* Là một hàm hay phương thức có thể thừa kế và `ghi đè` được để tạo điều kiện cho `điều phối động`. Khái niệm này là một phần quan trọng của phần `đa hình` của lập trình hướng đối tượng (OOP).

* Nếu có nhiều hàm thành viên có `cùng tên` trong lớp cơ sở và lớp kế thừa, thì các hàm ảo giúp lập trình viên khả năng để gọi hàm thành viên của lớp khác với cùng lời gọi hàm phụ thuộc vào ngữ cảnh khác nhau. Đặc điểm này trong lập trình C++ còn được biết đến với tên gọi là tính đa hình.

* Hàm ảo là thành phần của một lớp, được khai báo trong lớp cơ sở rồi nhưng lại được khai báo lại trong lớp dẫn xuất với từ khoá “virtual” ở đằng trước.

## Ưu nhược điểm của phương thức ảo:

 * Chương trình sử dụng nhiều phương thức ảo sẽ `linh hoạt` hơn khi truy xuất đến các phương thức cùng tên của các lớp dẫn xuất.

* Việc thực thi chương trình sẽ chậm hơn.

 * Tốn nhiều bộ nhớ hơn do phải tạo ra một bảng chỉ mục của các phương thức ảo.
của các phương thức ảo

## Khi nào dùng phương thức ảo?

 * Có sự kế thừa giữa các lớp.

 * Các lớp trong cây thứ bậc có các phương thức cùng tên, cùng đối số, lớp cơ sở ban đầu (lớp gốc) `bắt buộc` cũng phải có phương thức này.

 * Bản chất của cây thứ bậc đòi hỏi cần có phương thức ảo.

<br> <br> <br>

# Tính đa hình (Polymorphism)

## Khái niệm

* Đa hình là một trong bốn tính chất đặc trưng của lập trình hướng đối tượng bên cạnh tính đóng gói, tính trừu tượng và tính kế thừa. 
* Đa hình (polymorphism) là hiện tượng mà các đối tượng thuộc các class khác nhau có thể biểu diễn cùng một thông thiệp theo các cách khác nhau.

## Phân loại

![classify](https://nguyenvanhieu.vn/wp-content/uploads/2020/02/Polymorphism-1-768x402.jpg "This is an example")

### Overloading Method (Nạp chồng phương thức) 
 * Là đặc điểm trong cùng 1 lớp có nhiều phương thức cùng tên nhưng khác nhau về Signature. 

 * Signature bao gồm: Số lượng các đối số hoặc kiểu dữ liệu các đối số hoặc thứ tự các đối số.

 * Kiểu dữ liệu trả về không được tính vào signature

 * Lợi ích của Overloading là khả năng tái sử dụng lại phương thức và giúp việc gọi hàm “uyển chuyển”.

 * Các Constructor là trường hợp đặc biệt của Overloading Method

### Overriding Method  (ghi đè phương thức)

 * Trong một tập các lớp có mối quan hệ huyết thống có các phương thức giống signature y xì (nội dung phương thức khác nhau)

 * Overriding methods giúp lập trình viên có thể định nghĩa cách hành xử khác nhau ứng với các đối tượng khác nhau nhưng cùng sử dụng một tên phương thức.

 * Ví dụ: Nhân viên chính thức và Nhân viên thời vụ đều có phương thức là Tính Lương, tuy nhiên cách thức tính lương của 2 đối tượng này sẽ khác nhau.

[Sự khác nhau giữa overloading và overriding trong java](https://viettuts.vn/java/overloading-va-overriding-trong-java)

### Virtual method: 

<br>

## Mục đích của Tính đa hình
Lập trình viên có thể tận dụng Tính đa hình trong OOP vào những trường hợp sau:

 * Khi các lớp con cần dùng phương thức của lớp cha để bổ sung cho một phương thức khác.

 * Khi một lớp cần có nhiều phương thức cùng tên nhưng khác tham số (parameter).

## Vì sao phải dùng Tính đa hình?
Nhìn chung, nếu lập trình viên tận dụng được Tính đa hình thì sẽ mang lại nhiều lợi ích trong quá trình phát triển phần mềm. Những lợi ích đó có thể là:

 * Lập trình viên không phải viết lại mã hoặc lớp đã có sẵn. Sau khi một đoạn mã hoặc lớp được khởi tạo thành công, ta có thể tái sử dụng chúng nhờ vào Tính đa hình.

 * Lập tình viên có thể dùng một tên duy nhất để lưu trữ biến của nhiều kiểu dữ liệu khác nhau (float, double, long, int,…).

 * Lập trình viên có thể phát triển thêm Tính trừu tượng từ những đoạn mã đơn giản.