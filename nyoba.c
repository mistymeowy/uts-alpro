#include <stdio.h>
#include <math.h>

// Fungsi untuk menghitung jarak antara dua titik
double hitungJarak(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    double xAwal, yAwal, xResto, yResto;

    // Input koordinat titik awal
    printf("Masukkan koordinat titik awal (x y): ");
    scanf("%lf %lf", &xAwal, &yAwal);

    // Input koordinat restoran
    printf("Masukkan koordinat restoran (x y): ");
    scanf("%lf %lf", &xResto, &yResto);

    // Hitung jarak
    double jarak = hitungJarak(xAwal, yAwal, xResto, yResto);

    // Menampilkan hasil
    printf("Jarak dari titik awal ke restoran: %lf\n", jarak);

    return 0;
}
