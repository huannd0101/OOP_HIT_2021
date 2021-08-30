
# Kế thừa











# Khái niệm kế thừa:

Tính kế thừa là một trong những đặc tính quan trọng nhất của lập trình hướng đối tượng.
Nó là khả năng lấy một thuộc tính, đặc tính của một lớp cha để áp dụng lên lớp con.

* Lớp kế thừa các thuộc tính từ một lớp khác được gọi là Lớp con hoặc Lớp dẫn xuất.

* Lớp có các thuộc tính được kế thừa bởi lớp con được gọi là Lớp cha hoặc Lớp cơ sở.

Tính kế thừa cho phép xây dựng một lớp mới dựa trên các định nghĩa của lớp đã có. Có nghĩa là lớp cha có thể chia sẽ dữ liệu và phương thức cho các lớp con. Các lớp con khỏi phải định nghĩa lại, ngoài ra có thể mở rộng các thành phần kế thừa và bổ sung thêm các thành phần mới. Tái sử dụng mã nguồn 1 cách tối ưu, tận dụng được mã nguồn.

VD: 

![This is a alt text.](https://khiemle.dev/wp-content/uploads/2020/06/Single-Inheritance.jpg.webp "This is a sample image.")
![This is a alt text.](https://khiemle.dev/wp-content/uploads/2020/06/Hierarchical-Inheritance.jpg "img")

## Các khái niệm liên quan:
1. Kế thừa trực tiếp
2. Kế thừa gián tiếp

## Các loại kế thừa:
1. Kế thừa đơn: nghĩa là một lớp chỉ được kế thừa từ đúng một lớp khác. Hay nói cách khác, lớp con chỉ có duy nhất một lớp cha.
2. Kế thừa đa là một tính năng của ngôn ngữ C++. Trong đó một lớp có thể kế thừa từ nhiều hơn một lớp khác. Nghĩa là một lớp con được kế thừa từ nhiều hơn một lớp cơ sở.

## Các phạm vi kế thừa:
– Kế thừa public: Tất cả các thành phần public/protected trong
lớp cơ sở trở thành các thành phần public/protected trong lớp
dẫn xuất

– Kế thừa private: Tất cả các thành phần public/protected trong
lớp cơ sở trở thành các thành phần public/protected trong lớp
dẫn xuất

## Lưu ý:
* Không phải tất cả các thành phần có thể kế thừa từ lớp “cha” xuống lớp “con” lại có thể được lớp “cháu” kế thừa.
* Xây dựng các lớp cơ sở: Khi đó các thành phần được kế thừa
phải có phạm vi truy xuất là public hoặc protected.


# Xây dựng lớp kế thừa

## Nguyên tắc
Cha trước con sau.
## Cú pháp: 
### Đơn kế thừa: 

    class subclass_name : access_mode base_class_name
    {
        //body of subclass
    };

Trong đó:

* subclass_name là tên lớp con sẽ áp dụng kế thừa
* base_class_name là tên lớp cha
* access_mode có thể là public, private hoặc protected

Nếu các bạn không chỉ rõ access_mode thì mặc định sẽ là private.

VD: 
    #include <bits/stdc++.h>
    using namespace std;
    
    //Lớp Cha
    class Parent {
    public:
        int id_p;
    };
    
    // Lớp con kế thừa từ lớp cha
    class Child : public Parent {
    public:
        int id_c;
    };
    
    int main() {
        Child obj1;
        obj1.id_c = 7;
        obj1.id_p = 91;
        cout << "Child id is " << obj1.id_c << endl;
        cout << "Parent id is " << obj1.id_p << endl;
    
        return 0;
    }

### Đa kế thừa:
    class subclass_name : access_mode base_class1, access_mode base_class2, ....
    {
        //body of subclass
    };

