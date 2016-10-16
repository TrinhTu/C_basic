## Viết tài liệu với Markdown

>Tài liệu: Viết tài liệu với Markdown
>
>Thực hiện: Lê Tú Trinh
>
>Cập nhập lần cuối: 13/10/2016

###Mục lục

 [1. Tìm hiểu về Markdown](#Markdown)

[2. Markdown dùng làm gì](#congdung)

[3. Các cú pháp thường gặp](#cuphap)

- [3.1 Thẻ tiêu đề](#tieude)

- [3.2 Chèn link và ảnh](#link)

- [3.3 In đậm và in nghiêng](#indam)

- [3.4 Bo câu văn hay văn bản](#bo)

- [3.5 Tạo bảng](#bang)

[4. Công cụ viết Markdown](#congcu)

##Nội dung

<a name="Markdown"></a>
### 1. Tìm hiểu về Markdown

 1. Markdown là gì: 
 
> Markdown là ngôn ngữ đánh dấu siêu văn bản được tạo ra bởi John Gruber sử dụng cú pháp khá đơn giản và dễ hiểu để đánh dấu văn bản và văn bản được viết bằng Markdown có thể chuyển đổi sang HTML và ngược lại.

 2. Tại sao cần dùng Markdown:
 
> Cũng giống như Markdown, HTML cũng dùng để đánh dấu siêu văn bản nhưng cú pháp của nó thì khá phức tạp và khó nhớ, Markdown giúp ta giải quyết được vấn đề này, cú pháp của Markdown thì ngắn gọn dễ hiểu hơn nhưng nội dung thì vẫn không có gì thay đổi.

*ví dụ*: đoạn văn bản trong html gồm 1 tiêu đề và 3 đoạn văn thì cú pháp sẽ là:
```
###Tiêu Đề
<p>Đoạn văn thứ nhất</p>
<p>Đoạn văn thứ 2</p>
<p>Đoạn văn thứ 3</p>
```

**Còn với Markdown thì cú pháp sẽ đơn giản hơn nhiều:**
```
## Tiêu Đề
Đoạn văn thứ 1
Đoạn văn thứ 2
Đoạn văn thứ 3
```
<a name="congdung"></a>
### 2. Markdown dùng để làm gì: 

>John Gruber đã tạo ra ngôn ngữ Markdown với mục tiêu tạo ra một định dạng văn bản thô "dễ viết, dễ đọc, dễ dàng chuyển thành XHTML (hoặc HTML). Nói tóm lại Markdown là ngôn ngữ dùng để viết tài liệu và đánh dấu siêu văn bản.

<a name="cuphap"></a>
### 3. Các cú pháp thường gặp:

<a name="tieude"></a>
#### 3.1 Thẻ tiêu đề: 

Markdown sử dụng kí tự # để bắt đầu cho các thẻ tiêu để, có thể dùng từ 1 đến 6 kí tự # liên tiếp mức độ giảm dần từ 1 đến 6

**ví dụ**:	

###tiêu đề 1

####tiêu đề 2

#####tiêu đề 3

<a name="link"></a>
####3.2 Chèn link và hình ảnh

Chèn link và chèn ảnh trong Markdown khá đơn giản, không phức tạp như trong HTML. Cú pháp chèn hình ảnh như sau:

		![tên ảnh](htpp://.......)

**ví dụ**:	 đây là con mèo

![doremon](http://khohinhnen.com/wp-content/uploads/2015/01/hinh-anh-doremon-17.jpg)

**Cú pháp để chèn link như sau: ** 

		[tên](http://.......)

*ví dụ* : có thể copy và past trực tiếp link vào :

(https://github.com/)

Cũng có thể làm cho nó ngắn gọn hơn:

[github](https://github.com/)

<a name="indam"></a>
####3.3 Để in đậm hay in nghiêng câu văn hay văn bản thực hiện cú pháp như sau:

`**từ cần in đậm**`  sẽ được kết quả như sau **từ cần in đậm**

 - Để in nghiêng thì như sau:

`*từ cần in nghiêng*`  sẽ thu được kết quả *từ cần in nghiêng*

<a name="bo"></a>
####3.4 Để bo 1 đoạn văn bảng ta thực hiện cú pháp như sau:

`'đoạn cần bo'`    sẽ được kết quả như sau    `đoạn cần bo`

 <a name="bang"></a>
####3.5 Để tạo bảng:

| Header | Header | Right  |
|:-------|:------:|-------:|
|  Cell  |  Cell  |   $10  |
|  Cell  |  Cell  |   $20  |
| ====== | ====== | =====: |
| Footer | Footer | Footer |


Kí tự | bắt đầu một hàng

Kí tự - tách phần header của bảng

Kí tự = tách phần footer

Kí tự : gióng hàng trong cột (trái, phải hoặc 2 bên là gióng giữa)

- Ngoài ra còn nhiều cú pháp khác như là :
<ul>
<li>Tạo điểm nhấn( highlight):    ==text==</li>
<li> Tạo đường kẻ gạch ngang:    `***` hoặc `---`</li>
<li>Tạo chú thích cuối trang: Chú thích[^1] chú thích[^2].  
</ul>

<a name="congcu"></a>
###4. Công cụ viết Markdown:

Có thể dùng `notepad` `notepad++` `vi` ` ngoài ra còn có rất nhiều phần mềm khác hỗ trợ viết Markdown như [stackedit](https://stackedit.io/editor) hay [markdownlivepreview](http://markdownlivepreview.com/)  

Ở đây để hỗ trợ cho việc tạo bảng 1 cách dễ dàng có thể sử dụng [ công cụ hỗ trợ này](http://www.tablesgenerator.com/markdown_tables). Còn việc download sublime có thể dễ dàng tải về [tại đây](https://www.sublimetext.com/3) và tiến hành cài đặt bình thường trên máy.

###Các lỗi xảy ra

###Kết luận:

 - Ưu điểm: nó cho phép bạn soạn thảo và trình bày nhanh hơn phương pháp truyền thống ngoài ra còn có thể kết hợp sử dụng HTML với Markdown trong bài viết nếu có nhu cầu sử dụng màu chữ, khi viết tài liệu bằng markdown thì khồn cần sử dụng quá nhiều công cụ phức tạp

 - Nhược điểm: mới xài nên chưa tìm ra

###Tham khảo: có thể tham khảo thêm 1 số tài liệu ở đây:

[tai_lieu1](https://github.com/hocchudong/git-github-for-sysadmin)

[tai_lieu2](https://help.ghost.org/hc/en-us/articles/224410728-Markdown-Guide)

Ngoài ra còn có thể đọc thêm tài liệu ở 1 số trang như [hoc_lap_trinh](http://www.hoclaptrinh.org/bai-viet/Markdown-La-Gi) [markdown](https://vi.wikipedia.org/wiki/Markdown)....

##hết.

