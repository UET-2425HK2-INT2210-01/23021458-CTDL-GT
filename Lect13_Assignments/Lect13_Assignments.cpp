﻿Bài 1: đáp án đúng 1, 3, 5
Khớp với chuỗi bắt đầu bằng <, sau đó là ít nhất một ký tự không phải >, rồi kết thúc bằng >
<> bị sai vì không có ký tự nào ở giữa.

Bài 2: 1, 2, 3, 4, 6
Khớp với chuỗi :
Bắt đầu bằng a
Theo sau là 1 ký tự bất kỳ
Sau đó là ít nhất một ký tự b hoặc c
ac bị sai vì thiếu phần[bc] + sau ký tự bất kỳ.

Bài 3: 3, 4
Khớp với chuỗi :
Có ít nhất một từ "very "
Có thể có hoặc không "fat "
Phải có "tall" hoặc "ugly"
Kết thúc bằng "man"
Các chuỗi còn lại bị sai vì thiếu "very" hoặc thiếu "tall|ugly".

Bài 4: ^...\....\....\....\.
Giải Thích : Mỗi.trong biểu thức chính quy khớp với bất kỳ ký tự đơn nào ngoại trừ ký tự xuống dòng, tương ứng với a, b, c, d, e, f, g, h, i, j, k, x .
\.đảm bảo các dấu chấm theo nghĩa đen được khớp nhau.
Các ký tự^ và $ đảm bảo chuỗi có đúng dạng đã chỉ định(không có ký tự thừa).

Bài 5: ^ \(? [0 - 9] {3}\) ? [-.] ? [0 - 9] {3}[-.] ? [0 - 9] {4}$
Giải thích :
Biểu thức chính quy xử lý tất cả các định dạng được chỉ định :
(123) 456 7899 : Phù hợp(…) + dấu cách phân cách.
(123).456.7899 : Phù hợp(…) + dấu chấm phân cách.
(123) - 456 - 7899 : Phù hợp với(…) + dấu gạch nối.
123 - 456 - 7899 : Không có dấu ngoặc đơn, dấu gạch nối.
123 456 7899 : Không có dấu ngoặc đơn, dấu cách.
1234567899 : Không có dấu ngoặc đơn, không có dấu phân cách.
[0 - 9] đảm bảo các chữ số và[-.] ? cho phép bất kỳ một trong ba dấu phân cách(hoặc không có dấu phân cách nào cho định dạng cuối cùng).

Bài 6 : ^ [a - zA - Z0 - 9]([a - zA - Z0 - 9] * [-_][a - zA - Z0 - 9]) * [a - zA - Z0 - 9] ? $
Giải thích :
Biểu thức chính quy đảm bảo :
Bắt đầu và kết thúc bằng các ký tự chữ và số(không có dấu phân cách ở ranh giới).
Các dấu phân cách(-_) được phép nhưng không được liên tiếp(mỗi dấu phân cách được theo sau bởi ít nhất một ký tự chữ và số).
Nhóm ở giữa([a - zA - Z0 - 9] * [-_][a - zA - Z0 - 9]) * cho phép các chuỗi như “ab” hoặc “abc_def” nhưng ngăn chặn “a--b” hoặc “a _b”.
Xử lý các trường hợp như “hello - world”, “abc_123”, “abc”, nhưng từ chối “--abc”, “abc - ”, “a__b”.