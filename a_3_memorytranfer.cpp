//***********Memory exchange working*****************
#include <xc.h>
void main(void) {
int temp , i;
int array1[] = {0x11,0x12,0x13,0x14,0x15,0x16,0x17,0x18};
int array2[] = {0x51,0x52,0x53,0x54,0x55,0x56,0x57,0x58};
for(i=0; i <= 7; i++)
{
temp = array1[i];
array1[i] = array2[i];
array2[i] = temp;
}
return;
}

//-********************Memory transfer*******************
#include <xc.h>
void main(void) {
int temp, i ;
int source [] = {0x21,0x22,0x23,0x24,0x25};
int dest [] = {0x00,0x00,0x00,0x00,0x00};
for(i=0; i <= 4 ; i++)
{
dest[i] = source[i];
}
return;
}