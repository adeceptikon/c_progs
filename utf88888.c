#include <windows.h>

typedef unsigned char utf8_t;
typedef unsigned short utf16_t;
typedef unsigned long utf32_t;
#define  MAX 300
int main ( int argc, char *argv[] )
{
  int msgBoxId , i;
  utf16_t lpText[MAX]; //= { 0x03B1, 0x0009, 0x03B2, 0x0009, 0x03B3, 0x0009, 0x03B4, 0x0000 };
  utf16_t t = 0x0900;
//  int num[] = {2,4,4,5,6,7,8,8,9,3};
    for (i = 0 ; i< MAX ; i++){
        if(i%2 == 0){
            lpText[i] =  '\t';
        }else {
            lpText[i] = t;
            t++;
        }

    }
  utf16_t lpCaption[] = L"अपनो characters";
  unsigned int uType = MB_OK;
  msgBoxId = MessageBoxW( NULL, lpText, lpCaption, uType );
  return 0;
}
