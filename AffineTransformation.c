#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");

	double Ox1, Ox2, Ox3, Ox4, Oy1, Oy2, Oy3, Oy4;
	double OX1, OX2, OX3, OX4, OY1, OY2, OY3, OY4;
	double x, y;
	double xg, yg, Xg, Yg;
	double xo1, yo1, xo2, yo2, xo3, yo3, xo4, yo4, Xo1, Yo1, Xo2, Yo2, Xo3, Yo3, Xo4, Yo4;
	double a, b, c, d, e, f;
	double Xd1, Yd1, Xd2, Yd2, Xd3, Yd3, Xd4, Yd4;
	double Vx1, Vy1, Vx2, Vy2, Vx3, Vy3, Vx4, Vy4;
	double X1new, X2new, X3new, X4new, Y1new, Y2new, Y3new, Y4new;
	double X, Y;
	double n, mo;
	double mp;
	double lamda1, lamda2;

	// Bilinenleri isteyelim.
	printf(" === Ortak stereomodel koordinatları giriniz! ===\n");
	// Ox1 değerini isteyelim.
	printf("Ox1 değerini giriniz: ");
	scanf("%lf", &Ox1);
	// Ox2 değerini isteyelim.
	printf("Ox2 değerini giriniz: ");
	scanf("%lf", &Ox2);
	// Ox3 değerini isteyelim.
	printf("Ox3 değerini giriniz: ");
	scanf("%lf", &Ox3);
	// Ox4 değerini isteyelim.
	printf("Ox4 değerini giriniz: ");
	scanf("%lf", &Ox4);
	// Oy1 değerini isteyelim.
	printf("Oy1 değerini giriniz: ");
	scanf("%lf", &Oy1);
	// Oy2 değerini isteyelim.
	printf("Oy2 değerini giriniz: ");
	scanf("%lf", &Oy2);
	// Oy3 değerini isteyelim.
	printf("Oy3 değerini giriniz: ");
	scanf("%lf", &Oy3);
	// Oy4 değerini isteyelim.
	printf("Oy4 değerini giriniz: ");
	scanf("%lf", &Oy4);
	printf("\n === Ortak arazi koordinatlarını giriniz! ===\n");
	// OX1 değerini isteyelim.
	printf("OX1 değerini giriniz: ");
	scanf("%lf", &OX1);
	// OX2 değerini isteyelim.
	printf("OX2 değerini giriniz: ");
	scanf("%lf", &OX2);
	// OX3 değerini isteyelim.
	printf("OX3 değerini giriniz: ");
	scanf("%lf", &OX3);
	// OX4 değerini isteyelim.
	printf("OX4 değerini giriniz: ");
	scanf("%lf", &OX4);
	// OY1 değerini isteyelim.
	printf("OY1 değerini giriniz: ");
	scanf("%lf", &OY1);
	// OY2 değerini isteyelim.
	printf("OY2 değerini giriniz: ");
	scanf("%lf", &OY2);
	// OY3 değerini isteyelim.
	printf("OY3 değerini giriniz: ");
	scanf("%lf", &OY3);
	// OY4 değerini isteyelim.
	printf("OY4 değerini giriniz: ");
	scanf("%lf", &OY4);
	printf("\n === Steromodel koordinatlar giriniz! === \n");
	// x değerini isteyelim.
	printf("x değerini giriniz: ");
	scanf("%lf", &x);
	// y değerini isteyelim.
	printf("y değerini giriniz: ");
	scanf("%lf", &y);

	// Bilinmeyenleri hesaplama.
	/* a,b,c,d dönüşüm parametrelerinin hesaplanması;
	Ortak noktalar kümesinin ağırlık noktası hesaplanması; xg, yg, Xg, Yg
	xg = (Ox1 + Ox2 + Ox3 + Ox4) / 4;
	yg = (Oy1 + Oy2 + Oy3 + Oy4) / 4;
	Xg = (OX1 + OX2 + OX3 + OX4) / 4;
	Yg = (OY1 + OY2 + OY3 + OY4) / 4; */
	//printf("\n");
	xg = (Ox1 + Ox2 + Ox3 + Ox4) / 4;
	//printf("xg değeri: %Lf\n", xg);
	yg = (Oy1 + Oy2 + Oy3 + Oy4) / 4;
	//printf("yg değeri: %Lf\n", yg);
	Xg = (OX1 + OX2 + OX3 + OX4) / 4;
	//printf("Xg değeri: %Lf\n", Xg);
	Yg = (OY1 + OY2 + OY3 + OY4) / 4;
	//printf("Yg değeri: %Lf\n", Yg);
	/* Ortak noktaların Ötelenmiş koordinatlarının hesaplanması;
	xo1, yo1, xo2, yo2, xo3, yo3, xo4, yo4, Xo1, Yo1, Xo2, Yo2, Xo3, Yo3, Xo4, Yo4
	xo1 = Ox1 - xg;
	yo1 = Oy1 - yg;
	xo2 = Ox2 - xg;
	yo2 = Oy2 - yg;
	xo3 = Ox3 - xg;
	yo3 = Oy3 - yg;
	xo4 = Ox4 - xg;
	yo4 = Oy4 - yg;
	Xo1 = OX1 - Xg;
	Yo1 = OY1 - Yg;
	Xo2 = OX2 - Xg;
	Yo2 = OY2 - Yg;
	Xo3 = OX3 - Xg;
	Yo3 = OY3 - Yg;
	Xo4 = OX4 - Xg;
	Yo4 = OY4 - Yg; */  
	// Sıralamasını düzelt!!!
	xo1 = Ox1 - xg;
	yo1 = Oy1 - yg;
	xo2 = Ox2 - xg;
	yo2 = Oy2 - yg;
	xo3 = Ox3 - xg;
	yo3 = Oy3 - yg;
	xo4 = Ox4 - xg;
	yo4 = Oy4 - yg;
	Xo1 = OX1 - Xg;
	Yo1 = OY1 - Yg;
	Xo2 = OX2 - Xg;
	Yo2 = OY2 - Yg;
	Xo3 = OX3 - Xg;
	Yo3 = OY3 - Yg;
	Xo4 = OX4 - Xg;
	Yo4 = OY4 - Yg;
	//printf("\n ### Dönüştürülmüş arazi koordinatları! ### \n");
	//printf("xo1 değeri: %f\t yo1 değeri: %f\n", xo1, yo1);
	//printf("xo2 değeri: %f\t yo2 değeri: %f\n", xo2, yo2);
	//printf("xo3 değeri: %f\t yo3 değeri: %f\n", xo3, yo3);
	//printf("xo4 değeri: %f\t yo4 değeri: %f\n", xo4, yo4);
	//printf("Xo1 değeri: %f\t Yo1 değeri: %f\n", Xo1, Yo1);
	//printf("Xo2 değeri: %f\t Yo2 değeri: %f\n", Xo2, Yo2);
	//printf("Xo3 değeri: %f\t Yo3 değeri: %f\n", Xo3, Yo3);
	//printf("Xo4 değeri: %f\t Yo4 değeri: %f\n", Xo4, Yo4);
	/*  Ötelenmiş koordinatlar ile dönüşüm parametrelerinin hesaplanması; a, b, c, d, e, f
	a = ((((yo1 * yo1) + (yo2 * yo2) + (yo3 * yo3) + (yo4 * yo4)) * ((xo1 * Xo1) + (xo2 * Xo2) + (xo3 * Xo3) + (xo4 * Xo4))) - (((xo1 * yo1) + (xo2 * yo2) + (xo3 * yo3) + (xo4 * yo4)) * ((yo1 * Xo1) + (yo2 * Xo2) + (yo3 * Xo3) + (yo4 * Xo4)))) / ((((xo1 * xo1) + (xo2 * xo2) + (xo3 * xo3) + (xo4 * xo4)) * ((yo1 * yo1) + (yo2 * yo2) + (yo3 * yo3) + (yo4 * yo4))) - ((((xo1 * yo1) + (xo2 * yo2) + (xo3 * yo3) + (xo4 * yo4)) ^ 2)));
	b = ((((xo1 * xo1) + (xo2 * xo2) + (xo3 * xo3) + (xo4 * xo4)) * ((yo1 * Xo1) + (yo2 * Xo2) + (yo3 * Xo3) + (yo4 * Xo4))) - (((xo1 * yo1) + (xo2 * yo2) + (xo3 * yo3) + (xo4 * yo4)) * ((xo1 * Xo1) + (xo2 * Xo2) + (xo3 * Xo3) + (xo4 * Xo4)))) / ((((xo1 * xo1) + (xo2 * xo2) + (xo3 * xo3) + (xo4 * xo4)) * ((yo1 * yo1) + (yo2 * yo2) + (yo3 * yo3) + (yo4 * yo4))) - ((((xo1 * yo1) + (xo2 * yo2) + (xo3 * yo3) + (xo4 * yo4)) ^ 2)));
	c = Xg - (a * xg) - (b * yg);
	d = ((((yo1 * yo1) + (yo2 * yo2) + (yo3 * yo3) + (yo4 * yo4)) * ((xo1 * Yo1) + (xo2 * Yo2) + (xo3 * Yo3) + (xo4 * Yo4))) - (((xo1 * yo1) + (xo2 * yo2) + (xo3 * yo3) + (xo4 * yo4)) * ((yo1 * Yo1) + (yo2 * Yo2) + (yo3 * Yo3) + (yo4 * Yo4)))) / ((((xo1 * xo1) + (xo2 * xo2) + (xo3 * xo3) + (xo4 * xo4)) * ((yo1 * yo1) + (yo2 * yo2) + (yo3 * yo3) + (yo4 * yo4))) - ((((xo1 * yo1) + (xo2 * yo2) + (xo3 * yo3) + (xo4 * yo4)) ^ 2)));
	e = ((((xo1 * xo1) + (xo2 * xo2) + (xo3 * xo3) + (xo4 * xo4)) * ((yo1 * Yo1) + (yo2 * Yo2) + (yo3 * Yo3) + (yo4 * Yo4))) - (((xo1 * yo1) + (xo2 * yo2) + (xo3 * yo3) + (xo4 * yo4)) * ((xo1 * Yo1) + (xo2 * Yo2) + (xo3 * Yo3) + (xo4 * Yo4)))) / ((((xo1 * xo1) + (xo2 * xo2) + (xo3 * xo3) + (xo4 * xo4)) * ((yo1 * yo1) + (yo2 * yo2) + (yo3 * yo3) + (yo4 * yo4))) - ((((xo1 * yo1) + (xo2 * yo2) + (xo3 * yo3) + (xo4 * yo4)) ^ 2)));
	f = Yg - (d * xg) - (e * yg); */
	a = ((((yo1 * yo1) + (yo2 * yo2) + (yo3 * yo3) + (yo4 * yo4)) * ((xo1 * Xo1) + (xo2 * Xo2) + (xo3 * Xo3) + (xo4 * Xo4))) - (((xo1 * yo1) + (xo2 * yo2) + (xo3 * yo3) + (xo4 * yo4)) * ((yo1 * Xo1) + (yo2 * Xo2) + (yo3 * Xo3) + (yo4 * Xo4)))) / ((((xo1 * xo1) + (xo2 * xo2) + (xo3 * xo3) + (xo4 * xo4)) * ((yo1 * yo1) + (yo2 * yo2) + (yo3 * yo3) + (yo4 * yo4))) - (pow(((xo1 * yo1) + (xo2 * yo2) + (xo3 * yo3) + (xo4 * yo4)), 2)));
	b = ((((xo1 * xo1) + (xo2 * xo2) + (xo3 * xo3) + (xo4 * xo4)) * ((yo1 * Xo1) + (yo2 * Xo2) + (yo3 * Xo3) + (yo4 * Xo4))) - (((xo1 * yo1) + (xo2 * yo2) + (xo3 * yo3) + (xo4 * yo4)) * ((xo1 * Xo1) + (xo2 * Xo2) + (xo3 * Xo3) + (xo4 * Xo4)))) / ((((xo1 * xo1) + (xo2 * xo2) + (xo3 * xo3) + (xo4 * xo4)) * ((yo1 * yo1) + (yo2 * yo2) + (yo3 * yo3) + (yo4 * yo4))) - (pow(((xo1 * yo1) + (xo2 * yo2) + (xo3 * yo3) + (xo4 * yo4)), 2)));
	c = Xg - (a * xg) - (b * yg);
	d = ((((yo1 * yo1) + (yo2 * yo2) + (yo3 * yo3) + (yo4 * yo4)) * ((xo1 * Yo1) + (xo2 * Yo2) + (xo3 * Yo3) + (xo4 * Yo4))) - (((xo1 * yo1) + (xo2 * yo2) + (xo3 * yo3) + (xo4 * yo4)) * ((yo1 * Yo1) + (yo2 * Yo2) + (yo3 * Yo3) + (yo4 * Yo4)))) / ((((xo1 * xo1) + (xo2 * xo2) + (xo3 * xo3) + (xo4 * xo4)) * ((yo1 * yo1) + (yo2 * yo2) + (yo3 * yo3) + (yo4 * yo4))) - (pow(((xo1 * yo1) + (xo2 * yo2) + (xo3 * yo3) + (xo4 * yo4)), 2)));
	e = ((((xo1 * xo1) + (xo2 * xo2) + (xo3 * xo3) + (xo4 * xo4)) * ((yo1 * Yo1) + (yo2 * Yo2) + (yo3 * Yo3) + (yo4 * Yo4))) - (((xo1 * yo1) + (xo2 * yo2) + (xo3 * yo3) + (xo4 * yo4)) * ((xo1 * Yo1) + (xo2 * Yo2) + (xo3 * Yo3) + (xo4 * Yo4)))) / ((((xo1 * xo1) + (xo2 * xo2) + (xo3 * xo3) + (xo4 * xo4)) * ((yo1 * yo1) + (yo2 * yo2) + (yo3 * yo3) + (yo4 * yo4))) - (pow(((xo1 * yo1) + (xo2 * yo2) + (xo3 * yo3) + (xo4 * yo4)), 2)));
	f = Yg - (d * xg) - (e * yg);
	/* Ortak noktaların Dönüştürülmüş Koordinatlarının hesaplanması(Afin Dönüşümü ile); 
	Xd1, Yd1, Xd2, Yd2, Xd3, Yd3, Xd4, Yd4;
	Xd1 = (a * Ox1) + (b * Oy1) + c;
	Yd1 = (d * Ox1) + (e * Oy1) + f;
	Xd2 = (a * Ox2) + (b * Oy2) + c;
	Yd2 = (d * Ox2) + (e * Oy2) + f;
	Xd3 = (a * Ox3) + (b * Oy3) + c;
	Yd3 = (d * Ox3) + (e * Oy3) + f;
	Xd4 = (a * Ox4) + (b * Oy4) + c;
	Yd4 = (d * Ox4) + (e * Oy4) + f; */
	//printf("\n");
	Xd1 = (a * Ox1) + (b * Oy1) + c;
	//printf("Xd1 değeri: %Lf\n", Xd1);
	Yd1 = (d * Ox1) + (e * Oy1) + f;
	//printf("Yd1 değeri: %Lf\n", Yd1);
	Xd2 = (a * Ox2) + (b * Oy2) + c;
	//printf("Xd2 değeri: %Lf\n", Xd2);
	Yd2 = (d * Ox2) + (e * Oy2) + f;
	//printf("Yd2 değeri: %Lf\n", Yd2);
	Xd3 = (a * Ox3) + (b * Oy3) + c;
	//printf("Xd3 değeri: %Lf\n", Xd3);
	Yd3 = (d * Ox3) + (e * Oy3) + f;
	//printf("Yd3 değeri: %Lf\n", Yd3);
	Xd4 = (a * Ox4) + (b * Oy4) + c;
	//printf("Xd4 değeri: %Lf\n", Xd4);
	Yd4 = (d * Ox4) + (e * Oy4) + f;
	//printf("Yd4 değeri: %Lf\n", Yd4);
	/* Ortak Noktaların Koordinatlarına getirilecek düzeltmelerin hesaplanması;
	Vx1, Vy1, Vx2, Vy2, Vx3, Vy3, Vx4, Vy4;
	Vx1 = Xd1 - OX1;
	Vy1 = Yd1 - OY1;
	Vx2 = Xd2 - OX2;
	Vy2 = Yd2 - OY2;
	Vx3 = Xd3 - OX3;
	Vy3 = Yd3 - OY3;
	Vx4 = Xd4 - OX4;
	Vy4 = Yd4 - OY4; */
	Vx1 = Xd1 - OX1;
	Vy1 = Yd1 - OY1;
	Vx2 = Xd2 - OX2;
	Vy2 = Yd2 - OY2;
	Vx3 = Xd3 - OX3;
	Vy3 = Yd3 - OY3;
	Vx4 = Xd4 - OX4;
	Vy4 = Yd4 - OY4;
	// İlk girilen arazi değerleri ile düzeltmeleri ekleyelim.
	X1new = Ox1 + Vx1;
	X2new = Ox2 + Vx2;
	X3new = Ox3 + Vx3;
	X4new = Ox4 + Vx4;
	Y1new = Oy1 + Vy1;
	Y2new = Oy2 + Vy2;
	Y3new = Oy3 + Vy3;
	Y4new = Oy4 + Vy4;
	printf("\n ### Dönüştürülmüş arazi koordinatları! ### \n");
	printf("X1new değeri: %f\t Y1new değeri: %f\n", X1new, Y1new);
	printf("X2new değeri: %f\t Y2new değeri: %f\n", X2new, Y2new);
	printf("X3new değeri: %f\t Y3new değeri: %f\n", X3new, Y3new);
	printf("X4new değeri: %f\t Y4new değeri: %f\n", X4new, Y4new);
	printf("\n\t    ### Düzeltmeler! ### \n");
	printf("Vx1 değeri: %f\t Vy1 değeri: %f\n", Vx1, Vy1);
	printf("Vx2 değeri: %f\t Vy2 değeri: %f\n", Vx2, Vy2);
	printf("Vx3 değeri: %f\t Vy3 değeri: %f\n", Vx3, Vy3);
	printf("Vx4 değeri: %f\t Vy4 değeri: %f\n", Vx4, Vy4);
	/* Ortak noktalar dışındaki, diğer stereomodel koordinatlarına karşılık gelen arazi koordinatlarının hesaplanması (Afin Dönüşümü ile);
	X, Y;
	X = (a * x) + (b * y) + c;
	Y = (d * x) + (e * y) + f; */
	X = (a * x) + (b * y) + c;
	Y = (d * x) + (e * y) + f;
	printf("\n");
	printf("X değeri: %f\n", X);
	printf("Y değeri: %f\n", Y);
	printf("\n");
	printf("a değeri: %f\n", a);
	printf("b değeri: %f\n", b);
	printf("c değeri: %f\n", c);
	printf("d değeri: %f\n", d);
	printf("e değeri: %f\n", e);
	printf("f değeri: %f\n", f);
	/* Bir Koordinatın ortalama hatasının hesaplanması;
	n, mo;
	n = 4;
	mo = Sqrt(((Vx1 ^ 2) + (Vx2 ^ 2) +(Vx3 ^ 2) + (Vx4 ^ 2) + (Vy1 ^ 2) + (Vy2 ^ 2) + (Vy3 ^ 2) +(Vy4 ^ 2)) / ((2 * n) - 6)); */
	printf("\n");
	n = 4;
	mo = pow(((pow(Vx1, 2) + pow(Vx2, 2) +pow(Vx3, 2) + pow(Vx4, 2) + pow(Vy1, 2) + pow(Vy2, 2) + pow(Vy3, 2) +pow(Vy4, 2)) / ((2 * n) - 6)), 0.5);
	printf("mo değeri: %f\n", mo);
	/* Konum ortalama hatasının hesaplanması;
	mp;
	mp =Sqrt(((Vx1 ^ 2) + (Vx2 ^ 2) +(Vx3 ^ 2) + (Vx4 ^ 2) + (Vy1 ^ 2) + (Vy2 ^ 2) + (Vy3 ^ 2) +(Vy4 ^ 2)) / (n - 3)); */
	printf("\n");
	mp =pow(((pow(Vx1, 2) + pow(Vx2, 2) +pow(Vx3, 2) + pow(Vx4, 2) + pow(Vy1, 2) + pow(Vy2, 2) + pow(Vy3, 2) +pow(Vy4, 2)) / (n - 3)), 0.5);
	printf("mp değeri: %f\n", mp);
	/* Ölçek hesaplanması; 
	lamda1, lamda2;
	lamda1 = Sqrt((a^2) + (d^2));
	lamda2 = Sqrt((b^2) + (e^2)); */
	printf("\n");
	lamda1 = pow((pow(a, 2) + pow(d, 2)), 0.5);
	printf("lamda1 değeri: %f\n", lamda1);
	lamda2 = pow((pow(b, 2) + pow(e, 2)), 0.5);
	printf("lamda2 değeri: %f\n", lamda2);

	return 0;
}
