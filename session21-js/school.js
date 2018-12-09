var schools = [
    {
      "name": "Iliat",
      "slogan": "School of Change",
      "year": 2014,
      "courses": [
        {
          "name": "GMAT",
          "description": "Nếu bạn mong muốn nộp đơn xin học các chương trình cao học xếp thứ hạng cao về Kinh doanh, Kinh tế, Quản trị trên khắp thế giới, điểm GMAT cao là một tiêu chí quan trọng để các trường cân nhắc nhận bạn vào và cấp học bổng cho bạn. Tuy vậy, một tỷ lệ lớn người học cảm thấy GMAT là một kỳ thi rất khó khăn, yêu cầu đầu tư lớn về tiền bạc, thời gian, công sức. Để đạt điểm GMAT như mong muốn, các thí sinh cần một kế hoạch và phương pháp học tập nghiêm túc, hiệu quả. Nếu bạn gặp khó khăn trong việc tự học, không có phương pháp học tập hiệu quả, cần người chỉ dẫn, đốc thúc và giải đáp toàn bộ thắc mắc trong quá trình học, hãy đến với ILIAT, trường đào tạo GMAT với thành tích hàng đầu Việt Nam: "
        },
        {
          "name": "GRE",
          "description": "Nếu bạn đang loay hoay tự luyện thi GRE để đạt yêu cầu bắt buộc của trường và giành các mức học bổng mơ ước, ILIAT sẵn sàng hỗ trợ bạn học tập thật hiệu quả, tập trung bằng khóa học GRE. Khóa học cung cấp kiến thức nền tảng cho 2 phần Quantitative và Verbal của kỳ thi GRE, phù hợp với học viên thuộc cả 2 khối KHTN và khối KHXH. Đồng thời, khóa học bổ sung kiến thức nâng cao  chuyên biệt cho học viên cần điểm Verbal và/hoặc AWA cao (khối KHXH) và học viên cần điểm Quantitative cao (khối KHTN)."
        },
      ]
    },
    {
      "name": "TechKids",
      "slogan": "Code the Change",
      "year": 2015,
      "courses": [
        {
          "name": "C4T Basics",
          "description": "Làm quen với toàn bộ các kiến thức cơ bản trong lập trình và cách phát triển 2 dòng sản phẩm phổ biến nhất là lập trình website và trò chơi để từ đó XÁC ĐỊNH mình có phù hợp với lập trình không, và mình phù hợp với hướng đi cụ thể nào trong ngành",
        },
        {
          "name": "C4T Advance",
          "description": "Nếu bạn không biết thì thị giác máy tính đang được ứng dụng rộng rãi trong các nhà máy lắp ráp, bảo mật, camera an ninh, tính năng bảo mật gương mặt của iPhoneX. Còn Trí tuệ nhân tạo (AI) là hướng đi tương lai của toàn nhân loại, với quá nhiều các ứng dụng liên quan tới tự động hóa, xử lý dữ hiệu và sự đầu tư mạnh của các công ty lớn: Google, Facebook, Samsung, v..v VNG, FPT ",
        },
      ]
    },
];
for (var i = 0; i < schools.length; i++) {
    var school = schools[i];
    console.log(school)
    console.log(school.name);
    var courses = school.courses;
    for (var j = 0; j < courses.length; j++) {
        var course = courses[j];
        console.log(course.name);
        console.log(course.description);
    }
        
}

