#include <stdio.h>
    float ahmet_yas;
    float ahmet_gelir;
    float ahmet_boy;
    float ahmet_kilo;
void BMI_ahmet_sorgu()
{
    printf("ahmetin boyunu m biriminden gir=");
    scanf("%f.2 ",&ahmet_boy);
    printf("ahmetin kilosunu kg biriminden gir=");
    scanf("%f.2 ",&ahmet_kilo);
    float bmi = ahmet_kilo / (ahmet_boy * ahmet_boy);
    printf("Ahmet'in BMI degeri: %.2f\n", bmi);
}
void mehmetin_degerleri(float *y,float *g)
{
    printf("mehmetin yası kaç ");
    scanf("%f", y);
    printf("mehmetin gelir ne kadar ");
    scanf("%f", g);
    /*
 NOT:
 C dilinde fonksiyonlara parametreler varsayılan olarak "değer ile geçiş (pass-by-value)" yapar.
 Yani, fonksiyona gönderilen değişkenlerin **kopyaları** fonksiyon içinde kullanılır.
 Fonksiyon içinde bu kopyalar değiştirilse bile, orijinal değişkenler etkilenmez.

 Bu nedenle, fonksiyonun içinde yapılan değişikliklerin dışarı yansıması için,
 değişkenlerin **adresleri (pointer)** fonksiyona gönderilmelidir.

 Örneğin:
 void fonksiyon(float *p) {
     *p = 10; // p'nin işaret ettiği değişkenin değeri değiştirilir
 }

 int main() {
     float a = 5;
     fonksiyon(&a);  // a'nın adresi fonksiyona gönderilir
     // a artık 10 olur
 }

 Kodunda 'mehmetin_degerleri' fonksiyonu parametre olarak float *y, float *g
 şeklinde işaretçiler almalı ve çağrılırken değişkenlerin adresleri gönderilmelidir.
 Böylece scanf fonksiyonunda bu adreslere kullanıcıdan değer yazılabilir ve
 dış değişkenler güncellenir.
 */

}
void ahmetin_degerleri()
{
    printf("Ahmet'in yasini gir: ");
    scanf("%f", &ahmet_yas);
    printf("Ahmet'in gelirini gir: ");
    scanf("%f", &ahmet_gelir);
}
void gelir_yas_farkı()
{
    float mehmet_yas;
    float mehmet_gelir;
    mehmetin_degerleri(&mehmet_yas,&mehmet_gelir);
    ahmetin_degerleri();
    float yas_fark = ahmet_yas - mehmet_yas;
    float gelir_fark = ahmet_gelir - mehmet_gelir;
    printf("ahmet mehmetten %f yas büyük",yas_fark);
    printf("ahmet mehmetten %f lira fazla kazanır",gelir_fark);
}
int main()
{
    BMI_ahmet_sorgu();
    gelir_yas_farkı();
    return 0;
}