# veriyapilarivealgoritmalarodev2soru2

Diziyi Toplamı Eşit Alt Kümelere Bölme



ALGORİTMANIN AMACI


Bu algoritma, bir tamsayı dizisi içindeki elemanların iki eşit toplama sahip alt kümeye ayrılıp ayrılamayacağını kontrol etmek için yazılmıştır.
Bu algoritma, alt kümelerin tüm kombinasyonlarını deneyerek bir çözüm arar. Bu nedenle, büyük boyutlu dizilerde veya karmaşık veri yapıları üzerinde çalışırken performansı düşük olabilir.


ALGORİTMA NE İÇİN KULLANILIR/KULLANILABİLİR?


Bu algoritma, bir dizinin elemanlarının iki eşit toplama sahip alt kümeye ayrılıp ayrılamayacağını kontrol etmek için kullanılabilir.
Algoritma, bir dizi ve dizinin uzunluğu gibi girdileri kabul eder. Bu dizinin elemanlarının tüm alt kümelerini oluşturarak, her alt kümedeki elemanları toplar ve bu toplamların iki eşit değere sahip olup olmadığını kontrol eder. Eşit toplama sahip alt kümeler varsa, bir işaretleyici değişken olan "yap" değişkeni 1'e eşit olur. Sonuç olarak, eğer "yap" değişkeni 1'e eşitse, o zaman dizinin iki eşit toplama sahip alt kümeye ayrılabileceği sonucuna varılır. Aksi takdirde, "yap" değişkeni hala 0 olarak kalır ve dizinin iki eşit toplama sahip alt kümeye ayrılamayacağı sonucu çıkarılır.
Bu algoritma, uygulamalarda bir dizi içindeki elemanların eşit toplama sahip alt kümeleri bulmak için kullanılabilir.


ALGORİTMANIN ÇALIŞMA ŞEKLİ


Bu program, bir dizi elemanın iki eşit toplama sahip alt kümeye ayrılıp ayrılamayacağını kontrol eder. Program, alt kümeler oluşturmak için bir özyineleme fonksiyonu kullanır.
İlk olarak, kullanıcıdan dizinin uzunluğu ve elemanları alınır. Daha sonra, "subsetSum" fonksiyonu, dizinin elemanlarının tüm kombinasyonlarını deneyerek alt kümeler oluşturur.
"subsetSum" fonksiyonu, bir elemanı bir alt küme toplamına ekleyerek başlar ve daha sonra aynı elemanı diğer alt küme toplamına ekleyerek devam eder. Bu şekilde, tüm olası alt kümeler oluşturulur.
Fonksiyon, alt kümeleri oluşturduktan sonra, alt kümelerin toplamlarının eşit olup olmadığını kontrol eder. Eşit toplamlar varsa, "yap" değişkeni 1 olarak ayarlanır.
Son olarak, "main" fonksiyonu, "yap" değişkeninin değerine göre, dizinin iki eşit toplama sahip alt kümeye ayrılıp ayrılamayacağını bildirir. Eğer "yap" değişkeni 1 ise, dizinin iki eşit toplama sahip alt kümeye ayrılabileceği yazdırılır. Aksi takdirde, dizinin iki eşit toplama sahip alt kümeye ayrılamayacağı yazdırılır.

