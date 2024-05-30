#include <stdio.h>

float crystalTienDien(int KWh) {
    float tiendien = 0;
    if (KWh <= 50) {
        tiendien = KWh * 500;
    } else if (KWh >= 51 && KWh <= 100) {
        tiendien = 50 * 500 + (KWh - 50) * 700;
    } else if(KWh > 100){
        tiendien = 50 * 500 + 50 * 700 + (KWh - 100) * 900;
    }
    return tiendien;
}

int main() {
   float hoadon1 =30.0;
   float hoadon2 =80.0;
   float hoadon3 =120.0;

   printf("tong so tien dien cho %d kWh là %.1f VND\n",hoadon1,crystalTienDien(hoadon1));
   printf("tong so tien dien cho %d kWh là %.1f VND\n",hoadon2,crystalTienDien(hoadon2));
   printf("tong so tien dien cho %d kWh là %.1f VND\n",hoadon3,crystalTienDien(hoadon3));

}
