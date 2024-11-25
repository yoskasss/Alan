#include <stdio.h>

// Ana fonksiyon
int main() {
    int sec;            // Seçenek
    float pi = 3.14;    // Pi sabiti
    int kareAytir;      // Karenin bir kenar uzunluğu
    int r;              // Dairenin yarıçapı
    int A;              // Üçgenin tabanı
    int h;              // Üçgenin yüksekliği

    // Kullanıcıdan geometrik şekil seçimi al
    printf("1- Kare\n2- Daire\n3- Üçgen\nBir Seçenek Girin: \n> ");
    scanf("%d", &sec);

    switch (sec) {
    case 1:
        // Kare için alan hesaplama
        printf("\nKarenin bir ayrıt uzunluğunu girin: \n> ");
        scanf("%d", &kareAytir);
        printf("\nKare Alanı: %d\n", kareAytir * kareAytir);

        // Devam etmek isteyip istemediğini sor
        int devam;
        printf("\nDevam Etmek İster Misiniz?\n1- Evet\n2- Hayır\n> ");
        scanf("%d", &devam);

        if (devam == 1) {
            main();  // Yeniden başlat
        } else {
            printf("\nProgram Sonlandırıldı.");
            break;
        }
        break;

    case 2:
        // Daire için alan hesaplama
        printf("\nDairenin Yarıçapını Giriniz: \n> ");
        scanf("%d", &r);
        printf("\nDaire Alanı: %.2f\n", pi * r * r);

        // Devam etmek isteyip istemediğini sor
        int devam2;
        printf("\nDevam Etmek İster Misiniz?\n1- Evet\n2- Hayır\n> ");
        scanf("%d", &devam2);

        if (devam2 == 1) {
            main();  // Yeniden başlat
        } else {
            printf("\nProgram Sonlandırıldı.");
            break;
        }
        break;

    case 3:
        // Üçgen için alan hesaplama
        printf("\nÜçgenin Tabanını Giriniz: \n> ");
        scanf("%d", &A);
        printf("\nÜçgenin Yüksekliğini Girin: \n> ");
        scanf("%d", &h);
        printf("\nÜçgen Alanı: %.2f\n", (A * h) / 2.0);  // Alan formülü (1/2 * taban * yükseklik)

        // Devam etmek isteyip istemediğini sor
        int devam3;
        printf("\nDevam Etmek İster Misiniz?\n1- Evet\n2- Hayır\n> ");
        scanf("%d", &devam3);

        if (devam3 == 1) {
            main();  // Yeniden başlat
        } else {
            printf("\nProgram Sonlandırıldı.");
            break;
        }
        break;

    default:
        // Geçersiz seçim için mesaj ve çıkış opsiyonu
        printf("\nGeçersiz seçim.\n");
        int cikis;
        printf("\nProgramdan Çıkmak İstiyor musunuz? (1: Evet, 2: Hayır): \n> ");
        scanf("%d", &cikis);

        if (cikis == 1) {
            printf("\nProgram Sonlandırıldı.");
        } else {
            main();  // Yeniden başlat
        }
        break;
    }

    return 0;  // Programı sonlandır
}
