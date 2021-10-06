#include <stdio.h>
#include <conio.h>

int main () {

int vize,final;
float sonuc;


printf("vize notunuzu giriniz;");
scanf("%d", &vize);
printf("final notunuzu giriniz:");
scanf("%d", &final);


sonuc = (4*vize)+(6*final);
sonuc /=10;

if (sonuc > 90)  printf("sonucunuz %.2f, harf notunuz AA'dir", sonuc); 
    
else if (sonuc > 84 && sonuc < 90) printf("sonucunuz %.2f, harf notunuz BA'dir", sonuc); 
else if (sonuc >79 && sonuc < 85) printf("sonucunuz %.2f, harf notunuz BB'dir", sonuc); 
else if (sonuc >74 && sonuc < 80) printf("sonucunuz %.2f, harf notunuz CB'dir", sonuc); 
 
else if (sonuc >69 && sonuc < 75) printf("sonucunuz %.2f, harf notunuz CC'dir", sonuc);  
 else if (sonuc >59 && sonuc < 70) printf("sonucunuz %.2f, harf notunuz DC'dir", sonuc); 
 else if (sonuc >49 && sonuc < 60) printf("sonucunuz %.2f, harf notunuz DD'dir", sonuc); 
 else printf("kaldýn amk mali");
 
 
 getch ();
 return 0;   
    
}
