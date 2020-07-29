# Afin Dönüşümü

### **Amaç**

Dört parametreli Helmert Benzerlik Dönüşümü yerine, fotogrametride bazı problemlerin çözümünde altı parametreli Afin Dönüşümü uygulanır. Fotogrametride, mutlak Yöneltme tam olarak yapılmamışsa, model koordinatların arazi koordinatlarına  afin dönüşümü ile dönüştürülmesi daha uygun olmaktadır.

Yazılım, Stereomodel koordinatları ve Arazi Koordinatları bilinen 4 ortak nokta yardımı ile dönüşüm katsayılarını hesaplamakta ve bu katsayılar ile diğer stereomodel koordinatlarının başka sistemdeki arazi koordinatlarını hesaplamaya (Afin Dönüşümü)yardımcı olmak amaçlı kullanılmaktadır.

NOT: Koordinatlar arasında korelasyon yok ve herbir koordinat eşit ağırlıklı olarak düşünülmelidir.

### **Kullanım Rehberi;**

Yazılımı çalıştırdığınız zaman;

+ Ortak stereomodel koordinatlar; Ox1, Ox2, Ox3, Ox4, Oy1, Oy2, Oy3, Oy4
+ Ortak arazi koordinatlar; OX1, OX2, OX3, OX4, OY1, OY2, OY3, OY4
+ Steromodel koordinatlar; x, y
- [ ] Yukarıdaki değerlerinde girilmesi gerekmektedir. Değerler girildikten hemen sonra kendisi otomatik hesaplar.

*Hesaplanan;*
- Afin dönüşüm parametreleri; a, b, c, d, e, f
- Stereomodel koordinatlarına karşılık gelen arazi koordinatları; X, Y
